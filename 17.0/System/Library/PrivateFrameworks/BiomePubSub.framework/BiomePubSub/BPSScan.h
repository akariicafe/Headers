@protocol BPSPublisher;

@interface BPSScan : BMBookmarkablePublisher

@property (retain, nonatomic) id result;
@property (readonly, nonatomic) id<BPSPublisher> upstream;
@property (readonly, nonatomic) id initialResult;
@property (readonly, copy, nonatomic) id /* block */ nextPartialResult;

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (BOOL)canStorePassThroughValueInBookmark;
- (void)reset;
- (void)applyBookmark:(id)a0;
- (id)nextEvent;
- (id)initWithUpstream:(id)a0 initialResult:(id)a1 nextPartialResult:(id /* block */)a2;
- (id)upstreamPublishers;
- (void)subscribe:(id)a0;
- (void).cxx_destruct;
- (BOOL)canStoreInternalStateInBookmark;
- (id)bookmark;
- (id)bookmarkableUpstreams;

@end
