@protocol PXStorySongResource, PXStoryTimeline;

@interface PXStoryResourcesPreloadingRequest : NSObject

@property BOOL isCancelled;
@property (readonly, nonatomic) id<PXStoryTimeline> timeline;
@property (readonly, nonatomic) unsigned long long timelineAttributes;
@property (readonly, nonatomic) long long startingSegmentIdentifier;
@property (readonly, nonatomic) BOOL shouldIgnoreStartingSegmentIdentifier;
@property (retain, nonatomic) id<PXStorySongResource> songResource;

- (void).cxx_destruct;
- (id)initWithTimeline:(id)a0 timelineAttributes:(unsigned long long)a1 startingSegmentIdentifier:(long long)a2 shouldIgnoreStartingSegmentIdentifier:(BOOL)a3;

@end
