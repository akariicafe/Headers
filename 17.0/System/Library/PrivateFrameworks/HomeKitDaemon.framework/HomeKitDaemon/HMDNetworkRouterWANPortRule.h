@class NSString, HMDNetworkRouterProtocol, HMDNetworkRouterIPAddress, HAPTLVUnsignedNumberValue;

@interface HMDNetworkRouterWANPortRule : NSObject <HMDNetworkRouterWANRule, NSCopying, HAPTLVProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HMDNetworkRouterProtocol *protocol;
@property (retain, nonatomic) NSString *hostDNSName;
@property (retain, nonatomic) HMDNetworkRouterIPAddress *hostIPStart;
@property (retain, nonatomic) HMDNetworkRouterIPAddress *hostIPEnd;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *hostPortStart;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *hostPortEnd;
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
- (id)initWithProtocol:(id)a0 hostDNSName:(id)a1 hostIPStart:(id)a2 hostIPEnd:(id)a3 hostPortStart:(id)a4 hostPortEnd:(id)a5;

@end
