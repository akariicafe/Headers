@class NSString, HAPNFCAccessKeyTypeWrapper, NSData, HAPNFCAccessKeyStateWrapper;

@interface HAPDeviceCredentialKey : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAPNFCAccessKeyTypeWrapper *type;
@property (retain, nonatomic) NSData *key;
@property (retain, nonatomic) HAPNFCAccessKeyStateWrapper *state;
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
- (id)initWithType:(id)a0 key:(id)a1 state:(id)a2;
- (id)serializeWithError:(id *)a0;

@end
