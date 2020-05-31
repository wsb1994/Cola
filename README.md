Collecting an Objective Library of Assets with C.O.L.A, or just "Cola" is simple. You only need a debian system or some time to manually install on any other system. Cola downloads large swaths of images from reddit. On better hardware (threadrippers etc.) you can download a hefty number of images concurrently. 

0. requires a debian based linux installation to use the fast install script. (some of it is for show but you definitely need the python3 stuff)
1. Run the install script ./install.sh in your git directory as the super user or if you are not using a debian based distribution manually install things
2. Run either ./Concurrent_Cola.sh or ./Sequential_Cola.sh or their zip enabled counterparts. Concurrent requires you have a ridiculous number of cores to achieve an acceptable result. i'd say about a ratio of double the cores of the subreddits you want to pull.
3. Subreddits must be active to get good results.

configuration guide:

/Core/Subreddits.txt contains a list of subreddits to scrape, line by line, one subreddit per line

You can turn off piping output, but it looks super ugly and basically offers no information other than it's still running, hence it being sent to a txt file.

the driver script is courtesty of Reddit-Fetch, which I have modified here somewhat. The modifications were minor tweaks to syntax between the Python3 version and the Python2 version if I'm remembering correctly. The script is otherwise identical to the one provided by that repository. It's documentation is in tact under the API folder if you wish to become familiar with how it works. It otherwise works as a black box in this project, which is ran with CRON. 
