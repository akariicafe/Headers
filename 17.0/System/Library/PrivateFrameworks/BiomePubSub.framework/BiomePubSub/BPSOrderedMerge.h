@class NSArray, NSMutableArray, BMIndirectHeap;

@interface BPSOrderedMerge : BMBookmarkablePublisher

@property (retain, nonatomic) NSMutableArray *upstreamStates;
@property (retain, nonatomic) BMIndirectHeap *heap;
@property (retain) id mostRecentEvent;
@property (readonly, nonatomic) NSArray *publishers;
@property (copy, nonatomic) id /* block */ comparator;

+ (id)new;
+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (id)init;
- (void)reset;
- (void)applyBookmark:(id)a0;
- (id)nextEvent;
- (id)initWithPublishers:(id)a0 comparator:(id /* block */)a1;
- (id)initWithA:(id)a0 b:(id)a1 comparator:(id /* block */)a2;
- (id)upstreamPublishers;
- (void)subscribe:(id)a0;
- (BOOL)isOrderedSameForEvents:(id)a0 second:(id)a1;
- (void).cxx_destruct;
- (id)validateBookmark:(id)a0;
- (BOOL)canStoreInternalStateInBookmark;
- (id)bookmark;
- (id)bookmarkableUpstreams;

@end
