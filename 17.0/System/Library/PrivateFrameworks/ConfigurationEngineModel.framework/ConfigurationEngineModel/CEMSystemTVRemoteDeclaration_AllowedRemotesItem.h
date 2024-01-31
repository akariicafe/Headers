@class NSSet, NSString;

@interface CEMSystemTVRemoteDeclaration_AllowedRemotesItem : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadRemoteDeviceID;

+ (id)buildRequiredOnlyWithRemoteDeviceID:(id)a0;
+ (id)buildWithRemoteDeviceID:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
