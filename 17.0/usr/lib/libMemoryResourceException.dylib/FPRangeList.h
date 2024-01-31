@interface FPRangeList : NSObject {
    struct FPRangeListNode { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct FPRangeListNode *x7; } *_rangeListHead;
}

- (void)dealloc;

@end
