@class SLDServiceProxy, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SLShareableContentObserver : NSObject <NSUserActivityObserver, SLDServiceProxyDelegate> {
    SLDServiceProxy *_serviceProxy;
    NSObject<OS_dispatch_queue> *_serviceQueue;
}

@property (class, readonly, nonatomic) SLShareableContentObserver *sharedObserver;

@property (nonatomic) BOOL needsRefresh;
@property (nonatomic) unsigned long long state;
@property (readonly, nonatomic) SLDServiceProxy *serviceProxy;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pause;
- (void)userActivityWasCreated:(id)a0;
- (id)init;
- (void)reset;
- (void)resumeIfNeeded;
- (void).cxx_destruct;
- (void)serviceProxyDidDisconnect:(id)a0;
- (void)serviceProxyDidConnect:(id)a0;
- (void)didEnterBackgroundNotification:(id)a0;
- (void)refreshIfNeeded;
- (void)setNeedsRefresh;
- (void)activityItemsConfigurationReadyNotification:(id)a0;
- (void)addObservers;
- (BOOL)applicationIsActive;
- (void)connectAndRefreshNow;
- (void)didBecomeActiveNotification:(id)a0;
- (void)documentStateChangedNotification:(id)a0;
- (BOOL)needsToRefresh;
- (BOOL)needsToResume;
- (void)willResignActiveNotification:(id)a0;

@end
