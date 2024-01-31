@class PXGEntityManager, PXStoryTransitionModel;
@protocol PXStoryTimelineSpec, PXStoryTransitionSource, PXStoryTimeline;

@interface PXStoryTransitionConfiguration : NSObject

@property (retain, nonatomic) id<PXStoryTimeline> timeline;
@property (retain, nonatomic) id<PXStoryTimelineSpec> timelineSpec;
@property (retain, nonatomic) PXStoryTransitionModel *transitionModel;
@property (retain, nonatomic) PXGEntityManager *entityManager;
@property (retain, nonatomic) id<PXStoryTransitionSource> source;

- (void).cxx_destruct;

@end
