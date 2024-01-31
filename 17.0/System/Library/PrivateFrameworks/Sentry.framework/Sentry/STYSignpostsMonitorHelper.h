@class NSString, SignpostSupportSubsystemCategoryAllowlist, NSObject;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface STYSignpostsMonitorHelper : NSObject

@property BOOL shouldBeEnabled;
@property BOOL isEnabled;
@property (retain) NSObject<OS_dispatch_queue> *processingQueue;
@property (retain) NSObject<OS_os_transaction> *osTransaction;
@property (readonly) NSString *name;
@property (readonly) SignpostSupportSubsystemCategoryAllowlist *allowList;

- (void)resetState;
- (id)init;
- (BOOL)needsEnablementChange;
- (void).cxx_destruct;
- (void)handleInterval:(id)a0;
- (void)takeTransaction;
- (void)didEndMonitoring;
- (void)handleEmit:(id)a0;
- (void)handleIntervalBegin:(id)a0;
- (BOOL)wantsAnimationFrameRate;
- (void)willStartMonitoring;

@end
