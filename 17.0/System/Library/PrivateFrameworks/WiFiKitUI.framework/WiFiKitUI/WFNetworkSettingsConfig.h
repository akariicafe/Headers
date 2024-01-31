@class NSString, NSArray, NSDate;

@interface WFNetworkSettingsConfig : NSObject

@property (copy, nonatomic) NSString *ssid;
@property BOOL current;
@property BOOL forgetable;
@property BOOL joinable;
@property BOOL manageable;
@property BOOL cloudSyncable;
@property BOOL canRenewLease;
@property BOOL diagnosable;
@property BOOL autoJoinConfigurable;
@property BOOL autoJoinEnabled;
@property BOOL autoLoginConfigurable;
@property BOOL autoLoginEnabled;
@property BOOL saveDataModeConfigurable;
@property BOOL privacyProxyConfigurable;
@property long long privacyProxyTierStatus;
@property BOOL isInSaveDataMode;
@property BOOL privacyProxyEnabled;
@property BOOL wifiOutrankEnabled;
@property BOOL networkQualityVisible;
@property double networkQualityResponsiveness;
@property (copy) NSDate *networkQualityDate;
@property (retain) NSArray *healthRecommendations;
@property long long ipv4Config;
@property (copy) NSString *ipv4Address;
@property (copy) NSString *ipv4AddressManual;
@property (copy) NSString *ipv4SubnetMask;
@property (copy) NSString *ipv4SubnetMaskManual;
@property (copy) NSString *ipv4RouterAddress;
@property (copy) NSString *ipv4RouterAddressManual;
@property (copy) NSString *dhcpClientID;
@property (copy) NSDate *dhcpLeaseExpirationDate;
@property long long ipv6Config;
@property (retain) NSArray *ipv6Addresses;
@property (retain) NSArray *ipv6PrefixLengths;
@property (copy) NSString *ipv6AddressManual;
@property (copy) NSString *ipv6RouterAddress;
@property (copy) NSString *ipv6RouterAddressManual;
@property (copy) NSString *ipv6PrefixLengthManual;
@property long long dnsConfig;
@property (retain) NSArray *dnsServerAddresses;
@property (retain) NSArray *dnsSeverAddresses;
@property (copy) NSArray *dnsSearchDomains;
@property BOOL httpProxyConfigurable;
@property long long httpProxyConfig;
@property (copy) NSString *httpProxyServerAddress;
@property (copy) NSString *httpProxyServerPort;
@property BOOL httpProxyAuthenticationRequired;
@property (copy) NSString *httpProxyUsername;
@property (copy) NSString *httpProxyPassword;
@property (copy) NSString *httpProxyConfigPAC;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToNetworkSettingsConfig:(id)a0;
- (id)changesBetweenConfig:(id)a0;
- (BOOL)validIPv4Configuration;
- (BOOL)validIPv6Configuration;
- (BOOL)validProxyConfiguration;

@end
