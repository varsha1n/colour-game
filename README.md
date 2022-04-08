colour-game

First the user has to input admin_id & password to access the way , which has been shown before-hand to let everyone access the game.
My game shows user a text(a colour) with different or same text colour , which changes everytime new game is played.
user needs to press '1' if both text & colour of the text matches , if not '0'.
the game continues until user wants to quit.
after game ends user can see his score & can compare his score with others in the score board.

Game is pretty simple , but this code deals with most of the concepts of c in a simple & creative way.

I used struct scoreboard to contain player name & score.
For admin_id & password , I used strcmp between admin-id & user entered id.similarly , with password . If both are same , user gets the access to game.
user enters his name & other info for the game scoreoard & better experience.

The game starts with do-while loop.User has enter input between 'o' & '1' to continue or end the game. Then user will be shown rules like enter '1' for same text & text-colour or else '0'.
By set of if-else statements we compare the both text & text-colour with input answer.Then the answer is shown as right or wrong.

Then I opened file scoreboard in append mode & added the above score & player_name to the file.
Then I opened another file in read mode & get the characters from file & printed them on compiler.
Then closed both files.
