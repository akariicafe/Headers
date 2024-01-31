@class PSSpecifier;

@interface STDisableAppAndWebsiteActivityGroupSpecifierProvider : STRootGroupSpecifierProvider

@property (retain, nonatomic) PSSpecifier *disableAppAndWebsiteActivitySpecifier;

- (id)init;
- (BOOL)isHidden;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)setCoordinator:(id)a0;
- (void)confirmDisableAppAndWebsiteActivity:(id)a0;
- (void)disableAppAndWebsiteActivity:(id)a0;
- (id)disableAppAndWebsiteActivityConfirmationPrompt;
- (id)passcodeGatedDeleteButtonSpecifierWithName:(id)a0 action:(SEL)a1;
- (void)updateDisableAppAndWebsiteActivitySpecifier;

@end
