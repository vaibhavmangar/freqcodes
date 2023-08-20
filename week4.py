def histogram(l):
    count,ans,k = 0,list(),[]
    for i in range(len(l)):
        index,count=i,0
        for j in range(index,len(l)):
            if l[index] == l[j] and l[index] not in k :
                count =count + 1
        k = k + [l[index]] 
        if (count != 0): 
            ans = ans + [(l[index], count)]
    ans.sort()
    ans=sorted(ans,key=lambda ans:ans[1])
    return(ans)
  
  
def transcript(coursedetails, studentdetails, grades):
    ans = list()
    studentdetails.sort()
    coursedetails.sort()
    grades.sort()
    for studentdet in studentdetails:
        tuple,inlist = studentdet,list()
        for grade in grades:
            if studentdet[0] == grade[0]:
                for cdetail in coursedetails:
                    if grade[1] == cdetail[0]:
                        intuple = cdetail
                        intuple = intuple + (grade[2],)
                        inlist.append(intuple)
        tuple = tuple + (inlist,)
        ans.append(tuple)
    return(ans)  
