@class NSSet, NSString;

@interface CEMApplicationAutonomousSingleAppModeDeclaration_AllowedApplicationsItem : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadBundleIdentifier;
@property (copy, nonatomic) NSString *payloadTeamIdentifier;

+ (id)buildRequiredOnlyWithBundleIdentifier:(id)a0 withTeamIdentifier:(id)a1;
+ (id)buildWithBundleIdentifier:(id)a0 withTeamIdentifier:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
