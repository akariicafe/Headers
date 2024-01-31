@class BMDSLState, NSString, BPSSubscriptionStatus, BMBookmarkNode;
@protocol BPSSubscriber, BMDSLStateValue;

@interface _BMDSLStatePublisherInner : BMBookmarkableSubscription <BPSSubscriber> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) id<BPSSubscriber> downstream;
@property (retain, nonatomic) id<BMDSLStateValue> state;
@property (retain, nonatomic) BMDSLState *DSLState;
@property (readonly, nonatomic) BPSSubscriptionStatus *status;
@property (retain, nonatomic) BMBookmarkNode *completionBookmark;
@property (readonly, nonatomic) BOOL sentInitialState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (id)init;
- (void)receiveCompletion:(id)a0;
- (id)upstreamSubscriptions;
- (void)receiveSubscription:(id)a0;
- (void)requestDemand:(long long)a0;
- (long long)receiveInput:(id)a0;
- (id)newBookmark;
- (id)initWithDownstream:(id)a0 state:(id)a1 DSLState:(id)a2;
- (void).cxx_destruct;
- (void)cancel;

@end
