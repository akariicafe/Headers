@interface VMUNonOverlappingRangeArray : VMURangeArray

- (void)_mergeAllBitsOfRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a0 excludingRanges:(id)a1 mergeRanges:(BOOL)a2;
- (void)mergeRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a0 excludingRanges:(id)a1;
- (void)mergeRanges:(id)a0 excludingRanges:(id)a1;
- (void)mergeRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a0;
- (void)addOrExtendRange:(struct _VMURange { unsigned long long x0; unsigned long long x1; })a0;
- (void)mergeRanges:(id)a0;
- (void)sortAndMergeRanges;
- (id)subtract:(id)a0 mergeRanges:(BOOL)a1;

@end
