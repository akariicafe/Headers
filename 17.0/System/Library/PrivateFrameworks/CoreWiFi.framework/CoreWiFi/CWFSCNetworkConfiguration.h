@class NSObject;
@protocol OS_dispatch_queue;

@interface CWFSCNetworkConfiguration : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    struct __SCDynamicStore { } *_storeRef;
    BOOL _isMonitoringEvents;
}

@property (copy) id /* block */ eventHandler;

- (void)restartEventMonitoring;
- (id)IPv4SubnetMasks;
- (id)IPv6Addresses;
- (id)IPv4Addresses;
- (id)__DNSGlobalStateConfig;
- (void)startEventMonitoring;
- (id)__IPv4GlobalStateConfig;
- (id)IPv6PrefixLengths;
- (id)init;
- (void)dealloc;
- (BOOL)isMonitoringEvents;
- (id)__IPv4SetupConfigForServiceID:(id)a0;
- (id)__nameForServiceWithID:(id)a0;
- (void)__startEventMonitoring;
- (id)__IPv6SetupConfigForServiceID:(id)a0;
- (void)stopEventMonitoring;
- (id)__IPv6StateConfigForServiceID:(id)a0;
- (id)networkInterfaceNames;
- (id)IPv6ServiceID;
- (id)IPv6Router;
- (id)__IPv6GlobalStateConfig;
- (id)DNSSearchDomains;
- (id)IPv4ServiceID;
- (id)__networkInterfaceStateConfig;
- (void).cxx_destruct;
- (id)IEEE80211NetworkInterfacesNames;
- (id)DNSDomainName;
- (id)IPv4Router;
- (BOOL)__isIEEE80211NetworkInterfaceName:(id)a0;
- (id)IPv6ServiceName;
- (id)__IPv4StateConfigForServiceID:(id)a0;
- (id)IPv6InterfaceName;
- (id)IPv4ServiceName;
- (id)IPv4InterfaceName;
- (id)DNSServerAddresses;

@end
