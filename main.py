# importing the libraries

import discord
from discord import app_commands
from utils import(
    getresponse,
    initializeConversation,
) 3 importing the functions from utils.py

import functools
import typing
import asyncio 

GUILD_ID=1096895752632021192
MY_GUILD = discord.Object(id=GUILD_ID)
AI_LOADED = False
BOT_TOKEN = MTA5NzA3Njg0ODAxMTI1MTc0NA.G-fkrM.lyAiJohyrtPTOQLJnOY4HN5Oh2vs_UM-o9TGU0

class MyClient(discord.Client):
    def __init__(self, *, intents: discord.Intents):
        super().__init__(intents=intents)
        # A CommandTree is a special type that holds all the application command
        # state required to make it work. This is a separate class because it
        # allows all the extra state to be opt-in.
        # Whenever you want to work with application commands, your tree is used
        # to store and work with them.
        # Note: When using commands.Bot instead of discord.Client, the bot will
        # maintain its own tree instead.
        self.tree = app_commands.CommandTree(self)

    # In this basic example, we just synchronize the app commands to one guild.
    # Instead of specifying a guild to every command, we copy over our global commands instead.
    # By doing so, we don't have to wait up to an hour until they are shown to the end-user.
    async def setup_hook(self):
        # This copies the global commands over to your guild.
        self.tree.copy_global_to(guild=MY_GUILD)
        await self.tree.sync(guild=MY_GUILD)


intents = discord.Intents.default()
client = MyClient(intents=intents) 
# We need to use asyncio.to_thread to run the functions in a separate thread
def to_thread(func: typing.Callable) -> typing.Coroutine:
    @functools.wraps(func)
    async def wrapper(*args, **kwargs):
        return await asyncio.to_thread(func, *args, **kwargs)

    return wrapper

# Get response from the AI
@to_thread
def get_ai(promt):
    resp = getResponse(promt)
    return resp

# Initialize/Reload the conversation
@to_thread
def start_ai():
    global AI_LOADED
    initializeConversation()
    AI_LOADED = True
    return

@client.event
async def on_ready():
    print(f"Logged in as {client.user} (ID: {client.user.id})")
    print("------")


@client.tree.command()
async def hello(interaction: discord.Interaction):
    """Says hello!"""
    await interaction.response.send_message(f"Hi, {interaction.user.mention}")

# admin only
# reloads the AI
@client.tree.command()
@app_commands.default_permissions()
@app_commands.guild_only()
async def start(interaction: discord.Interaction):
    """Reloads/Starts the AI"""
    await interaction.response.defer()
    await start_ai()
    embed = discord.Embed(color=discord.colour.Color.yellow(), title="AI Reloaded")
    embed.description = "To use the AI, use the `/prompt` command"
    return await interaction.followup.send(embed=embed)

