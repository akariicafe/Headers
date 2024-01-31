@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CWFSCNetworkService : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    struct __SCDynamicStore { } *_storeRef;
    struct __SCPreferences { } *_prefsRef;
    BOOL _isMonitoringEvents;
    NSString *_serviceID;
    NSString *_serviceName;
    BOOL _isServiceEnabled;
}

@property (copy) id /* block */ eventHandler;
@property (readonly, copy, nonatomic) NSString *interfaceName;
@property (readonly, copy, nonatomic) NSString *serviceID;

- (id)DHCPv6ServerID;
- (id)IPv4NetworkSignature;
- (void)restartEventMonitoring;
- (id)IPv4ARPResolvedIPAddress;
- (id)IPv4SubnetMasks;
- (id)initWithInterfaceName:(id)a0;
- (id)IPv6Addresses;
- (id)IPv4Addresses;
- (void)startEventMonitoring;
- (id)__IPv6StateConfig;
- (id)init;
- (id)__IPv4StateConfig;
- (void)dealloc;
- (BOOL)isMonitoringEvents;
- (BOOL)isServiceEnabled;
- (void)stopEventMonitoring;
- (BOOL)__updateServiceID;
- (id)__DHCPStateConfig;
- (id)__DNSSetupConfig;
- (id)DHCPLeaseStartTimestamp;
- (id)__IPv4SetupConfig;
- (id)DHCPServerID;
- (id)serviceName;
- (id)IPv6Router;
- (BOOL)refreshServiceID;
- (id)__proxiesSetupConfig;
- (id)__DNSStateConfig;
- (id)__DHCPv6StateConfig;
- (id)__DHCPInfo;
- (void)__refreshNotificationKeys;
- (void).cxx_destruct;
- (BOOL)__refreshServiceID;
- (id)DNSDomainName;
- (id)IPv4Router;
- (id)IPv6ConfigMethod;
- (id)IPv6NetworkSignature;
- (id)__IPv6SetupConfig;
- (id)DHCPLeaseExpirationTimestamp;
- (id)IPv4ARPResolvedHardwareAddress;
- (id)IPv4ConfigMethod;
- (id)DNSServerAddresses;

@end
