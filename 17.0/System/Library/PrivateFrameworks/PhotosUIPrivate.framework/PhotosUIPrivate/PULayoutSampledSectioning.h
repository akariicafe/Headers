@class NSArray;

@interface PULayoutSampledSectioning : PULayoutSectioning {
    BOOL _sectioningIsValid;
    BOOL _samplingIsValid;
    long long _numberOfRealSections;
    long long _numberOfVisualSections;
    NSArray *_realSectionIndexesForVisualSection;
    long long *_visualSectionForRealSection;
    long long *_numberOfItemsForRealSection;
    long long *_numberOfRealItemsForVisualSection;
    long long *_startIndexInVisualSectionForRealSection;
    id *_sectionSamplers;
    long long *_maximumNumberOfVisibleItemsForVisualSection;
    BOOL _hasSomeSampling;
    long long _lastHitRealSectionIndex;
    long long _lastHitVisualSectionIndex;
    long long _lastHitRangeIndex;
}

@property (nonatomic) BOOL supportsSamplingAndSectionGrouping;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (long long)_visualItemIndexForUnsampledItemIndex:(long long)a0 visualSection:(long long)a1 isMainItem:(BOOL *)a2;
- (BOOL)hasSomeSampling;
- (long long)__debugUnsampledIndexForRealIndexPath:(struct PUSimpleIndexPath { long long x0; long long x1; })a0;
- (void)_cacheSectioningIfNeeded;
- (void)_discardSamplingCache;
- (void)_discardSectioningCache;
- (struct PUSimpleIndexPath { long long x0; long long x1; })_mainRealItemIndexPathForVisualSection:(long long)a0 andUnsampledItemIndex:(long long)a1;
- (id)_sectionSamplerForVisualSection:(long long)a0;
- (long long)_unsampledItemIndexForVisualItemIndex:(long long)a0 visualSection:(long long)a1;
- (void)enumerateRealMainItemIndexPathsForVisualSection:(long long)a0 inVisualItemRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 usingBlock:(id /* block */)a2;
- (void)enumerateRealSectionsForVisualSection:(long long)a0 usingBlock:(id /* block */)a1;
- (void)invalidateSampling;
- (void)invalidateSections;
- (struct PUSimpleIndexPath { long long x0; long long x1; })mainRealItemIndexPathForVisualIndexPath:(struct PUSimpleIndexPath { long long x0; long long x1; })a0;
- (long long)mainRealSectionForVisualSection:(long long)a0;
- (long long)numberOfRealItemsInVisualSection:(long long)a0;
- (long long)numberOfVisualItemsInVisualSection:(long long)a0;
- (id)visibleUnsampledIndexesForCombinedRealSections:(id)a0;
- (struct PUSimpleIndexPath { long long x0; long long x1; })visualIndexPathForRealIndexPath:(struct PUSimpleIndexPath { long long x0; long long x1; })a0 isMainItem:(BOOL *)a1;
- (long long)visualSectionForRealSection:(long long)a0;

@end
