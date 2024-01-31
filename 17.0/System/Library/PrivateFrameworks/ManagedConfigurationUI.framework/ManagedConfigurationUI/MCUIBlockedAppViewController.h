@interface MCUIBlockedAppViewController : PSListController

@property BOOL reenabled;

- (id)init;
- (void)dealloc;
- (void)setOverride:(id)a0;
- (id)specifiers;
- (BOOL)overridden;
- (void)_askForReenableConfirmation;
- (void)_blockedAppsUpdated;
- (id)_reenableButtonSpecifier;

@end
