@class NSRecursiveLock, ICMusicSubscriptionLeaseStatus, NSDate, ICStoreRequestContext, NSObject;
@protocol ICMusicSubscriptionLeaseSessionDelegate, OS_dispatch_source, OS_dispatch_queue;

@interface ICMusicSubscriptionLeaseSession : NSObject {
    NSRecursiveLock *_lock;
    long long _automaticRefreshCount;
    NSObject<OS_dispatch_source> *_automaticRefreshTimerSource;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    BOOL _isPerformingAutomaticRefresh;
    ICMusicSubscriptionLeaseStatus *_leaseStatus;
    long long _pendingLeaseAcquisitionRevisionID;
    long long _startedLeaseAcquisitionRevisionID;
    BOOL _hasPendingLeaseDidEndPushNotification;
    NSDate *_lastPlaybackRequestDate;
}

@property (readonly, weak, nonatomic) id<ICMusicSubscriptionLeaseSessionDelegate> delegate;
@property (readonly, nonatomic, getter=isDelegatedLeaseSession) BOOL delegatedLeaseSession;
@property (readonly, copy, nonatomic) ICStoreRequestContext *requestContext;
@property (readonly, copy, nonatomic) ICMusicSubscriptionLeaseStatus *leaseStatus;
@property (readonly, copy, nonatomic) NSDate *leaseExpirationDate;
@property (readonly, copy, nonatomic) NSDate *lastPlaybackRequestDate;
@property (readonly, nonatomic, getter=isAutomaticallyRefreshingLease) BOOL automaticallyRefreshingLease;

+ (id)_sharedOperationQueue;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)_handlePlaybackLeaseDidEndPushNotification;
- (void)_locked_performAutomaticRefresh;
- (void)_locked_handlePendingPlaybackLeaseDidEndPushNotificationIfReady;
- (void)endAutomaticallyRefreshingLease;
- (void)_handleRemoteServerDidBecomeLikelyReachable;
- (id)_initWithRequestContext:(id)a0 isDelegatedLeaseSession:(BOOL)a1 delegate:(id)a2 leaseStatus:(id)a3;
- (void)_locked_setLeaseStatus:(id)a0 updatedLeaseExpirationDate:(id)a1;
- (void)_locked_updateAutomaticRefreshProperties;
- (id)_newOperationForPlaybackRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)_receivedUserInteractionEvent;
- (void)_setLeaseStatus:(id)a0 updatedLeaseExpirationDate:(id)a1;
- (void)beginAutomaticallyRefreshingLease;
- (id)performPlaybackRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)reloadFairPlayKeyStatusWithCompletionHandler:(id /* block */)a0;

@end
