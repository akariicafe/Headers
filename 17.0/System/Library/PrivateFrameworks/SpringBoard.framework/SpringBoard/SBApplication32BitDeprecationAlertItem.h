@class SBApplication;

@interface SBApplication32BitDeprecationAlertItem : SBAlertItem

@property (weak, nonatomic) SBApplication *associatedDisplay;

- (id)_title;
- (id)initWithApplication:(id)a0;
- (void).cxx_destruct;
- (id)_message;
- (BOOL)dismissOnLock;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (BOOL)forcesModalAlertAppearance;
- (BOOL)shouldShowInLockScreen;

@end
