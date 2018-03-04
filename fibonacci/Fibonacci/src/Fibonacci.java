
public class Fibonacci {

	static byte fibonacciByte(int n) {
		
		if (n == 0) {
			return 0;
		}
		if (n == 1) {
			return 1;
		}
		byte x = 0;
		byte y = 1;
		byte result = 0;
		for (int i = 1; i < n; i++) {
			result = (byte) (x + y);
			x = y;
			y = result;
		}
		return result;
	}

	static short fibonacciShort(int n) {

		if (n == 0) {
			return 0;
		}
		if (n == 1) {
			return 1;
		}
		short x = 0;
		short y = 1;
		short result = 0;
		for (int i = 1; i < n; i++) {
			result = (short) (x + y);
			x = y;
			y = result;
		}
		return result;
	}

	static int fibonacciInt(int n) {
		
		if (n == 0) {
			return 0;
		}
		if (n == 1) {
			return 1;
		}
		int x = 0;
		int y = 1;
		int result = 0;
		for (int i = 1; i < n; i++) {
			result = x + y;
			x = y;
			y = result;
		}
		return result;
	}

	static long fibonacciLong(int n) {
		
		if (n == 0) {
			return 0;
		}
		if (n == 1) {
			return 1;
		}
		long x = 0;
		long y = 1;
		long result = 0;
		for (int i = 1; i < n; i++) {
			result = x + y;
			x = y;
			y = result;
		}
		return result;
	}

	public static void main(String[] args) {

		for (int i = 1; i <= 999; i++) {
			if (fibonacciByte(i) < 0) {
				System.out.println("overflow byte n=" + i);
				break;
			}
		}

		for (int i = 1; i <= 999; i++) {
			if (fibonacciShort(i) < 0) {
				System.out.println("overflow short n=" + i);
				break;
			}
		}

		for (int i = 1; i <= 999; i++) {
			if (fibonacciInt(i) < 0) {
				System.out.println("overflow int n=" + i);
				break;
			}
		}

		for (int i = 1; i <= 999; i++) {
			if (fibonacciLong(i) < 0) {
				System.out.println("overflow long n=" + i);
				break;
			}
		}
	}
}
