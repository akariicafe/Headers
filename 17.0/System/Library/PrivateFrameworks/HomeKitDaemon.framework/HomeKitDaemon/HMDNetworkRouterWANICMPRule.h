@class NSString, HMDNetworkRouterIPAddress, HMDNetworkRouterICMPTypeList;

@interface HMDNetworkRouterWANICMPRule : NSObject <HMDNetworkRouterWANRule, NSCopying, HAPTLVProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *hostDNSName;
@property (retain, nonatomic) HMDNetworkRouterIPAddress *hostIPStart;
@property (retain, nonatomic) HMDNetworkRouterIPAddress *hostIPEnd;
@property (retain, nonatomic) HMDNetworkRouterICMPTypeList *icmpTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parsedFromData:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)parseFromData:(id)a0 error:(id *)a1;
- (id)serializeWithError:(id *)a0;
- (void)addTo:(id)a0;
- (id)initWithHostDNSName:(id)a0 hostIPStart:(id)a1 hostIPEnd:(id)a2 icmpTypes:(id)a3;

@end
