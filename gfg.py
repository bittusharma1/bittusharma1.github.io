import openai

API_KEY = "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"

openai.api_key = API_KEY 

def chatgptresponse(conversation):
    try: 
        response = openai.chatcompletion.create(
        model = 'gpt-3.5-turbo'
        message = conersation
        )
    except openai.error.APIConnectionError:
        return None
    
    conversation.append({ 'role': choices[0].message.role, 'content' : response.choices[0].message.content})
    return conversation
#Intializing the AI
def initializeConversation():
    global conversation 
    conversation = []
    conversation.append({'role':'system','content' : 'How may I help you?'})
    conversation = chatgptresponse(conversation)

#Function that returns the response
def getresponse(prompt):
    global conversation 
    conversation.append({ 'role':'user','content' : prompt})    
    
    return conversation[-1]['content'].strip() 

#Below code is just for testing purpose

if __name__ == "_main_":
    choice = 1
    initializeConversation();
    while (choice != 0):
        prompt=input("Enter your prompt :")
        response = getresponse(prompt)
        print(response)
        choice = int(input())
        
    
        