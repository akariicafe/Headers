@protocol BPSPublisher;

@interface BPSLast : BMBookmarkablePublisher

@property (retain, nonatomic) id lastEvent;
@property (nonatomic) BOOL returned;
@property (readonly, nonatomic) id<BPSPublisher> upstream;

+ (id)new;
+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (id)init;
- (void)reset;
- (void)applyBookmark:(id)a0;
- (id)nextEvent;
- (id)initWithUpstream:(id)a0;
- (id)upstreamPublishers;
- (void)subscribe:(id)a0;
- (void).cxx_destruct;
- (id)bookmark;
- (id)bookmarkableUpstreams;

@end
