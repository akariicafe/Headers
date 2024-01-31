@class NSSet, NSString, NSNumber;

@interface CEMNetworkCellularDeclaration_AttachAPN : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadName;
@property (copy, nonatomic) NSString *payloadAuthenticationType;
@property (copy, nonatomic) NSString *payloadUsername;
@property (copy, nonatomic) NSString *payloadPassword;
@property (copy, nonatomic) NSNumber *payloadAllowedProtocolMask;

+ (id)buildRequiredOnlyWithName:(id)a0;
+ (id)buildWithName:(id)a0 withAuthenticationType:(id)a1 withUsername:(id)a2 withPassword:(id)a3 withAllowedProtocolMask:(id)a4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
