@class CKDPUserPrivacySettings;

@interface CKDFetchUserPrivacySettingsURLRequest : CKDURLRequest

@property (retain, nonatomic) CKDPUserPrivacySettings *userPrivacySettings;

- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (id)requestDidParseProtobufObject:(id)a0;
- (long long)databaseScope;
- (id)requestOperationClasses;
- (id)generateRequestOperations;
- (void).cxx_destruct;

@end
