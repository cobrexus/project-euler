public class Problem04 {
    public static void main(String[] args) {
        int largest = 0;

        for (int i = 100; i < 1000; ++i) {
            for (int j = 100; j < 1000; ++j) {
                if (Utils.isPalindrome(i * j) && i * j > largest) {
                    largest = i * j;
                }
            }
        }

        System.out.println(largest);
    }
}
