# Cola
Presentation and Portfolio associated with my Cola development environment. Developed in 2019 to showcase my systems programming portfolio using a fun/goofy premise similar to some enterprise software development I have done in the past

This software collects and compiles images from your favorite subreddits and compresses them, creates two tables dbo.zip, and dbo.images. Images will have an association with these zip files in the database for other data based operations. This project is not technically intensive, but has a polyglot complexity that showcases my usage of the unix development environment to work together to complete a goal.

Expected Questions:
	Where are all the functions or classes? 
	A:
		This service was not over-engineered. By the time I finished I looked back at how small it really was. most everything is abstracted as bash/Unix calls which
		is totally allowed, and encouraged. 
	
			"if you can get 90% the bang for 10% the buck, use the shortcut" 
										-FreeBSD contributors manual
			
			"Keep it simple sally" 
										-Engineers Everywhere
	Why this service?
	A:	
		This service fulfills a need. A lot of times I need images or other folks need images to use for openCV or tensorflow. This is a simple collection of shell 
		programs that fulfills this need easily, and simply, while most of the code is reusable as well. Agile mindset and all!

	Why is there no make file?
	A:
		this service is not finished. It likely never will be. It's easy to improve and will likely one day have mySQL support, come with a "cherry" to its "cola"
		that interfaces over the suite allowing daemonized data collection daily, etc. A makefile didn't really make sense in the architecture of the tools. It's almost 
		entirely  

	What are some planned features that might be added in the future?
	A:
		After a bit of work, I might fork this service into many branches with a different daemonized interface. E.G. Cherry Coke will likely use the twitter api and
		reddit-fetch to package images with their posts top comments, as well as hashtags of the most frequently used words in all comments. Vanilla Coke will likely
		use tensorflow to identify pictures of dogs and delete all pictures that aren't dogs, etc. To showcase my ability to work with neural networks. The possibilities
		of this simple service by definition make this the best project I've done, as they showcase my ability to understand and identify useful applications as well as
		implement them in an agile mindset. 



1. Run the install script ./install.sh in your git directory as the super user. 
2. Navigate to Core and compile Cola with ./Compile.sh, it currently will not allow me to compile it from outside of this directory even as root, if you have a solution
		and would like to be credited, send me a pull request and correct that script, moving it to the Cola main directory. 
3. Navigate to subservices/Zip and compile with ./Compile.sh
