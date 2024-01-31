@class NSString, HAPNFCAccessKeyTypeWrapper, NSData, HAPNFCAccessKeyStateWrapper;

@interface HAPNFCAccessDeviceCredentialKeyRequest : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAPNFCAccessKeyTypeWrapper *type;
@property (retain, nonatomic) NSData *key;
@property (retain, nonatomic) NSData *issuerKeyIdentifier;
@property (retain, nonatomic) HAPNFCAccessKeyStateWrapper *state;
@property (retain, nonatomic) NSData *identifier;
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
- (id)initWithType:(id)a0 key:(id)a1 issuerKeyIdentifier:(id)a2 state:(id)a3 identifier:(id)a4;
- (id)serializeWithError:(id *)a0;

@end
