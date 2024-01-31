@class NSUUID, NSString, NWAddressEndpoint;

@interface NEPolicyCondition : NSObject <NEPrettyDescription> {
    unsigned char _prefix;
    unsigned short _ipProtocol;
    unsigned short _packetFilterTags;
    unsigned short _schemePort;
    int _pid;
    int _pid_version;
    unsigned int _uid;
    unsigned int _domainFilter;
    unsigned int _trafficClassStart;
    unsigned int _trafficClassEnd;
    unsigned int _clientFlags;
    unsigned int _platform;
    unsigned int _sdkVersion;
    unsigned int _minSDKVersion;
    NSUUID *_applicationUUID;
    NSString *_accountIdentifier;
    NSString *_domain;
    NSString *_url;
    NSString *_interfaceName;
    NWAddressEndpoint *_startAddress;
    NWAddressEndpoint *_endAddress;
    NSString *_customEntitlement;
    NSString *_agentDomain;
    NSString *_agentType;
    NSString *_signingIdentifier;
}

@property long long conditionType;
@property (getter=isNegative) BOOL negative;
@property BOOL exactMatch;

+ (id)flowLocalAddressEmpty;
+ (id)accountIdentifier:(id)a0;
+ (id)clientProhibitsExpensive;
+ (id)domainFilter:(unsigned long long)a0;
+ (id)localAddress:(id)a0 prefix:(unsigned char)a1;
+ (id)isLoopback;
+ (id)flowIPProtocol:(unsigned short)a0;
+ (id)uid:(unsigned int)a0;
+ (id)fallbackTraffic;
+ (id)isListener;
+ (id)scopedInterface:(id)a0;
+ (id)flowRemoteAddressEmpty;
+ (id)localNetworks;
+ (id)delegateIsPlatformBinary;
+ (id)packetFilterTags:(unsigned short)a0;
+ (id)allowsUnsafeSocketAccess;
+ (id)hasSignedResult;
+ (id)isSystemProxyConnection;
+ (id)requiredAgentDomain:(id)a0 agentType:(id)a1;
+ (id)trafficClassStart:(unsigned int)a0 end:(unsigned int)a1;
+ (id)platformBinary;
+ (id)flowRemoteAddress:(id)a0 prefix:(unsigned char)a1;
+ (id)allInterfaces;
+ (id)localAddressStart:(id)a0 end:(id)a1;
+ (id)isInbound;
+ (id)realApplication:(id)a0;
+ (id)realUID:(unsigned int)a0;
+ (id)effectiveApplication:(id)a0;
+ (id)remoteAddressStart:(id)a0 end:(id)a1;
+ (id)remoteAddress:(id)a0 prefix:(unsigned char)a1;
+ (id)customEntitlement:(id)a0;
+ (id)effectivePID:(int)a0;
+ (id)domain:(id)a0;
+ (id)sdkVersion:(unsigned int)a0 minSDKVersion:(unsigned int)a1 platform:(unsigned int)a2;
+ (id)clientProhibitsContrained;
+ (id)signingIdentifier:(id)a0;
+ (id)effectivePID:(int)a0 version:(int)a1;
+ (id)ipProtocol:(unsigned short)a0;
+ (id)entitlement;
+ (id)usesModernNetworkAPI;
+ (id)flowLocalAddressStart:(id)a0 end:(id)a1;
+ (id)flowRemoteAddressStart:(id)a0 end:(id)a1;
+ (id)flowLocalAddress:(id)a0 prefix:(unsigned char)a1;
+ (id)clientFlags:(unsigned int)a0;
+ (id)url:(id)a0;
+ (id)schemeUsingPort:(unsigned short)a0;

- (id)init;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)description;
- (void).cxx_destruct;

@end
