@class NSSet, NSString, NSNumber;

@interface CEMAccountmacOSServerDeclaration_ConfiguredAccountsItem : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadType;
@property (copy, nonatomic) NSNumber *payloadPort;

+ (id)buildRequiredOnlyWithType:(id)a0;
+ (id)buildWithType:(id)a0 withPort:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
