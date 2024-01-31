@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CWFSCNetworkInterface : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    struct __SCDynamicStore { } *_storeRef;
    BOOL _isMonitoringEvents;
}

@property (readonly, copy, nonatomic) NSString *interfaceName;
@property (readonly, copy, nonatomic) NSString *hardwareAddress;
@property (copy) id /* block */ eventHandler;

- (void)restartEventMonitoring;
- (id)IPv4SubnetMasks;
- (id)initWithInterfaceName:(id)a0;
- (id)IPv6Addresses;
- (id)IPv4Addresses;
- (void)startEventMonitoring;
- (id)__IPv6StateConfig;
- (id)IPv6PrefixLengths;
- (id)init;
- (id)__IPv4StateConfig;
- (void)dealloc;
- (BOOL)isMonitoringEvents;
- (void)__startEventMonitoring;
- (void)stopEventMonitoring;
- (id)__networkInterfaceHardwareAddress;
- (id)IPv4BroadcastAddresses;
- (id)airPortSetupConfiguration;
- (id)airPortStateConfiguration;
- (void).cxx_destruct;
- (BOOL)isLinkActive;
- (id)IPv6Flags;
- (id)__linkStateConfig;

@end
