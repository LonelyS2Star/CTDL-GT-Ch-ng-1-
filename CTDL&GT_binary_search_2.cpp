https://viblo.asia/p/thuat-toan-binary-search-tim-kiem-nhi-phan-implement-code-ORNZqAkMZ0n public class BinarySearch {
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
