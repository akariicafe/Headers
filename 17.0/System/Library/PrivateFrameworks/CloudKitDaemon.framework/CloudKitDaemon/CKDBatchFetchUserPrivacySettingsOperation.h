@class NSArray;

@interface CKDBatchFetchUserPrivacySettingsOperation : CKDOperation

@property (copy, nonatomic) NSArray *containerPrivacySettings;

+ (id)appPermissionGroupsFromContainerPrivacySettings:(id)a0;

- (int)operationType;
- (id)activityCreate;
- (void)main;
- (void).cxx_destruct;
- (BOOL)shouldCheckAppVersion;

@end
