@protocol PXStoryTimeline;

@interface PXStoryDerivedTimeline : PXStoryBaseTimeline

@property (readonly, nonatomic) id<PXStoryTimeline> originalTimeline;

- (id)init;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRange;
- (struct CGSize { double x0; double x1; })size;
- (struct CGSize { double x0; double x1; })originalSize;
- (void).cxx_destruct;
- (long long)numberOfSegments;
- (id)clipWithIdentifier:(long long)a0;
- (void)enumerateClipsInTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 usingBlock:(id /* block */)a2;
- (void)enumerateSegmentsInTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 usingBlock:(id /* block */)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForSegmentWithIdentifier:(long long)a0;
- (long long)identifierOfFirstClipContainingResourceAtIndex:(long long)a0 inResourcesDataSource:(id)a1 resourceKind:(long long)a2;
- (long long)indexOfResourceForClipWithIdentifier:(long long)a0 inResourcesDataSource:(id)a1 resourceKind:(long long)a2;
- (long long)indexOfSegmentWithIdentifier:(long long)a0;
- (id)indexesOfResourcesWithKind:(long long)a0 inResourcesDataSource:(id)a1 forClipsInSegmentWithIdentifier:(long long)a2;
- (id)initWithOriginalTimeline:(id)a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })timeRangeForSegmentWithIdentifier:(long long)a0;

@end
