@class NSSet, NSString;

@interface CEMSystemAirPlayDestinationsDeclaration_PasswordsItem : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadDeviceName;
@property (copy, nonatomic) NSString *payloadPassword;
@property (copy, nonatomic) NSString *payloadDeviceID;

+ (id)buildRequiredOnlyWithDeviceName:(id)a0 withPassword:(id)a1 withDeviceID:(id)a2;
+ (id)buildWithDeviceName:(id)a0 withPassword:(id)a1 withDeviceID:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
