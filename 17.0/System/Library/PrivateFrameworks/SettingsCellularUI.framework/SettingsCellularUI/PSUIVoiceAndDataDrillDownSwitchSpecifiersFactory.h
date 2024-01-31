@interface PSUIVoiceAndDataDrillDownSwitchSpecifiersFactory : NSObject

+ (id)getLoggerForSlot:(long long)a0;
+ (BOOL)isVoLTESwitchTurnedOnByDefaultAndHidden:(id)a0;
+ (BOOL)shouldShow5GSASwitchForSubscriptionContext:(id)a0 RATMode:(int)a1;
+ (BOOL)shouldShowAnyVoiceAndDataSwitchSpecifierForContext:(id)a0 RATMode:(int)a1;
+ (BOOL)shouldShowVoLTESwitchForSubscriptionContext:(id)a0 RATMode:(int)a1;
+ (BOOL)shouldShowVoNRSwitchForSubscriptionContext:(id)a0 RATMode:(int)a1;

- (id)create5GSASwitchSpecifierWithHostController:(id)a0 parentSpecifier:(id)a1;
- (id)createVoLTESwitchSpecifierWithHostController:(id)a0 parentSpecifier:(id)a1;
- (id)createVoNRSwitchSpecifierWithHostController:(id)a0 parentSpecifier:(id)a1;

@end
