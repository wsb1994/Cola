# Cola Image Downloading/Compiling toolkit | Collect an Objective Library of Assets
Unfinished collection of tools for my Presentation and Portfolio associated with my homebhrew Cola development environment. Developed in 2019 to showcase my systems programming portfolio using a fun/goofy premise similar to some enterprise software development I have done in the past. 

Cola will eventually be interfaced by another group of services "cherry", "vanilla", and "Lime". Each using Cola's image downloading for various purposes. This is to split requirements from the original project and hopefully finish Colas functionality by December 31st. 

Current problems I dislike:

1. Every script is peacemeal, which is fine, but they are distributed in the heirarchy, leading to unclear code in the shell scripts.

2. I want the scripts to possibly exist in the PATH or get copied to the path. This means that I don't have to have gross directory changes or a specific heirarchy.

3. Holds on Cherry, Vanilla, and Lime cola as I want to begin work on them after the core service is clean and sparkly


Cola downloads Images from Reddit concurrently, and provides tools to zip those files. Here is a quick overview of the current iteration on master's capability. Cherry will interface over Cola to automate this process daily at 12:00pm on a raspberry pi server. Vanilla will be the archival overlay to this code that allows a mini sqlite database to categorize them. Lime will then be an expansion to save from the google search page.

1. Run the install script ./install.sh in your git directory as the super user. 
2. Navigate to Core and compile Cola with ./compile.sh
3.navigate to ~/Cola/subservices/Zip, and run ./compile.sh
4. return to Cola and run Cola.sh
5. return when it's finished (it is not yet automated, it runs in the background)
6. hit enter, navigate to ~/Cola/subservices/Zip.
7. run ./Zip
