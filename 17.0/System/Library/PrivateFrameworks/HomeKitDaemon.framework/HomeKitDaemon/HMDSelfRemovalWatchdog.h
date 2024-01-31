@class HMFTimer, HMDCoreDataCloudMirroringExportStatusMonitor, NSUUID, NSString, NSDate, NSObject, NSManagedObjectID;
@protocol OS_dispatch_queue;

@interface HMDSelfRemovalWatchdog : NSObject <HMDCoreDataCloudMirroringExportStatusMonitorDelegate, HMFTimerDelegate, HMFLogging>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSDate *selfRemovalBeginDate;
@property (retain) HMFTimer *watchdogTimer;
@property (copy) id /* block */ completion;
@property (retain) NSManagedObjectID *currentAccessoryModelObjectID;
@property (retain) HMDCoreDataCloudMirroringExportStatusMonitor *monitor;
@property (readonly, copy) NSUUID *currentAccessoryUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (void)timerDidFire:(id)a0;
- (void).cxx_destruct;
- (void)startWithCompletion:(id /* block */)a0;
- (void)_stopWithError:(id)a0;
- (id)_retrieveExpectedObjectIDsTokenMap;
- (id)initWithCurrentAccessoryUUID:(id)a0 workQueue:(id)a1;
- (void)monitorDidObserveExportComplete:(id)a0;

@end
