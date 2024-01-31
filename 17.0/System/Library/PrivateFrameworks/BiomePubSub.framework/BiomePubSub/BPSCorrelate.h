@class BPSCorrelateOrderedMerge, BPSCorrelateHandler;
@protocol BPSPublisher;

@interface BPSCorrelate : BMBookmarkablePublisher {
    BPSCorrelateOrderedMerge *_merger;
}

@property (readonly, nonatomic) id<BPSPublisher> prior;
@property (readonly, nonatomic) id<BPSPublisher> current;
@property (readonly, nonatomic) BPSCorrelateHandler *correlateHandler;

+ (id)new;
+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;
+ (long long)correlateSourceForIndex:(long long)a0;
+ (id)correlatePublisherChainWithPrior:(id)a0 current:(id)a1 comparator:(id /* block */)a2 correlateHandler:(id)a3;

- (id)init;
- (void)subscribe:(id)a0;
- (id)initWithPrior:(id)a0 current:(id)a1 comparator:(id /* block */)a2 updatedInitialContext:(id)a3 correlateHandler:(id)a4;
- (void).cxx_destruct;
- (id)initWithPrior:(id)a0 current:(id)a1 comparator:(id /* block */)a2 correlateHandler:(id)a3;
- (BOOL)canStoreInternalStateInBookmark;
- (id)bookmarkableUpstreams;

@end
