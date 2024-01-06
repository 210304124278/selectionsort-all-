a=[64,25,12,22,11]
for i in range(len(a)):
    min_idx=i
    for j in range(i+1,len(a)):
        if a[min_idx]>a[j]:
            min_idx=j
    a[i],a[min_idx]=a[min_idx],a[i]
for i in range(len(a)):
    print(a[i])            