@class NSMutableArray;
@protocol HMDHAPAccessoryTask;

@interface HMDHAPAccessoryPrimaryResidentOperationTask : HMDHAPAccessoryTask

@property (retain, nonatomic) NSMutableArray *remoteFallbackTasks;
@property (retain, nonatomic) id<HMDHAPAccessoryTask> localTask;

+ (void)filterAccessoriesByDevicesFromMap:(id)a0 currentDeviceAccessories:(id)a1 otherDeviceAccessories:(id)a2;

- (void)execute;
- (void).cxx_destruct;
- (id)_fallbackTaskForDevice:(id)a0;
- (void)_fanOutRemoteRequests:(id)a0 residentToAccessoriesMap:(id)a1 responseWaitGroup:(id)a2;
- (id)_makeLocalTaskWithRequests:(id)a0 completion:(id /* block */)a1;
- (id)_makeRemoteWithFallbackTaskWithRequests:(id)a0 delegateDevice:(id)a1 completion:(id /* block */)a2;
- (void)_processLocalRequests:(id)a0 responseWaitGroup:(id)a1;
- (id)initWithContext:(id)a0 requests:(id)a1 completion:(id /* block */)a2;

@end
