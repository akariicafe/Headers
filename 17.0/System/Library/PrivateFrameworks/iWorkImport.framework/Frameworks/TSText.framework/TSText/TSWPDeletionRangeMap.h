@class TSWPMutableRangeArray;

@interface TSWPDeletionRangeMap : NSObject {
    struct _NSRange { unsigned long long location; unsigned long long length; } _subRange;
    TSWPMutableRangeArray *_removedRanges;
}

- (void).cxx_destruct;
- (BOOL)containsCharIndex:(unsigned long long)a0;
- (id)initWithSubRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 removeRanges:(id)a1;
- (id)inverseRangesInStorageRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)mappedCharIndex:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })mappedCharRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)unmappedCharIndex:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })unmappedCharRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)adjustByDelta:(long long)a0 startingAt:(unsigned long long)a1;

@end
