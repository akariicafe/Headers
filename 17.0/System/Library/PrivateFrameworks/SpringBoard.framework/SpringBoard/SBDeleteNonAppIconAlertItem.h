@class NSString, SBIcon;

@interface SBDeleteNonAppIconAlertItem : SBAlertItem

@property (readonly, nonatomic) SBIcon *icon;
@property (readonly, copy, nonatomic) NSString *iconLocation;

- (void).cxx_destruct;
- (BOOL)dismissOnLock;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (void)didActivate;
- (BOOL)forcesModalAlertAppearance;
- (id)initWithIcon:(id)a0 location:(id)a1;
- (BOOL)shouldShowInLockScreen;

@end
