class Selectionsort {
    void sort(int[] arr){
        int n=arr.length;
        int i,j;
        for(i=0;i<n-1;i++){
            int min_idx=i;
            for(j=i+1;j<n;j++){
                if(arr[j]<arr[min_idx]){
                    min_idx=j;
                    }}
            if(min_idx!=i){
                int temp=arr[min_idx];
                arr[min_idx]=arr[i];
                arr[i]=temp;
            
            }

        }
    }
    void printarray(int[] arr){
        int n=arr.length;
        for(int i=0;i<n;i++){
          System.out.print(arr[i] + "  ");
        }
    }
    public static void main(String args[]){
        Selectionsort ob=new Selectionsort();
        int[] arr ={  64 , 25 , 12 , 22 , 1 };
        ob.sort(arr);
        System.out.println("sorted array: \n");
        ob.printarray(arr);
        

    }
}