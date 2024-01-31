@class BPSPublisher;

@interface BPSFilter : BMBookmarkablePublisher

@property (retain, nonatomic) BPSPublisher *upstream;
@property (readonly, nonatomic) id /* block */ isIncluded;

+ (id)new;
+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (id)init;
- (id)initWithUpstream:(id)a0 isIncluded:(id /* block */)a1;
- (id)nextEvent;
- (id)upstreamPublishers;
- (void)subscribe:(id)a0;
- (void).cxx_destruct;
- (BOOL)canStoreInternalStateInBookmark;
- (id)bookmarkableUpstreams;

@end
