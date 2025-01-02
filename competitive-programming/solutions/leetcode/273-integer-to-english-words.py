class Solution:
    def numberToWords(self, num: int) -> str:
        if num == 0:
            return "Zero"
        
        # Definições de mapeamento
        less_than_20 = ["", "One", "Two", "Three", "Four", "Five", "Six", "Seven",
                        "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen",
                        "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen",
                        "Nineteen"]
        
        tens = ["", "", "Twenty", "Thirty", "Forty", "Fifty",
                "Sixty", "Seventy", "Eighty", "Ninety"]
        
        thousands = ["", "Thousand", "Million", "Billion"]
        
        def three_digits(n: int) -> str:
            """
            Converte um número menor que 1000 em palavras.
            """
            result = ""
            if n >= 100:
                result += less_than_20[n // 100] + " Hundred"
                n %= 100
                if n:
                    result += " "
            if n >= 20:
                result += tens[n // 10]
                n %= 10
                if n:
                    result += " " + less_than_20[n]
            elif n > 0:
                result += less_than_20[n]
            return result
        
        result = ""
        for idx, unit in enumerate(thousands):
            if num % 1000 != 0:
                words = three_digits(num % 1000)
                if unit:
                    words += " " + unit
                if result:
                    result = words + " " + result
                else:
                    result = words
            num //= 1000
            if num == 0:
                break
        
        return result
