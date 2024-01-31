@class NSIndexSet;
@protocol PXStoryTimelineSpec;

@interface PXStoryTimelineSpecManager : PXFeatureSpecManager

@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } fixedSegmentDuration;
@property (readonly, nonatomic) BOOL wantsTitles;
@property (readonly, nonatomic) NSIndexSet *allowedTransitionKinds;
@property (readonly, nonatomic) id<PXStoryTimelineSpec> timelineSpec;

- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (void).cxx_destruct;
- (Class)specClass;
- (unsigned long long)defaultChangesToUpdateFor;
- (id)initWithExtendedTraitCollection:(id)a0 configuration:(id)a1;

@end
