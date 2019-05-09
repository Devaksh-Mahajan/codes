import tkinter as tk
import webbrowser
def opening_facebook(event):
	webbrowser.open_new_tab ("https://www.facebook.com/")
def opening_youtube(event):
	webbrowser.open_new_tab ("https://www.youtube.com/")
def opening_gmail(event):
	webbrowser.open_new_tab ("http://www.gmail.com/")
def opening_amazon(event):
	webbrowser.open_new_tab ("https://www.amazon.in/")
window = tk.Tk()
window.geometry("300x400")
alabel = tk.Label(text = "Facebook")
alabel.grid(column = 0, row = 1)
button1 = tk.Button(text = "Facebook")
button1.grid(column = 0, row = 2)
button1.bind("<Button-1>", opening_facebook)
blabel = tk.Label(text = "Youtube")
blabel.grid(column=1, row=1)
button2 = tk.Button(text ="Youtube")
button2.grid(column = 1, row = 2)
button2.bind("<Button-1>", opening_youtube)
clabel = tk.Label(text = "Gmail")
clabel.grid(column = 2, row = 1)
button3 = tk.Button(text = "Gmail")
button3.grid(column = 2, row = 2)
button3.bind("<Button-1>", opening_gmail)
dlabel = tk.Label(text ="Amazon")
dlabel.grid(column =3, row = 1)
button4 = tk.Button(text = "Amazon")
button4.grid(column = 3, row=2)
button4.bind("<Button-1>", opening_amazon)
window.mainloop()

