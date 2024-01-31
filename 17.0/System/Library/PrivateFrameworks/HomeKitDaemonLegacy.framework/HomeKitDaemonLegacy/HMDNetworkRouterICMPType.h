@class HAPTLVUnsignedNumberValue, NSString, HMDNetworkRouterIPProtocolVersion;

@interface HMDNetworkRouterICMPType : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HMDNetworkRouterIPProtocolVersion *protocol;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *typeValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parsedFromData:(id)a0 error:(id *)a1;
+ (id)typeFromICMPType:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)parseFromData:(id)a0 error:(id *)a1;
- (id)serializeWithError:(id *)a0;
- (id)initWithProtocol:(id)a0 typeValue:(id)a1;

@end
