@interface CKDSaveUserPrivacySettingsOperation : CKDOperation

@property (nonatomic) long long discoverable;

+ (long long)isPredominatelyDownload;

- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (int)operationType;
- (id)activityCreate;
- (void)main;
- (BOOL)shouldCheckAppVersion;

@end
