import sqlite3
conn = sqlite3.connect('images.db')
c = conn.cursor()
c.execute('''
CREATE TABLE if not exists images( 
ID INT PRIMARY KEY,
FILENAME STRING, 
SUBREDDIT STRING)''')

c.execute('''
CREATE TABLE IF NOT EXISTS zipfiles(
ZID INT PRIMARY KEY,
FILENAME STRING)''')

