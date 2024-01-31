@class SignpostSupportSubsystemCategoryAllowlist;

@interface STYSpecialAppLaunchSignpostMonitorHelper : STYSignpostsMonitorHelper {
    SignpostSupportSubsystemCategoryAllowlist *_allowList;
}

@property BOOL forceAppLaunchDiagnostics;

- (id)init;
- (void).cxx_destruct;
- (id)name;
- (id)allowList;
- (void)handleInterval:(id)a0;
- (void)processAppLaunch:(id)a0 tailspinFilenamePrefix:(id)a1 duration:(id)a2 andPID:(id)a3 reason:(id)a4;

@end
