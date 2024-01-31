@class NSArray;

@interface BPSCorrelateOrderedMerge : BMBookmarkablePublisher

@property (readonly, nonatomic) NSArray *publishers;
@property (copy, nonatomic) id /* block */ comparator;

+ (id)new;
+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (id)init;
- (id)initWithPublishers:(id)a0 comparator:(id /* block */)a1;
- (id)initWithA:(id)a0 b:(id)a1 comparator:(id /* block */)a2;
- (void)subscribe:(id)a0;
- (void).cxx_destruct;
- (BOOL)canStoreInternalStateInBookmark;
- (id)bookmarkableUpstreams;

@end
