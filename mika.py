# mika.py
# by Jonno, Dec 2018
# talk with Mika, the cute anime girl

# save messages as variables
intro = "Hi! I'm Mika, a cute anime girl!"
ask = "How can I help? (Enter help for suggestions.)\n"
confused = "I don't understand"
joke = "My dog has no nose. It smells terribly!"
helpList = "Try entering:\njoke\nexit"

# begin interactions
print(intro)

while 1:
	userInput = input(ask)

	if userInput == "exit":
		exit()

	elif userInput == "help":
		print(helpList)

	elif userInput == "joke":
		print(joke)

	else:
		print(confused, userInput, ".")