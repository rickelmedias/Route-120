class Solution:
    def numSteps(self, s: str) -> int:
        s = s[::-1]

        # Converter a string binária em número decimal
        decimal_number = 0
        for i, char in enumerate(s):
            if char == '1':
                decimal_number += 2 ** i

        # Contar os passos necessários
        count = 0
        while decimal_number != 1:
            if decimal_number % 2 == 0:
                decimal_number //= 2
            else:
                decimal_number += 1
            count += 1

        return count