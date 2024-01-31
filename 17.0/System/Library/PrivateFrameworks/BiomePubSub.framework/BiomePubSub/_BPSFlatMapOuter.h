@class NSMutableDictionary, BPSSubscription, NSString, NSMutableArray;
@protocol BPSSubscriber, BMBookmark;

@interface _BPSFlatMapOuter : BMBookmarkableSubscription <BPSSubscriber> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _outerLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _downstreamLock;
}

@property (retain, nonatomic) BPSSubscription *outerSubscription;
@property (retain, nonatomic) id<BMBookmark> outerBookmark;
@property (retain, nonatomic) id<BPSSubscriber> downstream;
@property (nonatomic) long long downstreamDemand;
@property (nonatomic) BOOL downstreamRecursive;
@property (nonatomic) BOOL innerRecursive;
@property (retain, nonatomic) NSMutableDictionary *subscriptions;
@property (nonatomic) long long nextInnerIndex;
@property (nonatomic) long long pendingSubscriptions;
@property (retain, nonatomic) NSMutableArray *buffer;
@property (nonatomic) long long maxPublishers;
@property (copy, nonatomic) id /* block */ map;
@property (nonatomic) BOOL cancelledOrCompleted;
@property (nonatomic) BOOL outerFinished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)receiveCompletion:(id)a0;
- (id)upstreamSubscriptions;
- (long long)receiveInnerInput:(id)a0 index:(long long)a1;
- (void)receiveSubscription:(id)a0;
- (void)requestDemand:(long long)a0;
- (long long)receiveInput:(id)a0;
- (id)newBookmark;
- (void)receiveInnerCompletion:(id)a0 index:(long long)a1;
- (void).cxx_destruct;
- (void)cancel;
- (void)receiveInnerSubscription:(id)a0 index:(long long)a1;
- (void)_updateBookmarkWhenLocked;
- (id)initWithDownstream:(id)a0 maxPublishers:(long long)a1 map:(id /* block */)a2;

@end
