def RadixSort(A,n,div):
    B=A.copy()
   
    merged=[]
    if(n==0):
        return merged
    else:
        zero=[]
        one=[]
        two=[]
        three=[]
        four=[]
        five=[]
        six=[]
        seven=[]
        eight=[]
        nine=[]
       
        for i in range(0,len(A)):
            if(A[i]!=0):
                
                for k in range(0,div):
                    rem=A[i]%10
                    A[i]=A[i]//10
                
                if rem == 0:
                    zero.append(B[i])
                elif rem == 1:
                    one.append(B[i])
                elif rem == 2:
                    two.append(B[i])
                elif rem == 3:
                    three.append(B[i])
                elif rem == 4:
                    four.append(B[i])    
                elif rem == 5:
                    five.append(B[i])
                elif rem == 6:
                    six.append(B[i])
                elif rem == 7:
                    seven.append(B[i])
                elif rem == 8:
                    eight.append(B[i])
                else:
                    nine.append(B[i])
       
            else:
                zero.append(B[i])
        print(three)        
        for x in zero:
            merged.append(x)
        for x in one:
            merged.append(x)    
        for x in two:
            merged.append(x)
        for x in three:
            merged.append(x)      
        for x in four:
            merged.append(x)
        for x in five:
            merged.append(x)  
        for x in six:
            merged.append(x)
        for x in seven:
            merged.append(x)  
        for x in eight:
            merged.append(x)
        for x in nine:
            merged.append(x) 
            
        print(merged)    
        RadixSort(merged,n-1,div+1)
   

C=[123,12,10,3,111,123,1023,23,4,56,6,7,8]
len_list=[]
for x in range(0,len(C)):
    count=0
    p=C[x]
    while(p!=0):
        count=count+1
        p=p//10
       
    len_list.append(count)
print(len_list)
   
p=max(len_list)
print(p)
s=RadixSort(C,p,1)
