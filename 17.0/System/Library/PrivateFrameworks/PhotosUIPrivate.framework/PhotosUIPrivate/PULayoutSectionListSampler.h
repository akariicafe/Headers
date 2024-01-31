@interface PULayoutSectionListSampler : PULayoutSectionSampler {
    long long _numberOfVisibleItems;
    long long _numberOfRealItems;
    long long *_visibleItemIndexes;
    long long _lastSeenSampledIndex;
    long long _lastSeenUnsampledIndex;
    long long _lastSeenTopUnsampledIndex;
}

- (void)dealloc;
- (long long *)visibleItemIndexes;
- (void)dumpInternalMemory;
- (void)enumerateUnsampledIndexesForSampledIndexInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 usingBlock:(id /* block */)a1;
- (long long)indexForUnsampledIndex:(long long)a0 isMainItem:(BOOL *)a1;
- (id)initWithNumberOfVisibleItems:(long long)a0 numberOfRealItems:(long long)a1;
- (long long)unsampledIndexForIndex:(long long)a0;

@end
