@class NSSet, NSString, NSNumber;

@interface CEMSecurityFirewallDeclaration_ApplicationsItem : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadApplication;
@property (copy, nonatomic) NSNumber *payloadAllowed;
@property (copy, nonatomic) NSString *payloadBundleID;

+ (id)buildRequiredOnlyWithApplication:(id)a0 withAllowed:(id)a1 withBundleID:(id)a2;
+ (id)buildWithApplication:(id)a0 withAllowed:(id)a1 withBundleID:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
