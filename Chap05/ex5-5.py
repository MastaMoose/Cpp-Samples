# -*- coding: utf-8 -*-
"""
Created on Sat Apr 14 10:35:02 2018

@author: MastaMoose
"""

def center(picture):
    #picture is a list of strings
    MaxW = width(picture)
    frame = (MaxW+2)*"*"
    pic=[]
    print(frame)
    pic.append(frame)
    for string in picture:
        stdiff = MaxW - len(string)
        padR = int((stdiff)/2)
        padL = stdiff - padR 
        ipic = '*'+" "*padR+string+" "*padL+'*'
        print(ipic)
        pic.append(ipic)
    print(frame)
    pic.append(frame)
    return pic

def width(AList):
    #takes in a List of strings and returns a
    Max = len(AList[0])
    for celebrity in AList:
        if len(celebrity) > Max:
            Max = len(celebrity)
        else:
            pass
    return Max