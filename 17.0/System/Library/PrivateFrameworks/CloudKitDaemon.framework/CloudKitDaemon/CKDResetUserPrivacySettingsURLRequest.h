@interface CKDResetUserPrivacySettingsURLRequest : CKDURLRequest

- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (long long)databaseScope;
- (id)requestOperationClasses;
- (id)generateRequestOperations;
- (BOOL)requiresTokenRegistration;

@end
