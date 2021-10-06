#!/usr/bin/env python
# coding: utf-8

# In[3]:


n=int(input("Enter the number of rows:"))
for i in range(n):
    for j in range(n):
        if((i==j) or (j==n-1-i)):
            print('*',end=" ")
        else:
            print(" ",end=" ")
    print()


# In[ ]:




