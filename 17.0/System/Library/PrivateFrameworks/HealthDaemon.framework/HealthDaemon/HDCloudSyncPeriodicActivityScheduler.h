@class HDCloudSyncStatus, HDDaemon;

@interface HDCloudSyncPeriodicActivityScheduler : NSObject {
    HDDaemon *_daemon;
    HDCloudSyncStatus *_lock_cloudSyncStatus;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _allowLiteSync;
}

@property (copy, nonatomic) id /* block */ isSleepFocusOn;
@property (readonly, copy, nonatomic) HDCloudSyncStatus *syncStatus;

- (id)initWithDaemon:(id)a0;
- (void).cxx_destruct;
- (id)syncContextForPeriodicActivity:(id)a0;
- (long long)baseIntervalForActivityType:(long long)a0;
- (const char *)priorityForActivityType:(long long)a0;
- (BOOL)requireInexpensiveNetworking;
- (void)setLastSuccessfulLitePushDate:(id)a0;
- (void)setLastSuccessfulPullDate:(id)a0;
- (void)setLastSuccessfulPushDate:(id)a0;
- (BOOL)shouldRegisterForPeriodicSyncActivities;
- (BOOL)shouldRunLiteSync;
- (void)unitTest_setAllowLiteSync:(BOOL)a0;

@end
