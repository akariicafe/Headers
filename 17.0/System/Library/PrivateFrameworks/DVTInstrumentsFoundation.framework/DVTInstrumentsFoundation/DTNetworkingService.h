@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface DTNetworkingService : DTXService <DTNetworkingServiceAuthorizedAPI> {
    NSObject<OS_dispatch_queue> *_workQueue;
    struct __NStatManager { } *_netstatMan;
    struct DTNStatSourceMap { struct __CFDictionary *_container; long long _nextSerialNumber; } _sources;
    unsigned long long _seenInterfaces;
    unsigned long long _hiddenInterfaces;
    NSObject<OS_dispatch_source> *_dispatchTimer;
    long long _interval;
    int _filteredToPid;
    BOOL _isAppleInternal;
    BOOL _isDisconnected;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceName;
+ (void)registerCapabilities:(id)a0;

- (void)stopMonitoring;
- (void).cxx_destruct;
- (void)setTargetPID:(id)a0;
- (void)startMonitoring;
- (void)messageReceived:(id)a0;
- (id)initWithChannel:(id)a0;

@end
