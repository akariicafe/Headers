@class NSArray;

@interface PXStoryAspectFittingTimeline : PXStoryDerivedTimeline

@property (readonly, nonatomic) long long keySegmentIdentifier;
@property (readonly, nonatomic) NSArray *keySegmentDisplayAssetClips;

- (void).cxx_destruct;
- (void)_enumerateClipsKeySegmentWithTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 usingBlock:(id /* block */)a2;
- (void)_setupKeySegmentDisplayAssetClips;
- (void)enumerateClipsInTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 usingBlock:(id /* block */)a2;
- (id)initWithOriginalTimeline:(id)a0 keySegmentMix:(struct { long long x0; double x1; long long x2; })a1;

@end
