@class UINavigationController;

@interface STAppAndWebsiteActivityOnboardingController : NSObject

@property (copy) id /* block */ completionBlock;
@property (retain) UINavigationController *navigationController;

- (void).cxx_destruct;
- (void)_notNowSelected;
- (void)_addTrayButtonToWelcomeController:(id)a0 localizationKey:(id)a1 action:(SEL)a2 isBold:(BOOL)a3;
- (id)_createAppAndWebsiteActivityController;
- (void)_turnOnAppAndWebsiteActivitySelected;
- (void)presentOverViewController:(id)a0 completionBlock:(id /* block */)a1;

@end
