@class ATXDNDModeConfigurationClient, BPSSink, BMBiomeScheduler, NSObject, _PASLock;
@protocol OS_dispatch_queue;

@interface ATXSuggestionModeFilter : NSObject {
    _PASLock *_lock;
    ATXDNDModeConfigurationClient *_client;
    NSObject<OS_dispatch_queue> *_queue;
    BMBiomeScheduler *_scheduler;
    BPSSink *_sink;
}

+ (id)sharedInstance;
+ (id)_currentModeUUID;

- (id)init;
- (void)removeObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (void)registerForModeChanges;
- (void)_updateConfigurationWithModeUUID:(id)a0 notifyingObservers:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)currentModeConfigurationAllowsSuggestion:(id)a0;
- (BOOL)currentModeConfigurationAllowsBundleId:(id)a0;

@end
