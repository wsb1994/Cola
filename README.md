# Cola
Presentation and Portfolio associated with my Cola development environment. Developed in 2019 to showcase my systems programming portfolio using a fun/goofy premise similar to some enterprise software development I have done in the past

This software collects and compiles images from your favorite subreddits and compresses them, creates two tables dbo.zip, and dbo.images. Images will have an association with these zip files in the database for other data based operations. This project is not technically intensive, but has a polyglot complexity that showcases my usage of the unix development environment to work together to complete the goal.

Expected Questions:
	Where are all the functions or classes? 
	A:
		I used a lot of abstraction with the unix environment, the bash scripts are the functional changes I made. This program is also tiny and most code was never reused. It didn't make sense

	Why this service?
	A:
		I wanted to create something new. I also wanted to avoid using any UK specific assignments like the Autocomplete project from 216 or the Game engine from 215, where a majority of the code was not written by myself. This is all me barring the API! I took it as an excuse to get motivated to gather data in a way that was useful to me personally. 

	Why is there no make file?
	A: this service is not finished. I Will actually use this to build a twitter bot that posts top memes about 10 days after they front page. (I know I'm the worst scum)

1. Run the install script.
2. Navigate to Core and compile 
3. Navigate to subservices/Zip and compile 
