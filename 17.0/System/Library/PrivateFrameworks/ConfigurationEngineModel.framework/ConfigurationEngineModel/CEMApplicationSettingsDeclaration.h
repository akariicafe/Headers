@class NSSet, NSString, NSArray, NSNumber;

@interface CEMApplicationSettingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSNumber *payloadDiagnosticSubmission;
@property (copy, nonatomic) NSNumber *payloadAppAnalytics;
@property (copy, nonatomic) NSNumber *payloadAllowDiagnosticSubmission;
@property (copy, nonatomic) NSArray *payloadAutonomousSingleAppModePermittedAppIDs;
@property (copy, nonatomic) NSNumber *payloadAllowActivityContinuation;
@property (copy, nonatomic) NSNumber *payloadAllowEnterpriseAppTrust;
@property (copy, nonatomic) NSNumber *payloadAllowDiagnosticSubmissionModification;
@property (copy, nonatomic) NSNumber *payloadAllowAutomaticAppUpdates;
@property (copy, nonatomic) NSNumber *payloadAllowAutomaticAppUpdatesModification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)buildWithIdentifier:(id)a0 withDiagnosticSubmission:(id)a1 withAppAnalytics:(id)a2 withAllowDiagnosticSubmission:(id)a3 withAutonomousSingleAppModePermittedAppIDs:(id)a4 withAllowActivityContinuation:(id)a5 withAllowEnterpriseAppTrust:(id)a6 withAllowDiagnosticSubmissionModification:(id)a7 withAllowAutomaticAppUpdates:(id)a8 withAllowAutomaticAppUpdatesModification:(id)a9;
+ (id)restrictionPayloadKeys;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)activationLevel;
- (id)assetReferences;
- (BOOL)multipleAllowed;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (BOOL)mustBeSupervised;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
