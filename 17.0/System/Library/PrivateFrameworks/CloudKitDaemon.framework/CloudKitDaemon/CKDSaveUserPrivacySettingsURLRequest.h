@interface CKDSaveUserPrivacySettingsURLRequest : CKDURLRequest

@property (nonatomic) long long discoverableTrinary;

- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (long long)databaseScope;
- (id)requestOperationClasses;
- (id)generateRequestOperations;
- (id)initWithOperation:(id)a0;
- (void)setDiscoverable:(BOOL)a0;
- (BOOL)requiresTokenRegistration;

@end
