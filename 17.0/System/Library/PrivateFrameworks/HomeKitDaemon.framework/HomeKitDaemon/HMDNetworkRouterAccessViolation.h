@class NSString, HAPTLVUnsignedNumberValue;

@interface HMDNetworkRouterAccessViolation : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAPTLVUnsignedNumberValue *clientIdentifier;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *lastViolationTimestamp;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *lastResetTimestamp;
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
- (id)initWithClientIdentifier:(id)a0 lastViolationTimestamp:(id)a1 lastResetTimestamp:(id)a2;

@end
