# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution(object):
    def addTwoNumbers(self, l1, l2):
        num1 = 0
        num2 = 0

        i = 1
        while l1 is not None or l2 is not None:
            if l1 is not None:
                num1 += l1.val * i
                l1 = l1.next
            if l2 is not None:
                num2 += l2.val * i
                l2 = l2.next
            
            i *= 10

        total_sum = num1 + num2

        dummy = ListNode()
        current = dummy

        for digit in str(total_sum)[::-1]:
            current.next = ListNode(int(digit))
            current = current.next

        return dummy.next
