#!/usr/bin/env python
# coding: utf-8

# In[7]:


n=int(input("enter the number of rows "))
m=(2*n)
for i in range(n):
    for j in range(1,m):
        if(j>(m//2-i) and (j<m//2+i)):
            print(" ",end=" ")
        else:
            print('*',end=" ")
    print()


# In[ ]:




