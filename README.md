# CS210-ClockProject

# Summarize the project and what problem it is solving?
I created an application that takes user input and updates a clock displayed in 12 and 24 hour format. My application utilizes a display menu prompting the user to add 1 second, 1 minute, or one hour which updates both clocks simultaneously upon execution. My program solved the problem in which the user needed two clocks to be updated and viewed at the same time.

# What did you do particularly well?
In this program, I utilized the power and functionality of C++'s object oriented programming capabilites. I also minimized the amount of code within main by creating 3 header files to store my program classes. By creating header files and utilizing object oriented programming, I created an exceptionally readable and concise application to follow and understand.

# Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?
The main area I would enhance my code is within the user input area of main. At the moment, I handled any situation to print an error statement if the user did not explicitly enter the integer number like two. Even if the user entered "two", the error message would execute and they would be prompted to try again. I would add a conditional statement to take input like "two" and cast it as an integer so the swtich statement code would execute based on the display menu for the clock. This change would make my code more secure by handling an error but also more efficient by allowing the program to continue and execute what the user wants because they still entered the correct option but in a different format.

# Did you find writing any piece of this code challenging, and how did you overcome this? What tools and/or resources are you adding to your support network?
I was very confident writing the code for this project. I enjoy and have the most experience creating applications that rely on user input and display menus. However, the code within main to create the display for the clocks themselves proved difficult when I would have an extra zero when there were two digits in the hour positions. I tried to debug myself but I could not figure it out. I decided to reach out to the tutoring services within SNHU and a tutor was able to walk me through and help me realize my bug was within one of my conditonal statements. Throughout my academic career I will deinitely utilize the tutoring resource at SNHU.

# What skills from this project will be particularly transferable to other projects and/or course work?
The heavy emphasis on object oriented programming will be particularly transferable to other projects since most of the languages I will be learning throughout my academic career are OOP based. By continuing to practice using this skill, I will continue to make myself desireable to potential employers in the future. This project was also the first time I utilized header files. They are a useful skill to know so the amount of code within main is minimized.

# How did you make this program maintainable, readable, and adaptable.
I made this program maintainable, readable, and adaptable by creating classes and header files for all of the componenets within the program. Intuitively, there are two classes for the 12 and 24 hour clocks. There is also a class and header file for Clock in which the other two classes inherit. This allows the code to be highly adaptable since each part of the program can be accessed and edited to the programmers specifications. I also made sure to follow organization standards for syntax and whitespace which makes for a highly readable program.
