@class NSObject, NSArray, NSMutableArray, geo_isolater, GEOXPCActivity;
@protocol OS_dispatch_queue, OS_dispatch_source, GEOMapDataSubscriptionDownloadGroupDelegate;

@interface GEOMapDataSubscriptionDownloadGroup : NSObject {
    geo_isolater *_isolation;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_source> *_xpcActivityDeferralTimer;
    NSMutableArray *_remainingSubscriptions;
    NSMutableArray *_completedSubscriptions;
    NSMutableArray *_failedSubscriptions;
}

@property (readonly, nonatomic) NSArray *subscriptions;
@property (readonly, nonatomic) unsigned long long downloadMode;
@property (readonly, weak, nonatomic) id<GEOMapDataSubscriptionDownloadGroupDelegate> delegate;
@property (readonly, nonatomic) GEOXPCActivity *xpcActivity;
@property (readonly, nonatomic) NSArray *remainingSubscriptions;
@property (readonly, nonatomic) NSArray *completedSubscriptions;

- (void).cxx_destruct;
- (void)finishedDownloadingSubscription:(id)a0 withError:(id)a1;
- (id)initWithSubscriptions:(id)a0 downloadMode:(unsigned long long)a1 xpcActivity:(id)a2 delegate:(id)a3 delegateQueue:(id)a4;
- (void)removeSubscriptionWithIdentifier:(id)a0;
- (void)restartedSubscriptions:(id)a0;

@end
