@class NSString, HAPTLVSignedNumberValue, NSData, HMDNetworkRouterIPAddressList, HAPTLVUnsignedNumberValue;

@interface HMDNetworkRouterClientStatus : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAPTLVUnsignedNumberValue *clientIdentifier;
@property (retain, nonatomic) NSData *macAddress;
@property (retain, nonatomic) HMDNetworkRouterIPAddressList *ipAddressList;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *lanIdentifier;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) HAPTLVSignedNumberValue *rssi;
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
- (id)initWithClientIdentifier:(id)a0 macAddress:(id)a1 ipAddressList:(id)a2 lanIdentifier:(id)a3 name:(id)a4 rssi:(id)a5;

@end
