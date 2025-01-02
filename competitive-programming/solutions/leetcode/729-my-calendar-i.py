import bisect

class MyCalendar:
    def __init__(self):
        self.starts = []
        self.ends = []

    def book(self, start: int, end: int) -> bool:
        i = bisect.bisect_right(self.starts, start)
        
        if i > 0 and self.ends[i - 1] > start:
            return False
        
        if i < len(self.starts) and self.starts[i] < end:
            return False
        
        self.starts.insert(i, start)
        self.ends.insert(i, end)
        return True
