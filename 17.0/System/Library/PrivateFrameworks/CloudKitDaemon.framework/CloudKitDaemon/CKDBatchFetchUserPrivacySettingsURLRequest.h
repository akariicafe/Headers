@class NSArray;

@interface CKDBatchFetchUserPrivacySettingsURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *containerPrivacySettings;

- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (long long)databaseScope;
- (id)requestOperationClasses;
- (id)generateRequestOperations;
- (void).cxx_destruct;
- (BOOL)requiresTokenRegistration;

@end
