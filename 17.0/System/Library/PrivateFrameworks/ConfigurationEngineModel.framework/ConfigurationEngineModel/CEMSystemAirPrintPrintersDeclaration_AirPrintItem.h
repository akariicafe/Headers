@class NSSet, NSString, NSNumber;

@interface CEMSystemAirPrintPrintersDeclaration_AirPrintItem : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadIPAddress;
@property (copy, nonatomic) NSString *payloadResourcePath;
@property (copy, nonatomic) NSNumber *payloadPort;
@property (copy, nonatomic) NSNumber *payloadForceTLS;

+ (id)buildRequiredOnlyWithIPAddress:(id)a0 withResourcePath:(id)a1;
+ (id)buildWithIPAddress:(id)a0 withResourcePath:(id)a1 withPort:(id)a2 withForceTLS:(id)a3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
