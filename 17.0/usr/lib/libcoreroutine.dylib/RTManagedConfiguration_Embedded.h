@interface RTManagedConfiguration_Embedded : RTManagedConfiguration

- (BOOL)isHealthDataSubmissionAllowed;
- (BOOL)effectiveBoolValueForSetting:(id)a0;
- (void)dealloc;
- (BOOL)isFindMyCarAllowed;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (BOOL)isDiagnosticsAndUsageAllowed;
- (id)stringToManagedConfigurationKey:(id)a0;
- (void)setDelegate:(id)a0;

@end
