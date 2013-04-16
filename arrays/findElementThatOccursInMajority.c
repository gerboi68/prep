/* Given an array of integers, 'atbp', check if there is an element that occurs in the majority (i.e.,
 * more that half of the time. If such an element exists, return the same. */

	int findCandidate(atbs, size);
	int satisfiesMajorityCondition(atbs, size, candidate);

	Prototypes: int findCandidate(int[], int)
		    int satisfiesMajorityCondition(int[], int, int)

	int findCandidate(int atbs[], int size) {
		int count = 1, i, index = 0;
		for(i = 1; i < size; ++i) {
			if(atbs[index] == atbs[i])
				++count;
			else
				--count;
			if(!count) {
				index = i;
				count = 1;
			}
		}
		return atbs[index];
	}

	int satisfiesMajorityCondition(int atbs[], int size, int candidate) {
		int count = 0, i;
		for(i = 0; i < size; ++i)
			if(atbs[i] == candidate)
				++count;
		if(count > (size / 2))
			return 1;
		else
			return 0;
	}
