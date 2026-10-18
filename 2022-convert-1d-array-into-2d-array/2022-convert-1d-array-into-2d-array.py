class Solution:
    def construct2DArray(self, original: List[int], m: int, n: int) -> List[List[int]]:
        if m * n != len(original):
            return []
        import numpy as np
        original = np.array(original)
        original = np.reshape(original,(m,n))
        original = original.tolist()
        return original