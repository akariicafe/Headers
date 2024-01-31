@class NSString, _WFIPMonitorObserver, NSObject;
@protocol OS_dispatch_queue;

@interface WFIPMonitor : NSObject {
    BOOL _isMonitoring;
    _WFIPMonitorObserver *_dynamicStoreInfo;
}

@property (copy, nonatomic) NSString *serviceID;
@property (copy, nonatomic) NSString *interfaceName;
@property struct __SCDynamicStore { } *storeRef;
@property struct __SCPreferences { } *prefsRef;
@property struct __SCDynamicStore { } *networkServiceStore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSString *bundleIdentifier;

- (id)initWithInterfaceName:(id)a0;
- (BOOL)hasValidIPAddress;
- (id)ipv6PrefixLengths;
- (id)__wifiServiceID;
- (id)init;
- (BOOL)monitorNetworkServiceID:(id)a0;
- (void)dealloc;
- (id)ipv4SubnetMasks;
- (id)httpProxyServer;
- (BOOL)globalProxyIsEnabled;
- (long long)ipv4ConfigMethod;
- (long long)ipv6ConfigMethod;
- (BOOL)hasValidIPv6Address;
- (id)dnsDomainName;
- (id)__ipv6SetupConfig;
- (id)DHCPLeaseExpirationDate;
- (id)ipv6Addresses;
- (BOOL)isUsingCustomProxySetting;
- (id)httpProxyUsername;
- (id)__proxiesSetupConfig;
- (id)dnsServerAddresses;
- (id)ipv4Router;
- (BOOL)httpProxyAutoConfigured;
- (id)dnsSearchDomains;
- (void).cxx_destruct;
- (id)ipv4DHCPClientID;
- (id)__ipv4InterfaceStateConfig;
- (id)ipv6Router;
- (id)httpProxyAutoConfigURL;
- (id)__ipv6StateConfig;
- (BOOL)hasValidIPv4Address;
- (void)_postChangesNotification:(id)a0;
- (BOOL)personalHotspotHasClients;
- (id)__dnsStateConfig;
- (id)__dnsSetupConfig;
- (id)ipv4Addresses;
- (id)httpProxyPort;
- (id)__dhcpInfo;
- (BOOL)isUsingCustomDNSSettings;
- (id)__ipv4StateConfig;
- (id)__ipv4SetupConfig;
- (BOOL)httpProxyIsAuthenticated;
- (BOOL)renewLease;

@end
