@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface NTKBundleComplicationMigrationCompanionDevicePrewarmer : NSObject {
    NSMutableDictionary *_queue_failureCount;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _queue_servicing;
}

+ (void)run;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)_failureCountForDevice:(id)a0;
- (void)_handlePairedNotification;
- (void)_handleUnpairedNotification;
- (void)_incrementFailureCountForDevice:(id)a0;
- (id)_nextDeviceToPrewarm;
- (void)_purgeCaches;
- (void)_queue_prewarmIfNeeded;

@end
