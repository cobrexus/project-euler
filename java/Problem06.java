public class Problem06 {
    public static void main(String[] args) {
        int sumOfSq = 0;

        for (int i = 1; i <= 100; ++i) {
            sumOfSq += i * i;
        }

        int sqOfSum = 0;

        for (int i = 1; i <= 100; ++i) {
            sqOfSum += i;
        }

        sqOfSum *= sqOfSum;

        System.out.println(sqOfSum - sumOfSq);
    }
}
