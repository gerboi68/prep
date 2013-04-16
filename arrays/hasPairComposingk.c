/* Given an array of integers, 'atbs', and an integer, 'k', determine if there exist a pair of integers
 * in 'atbs' whose sum equals 'k'. */

	qckSort(atbs, 0, size - 1);
	hasPairComposingk(atbs, size, k);

	Prototype: int hasPairComposingk(int[], int, int)

	int hasPairComposingk(int atbs[], int size, int k) {
		int low = 0, high = size - 1, tmp;
		while(low < high) {
			tmp = atbs[low] + atbs[high];
			if(tmp == k)
				return 1;
			else if(tmp < k)
				++low;
			else
				--high;
		}
		return 0;
	}
