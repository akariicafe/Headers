@interface CKDFetchUserPrivacySettingsOperation : CKDOperation

@property (nonatomic) long long discoverable;

- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (int)operationType;
- (id)activityCreate;
- (void)main;
- (void)_handleRetrievedPrivacySettings:(id)a0;

@end
