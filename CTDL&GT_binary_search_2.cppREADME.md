# CTDL-GT-Chuong1
https://viblo.asia/p/thuat-toan-binary-search-tim-kiem-nhi-phan-implement-code-ORNZqAkMZ0n
public class BinarySearch {

    public static void main(String[] args) {
        int arr[] = {1,2,3,4,5,6,7,8,9};
        System.out.println(binary(arr,4));

    }


    public static int binary(int a[], int x){
        int left = 0;
        int right = a.length - 1;

        for (int i = left; i <= right; i++){
            System.out.println(" vòng "+(i+1)+" left = "+left);
            System.out.println(" vòng "+(i+1)+" right = "+right);
            int mid = (left + right)/2;
            System.out.println(" vòng "+(i+1)+" mid = "+mid);
            System.out.println(" vòng "+(i+1)+" a[mid] = "+a[mid]);
            System.out.println("------------------------------");

            if(a[mid] == x){
                return mid;
            }else if(a[mid] > x){
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return -1;
    }
}

 vòng 1 left = 0
 vòng 1 right = 8
 vòng 1 mid = 4
 vòng 1 a[mid] = 5
------------------------------
 vòng 2 left = 0
 vòng 2 right = 3
 vòng 2 mid = 1
 vòng 2 a[mid] = 2
------------------------------
 vòng 3 left = 2
 vòng 3 right = 3
 vòng 3 mid = 2
 vòng 3 a[mid] = 3
------------------------------
 vòng 4 left = 3
 vòng 4 right = 3
 vòng 4 mid = 3
 vòng 4 a[mid] = 4
------------------------------
Giá trị cần tìm nằm ở index = 3
