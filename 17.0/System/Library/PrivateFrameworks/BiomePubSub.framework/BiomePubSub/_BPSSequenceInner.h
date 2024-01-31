@class NSEnumerator;
@protocol BPSSubscriber;

@interface _BPSSequenceInner : BMBookmarkableSubscription {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) id<BPSSubscriber> downstream;
@property (nonatomic) long long pendingDemand;
@property (nonatomic) BOOL recursion;
@property (retain, nonatomic) id next;
@property (retain, nonatomic) NSEnumerator *enumerator;

- (id)upstreamSubscriptions;
- (void)requestDemand:(long long)a0;
- (void).cxx_destruct;
- (id)initWithDownstream:(id)a0 enumerator:(id)a1;
- (void)cancel;

@end
