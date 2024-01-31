@class HAP2TLVPairingStateWrapper, NSString, NSData, HAPTLVUnsignedNumberValue, HAP2TLVPairingMethodWrapper;

@interface HAP2TLVAddPairingRequest : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAP2TLVPairingStateWrapper *state;
@property (retain, nonatomic) HAP2TLVPairingMethodWrapper *method;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSData *publicKey;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *permissions;
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
- (id)initWithState:(id)a0 method:(id)a1 identifier:(id)a2 publicKey:(id)a3 permissions:(id)a4;
- (id)serializeWithError:(id *)a0;

@end
