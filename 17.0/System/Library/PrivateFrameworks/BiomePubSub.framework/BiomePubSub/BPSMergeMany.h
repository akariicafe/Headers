@class NSArray;

@interface BPSMergeMany : BMBookmarkablePublisher

@property (nonatomic) unsigned long long currentPublisher;
@property (readonly, nonatomic) NSArray *publishers;

+ (id)new;
+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (id)init;
- (void)reset;
- (void)applyBookmark:(id)a0;
- (id)nextEvent;
- (id)upstreamPublishers;
- (void)subscribe:(id)a0;
- (id)initWithPublishers:(id)a0;
- (void).cxx_destruct;
- (id)validateBookmark:(id)a0;
- (BOOL)canStoreInternalStateInBookmark;
- (id)bookmark;
- (id)bookmarkableUpstreams;

@end
