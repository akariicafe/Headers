@interface TSWPMutableDirtyRangeArray : TSWPDirtyRangeArray

- (void)clear;
- (void)subtract:(id)a0;
- (void)addRange:(struct { struct _NSRange { unsigned long long x0; unsigned long long x1; } x0; long long x1; })a0;
- (void)removeRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)addChangedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 delta:(long long)a1;
- (void)addChangedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 delta:(long long)a1 allowEmpty:(BOOL)a2;
- (void)addRange:(struct { struct _NSRange { unsigned long long x0; unsigned long long x1; } x0; long long x1; })a0 allowEmpty:(BOOL)a1;

@end
