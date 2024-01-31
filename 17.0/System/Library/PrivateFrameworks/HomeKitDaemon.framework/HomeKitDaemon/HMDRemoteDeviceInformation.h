@class NSObject, HMFTimer, NSHashTable, NSMutableArray, HMDDevice;
@protocol OS_dispatch_queue, HMDRemoteDeviceMonitorFactory;

@interface HMDRemoteDeviceInformation : HMFObject {
    BOOL _reachable;
    BOOL _didUpdateReachabilityDueToNonNetworkStateChangeReason;
    BOOL _didUpdateReachabilityWithInitialReachablityReason;
    HMDDevice *_device;
    NSObject<OS_dispatch_queue> *_workQueue;
    id<HMDRemoteDeviceMonitorFactory> _factory;
    long long _state;
    NSMutableArray *_confirmationHandlers;
    NSHashTable *_clients;
    HMFTimer *_retryTimer;
}

- (id)init;
- (void).cxx_destruct;
- (id)attributeDescriptions;

@end
