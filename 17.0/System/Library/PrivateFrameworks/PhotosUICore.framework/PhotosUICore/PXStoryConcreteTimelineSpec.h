@class NSIndexSet;

@interface PXStoryConcreteTimelineSpec : PXFeatureSpec <PXStoryTimelineSpec>

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } fixedSegmentDuration;
@property (nonatomic) BOOL wantsTitles;
@property (retain, nonatomic) NSIndexSet *allowedTransitionKinds;
@property (readonly, nonatomic) struct CGSize { double width; double height; } viewportSize;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } safeAreaInsets;
@property (readonly, nonatomic) double nUpDividerWidth;
@property (readonly, nonatomic) long long layoutDirection;

- (unsigned long long)hash;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
