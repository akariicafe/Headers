@class NSSet, NSString;

@interface CEMSystemAirPlayDestinationsDeclaration_WhitelistItem : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadDeviceID;

+ (id)buildRequiredOnlyWithDeviceID:(id)a0;
+ (id)buildWithDeviceID:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
