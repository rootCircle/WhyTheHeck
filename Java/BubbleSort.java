import java.util.Arrays;

public class BubbleSort {

    // Sort array in ascending order
    public static void bubbleSort(int[] arr){
        for (int i = 0; i < arr.length-2; i++) {
            for (int j = 0; j < arr.length - i - 1; j++) {
                if(arr[j]<arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }


    public static void main(String[] args) {
        int[] arr = {4,3,7,9,1};
        bubbleSort(arr);
        System.out.println(Arrays.toString(arr));

        System.out.println("Wait! Why the array is sorted in descending order?! I wrote the code to sort it in ascending order!!");
    }
}
