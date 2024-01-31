@class FBSApplicationInfo;

@interface SBFairPlayFamilyLeaveAlertItem : SBAlertItem

@property (retain, nonatomic) FBSApplicationInfo *appInfo;

- (void).cxx_destruct;
- (BOOL)dismissOnLock;
- (id)initWithAppInfo:(id)a0;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;

@end
