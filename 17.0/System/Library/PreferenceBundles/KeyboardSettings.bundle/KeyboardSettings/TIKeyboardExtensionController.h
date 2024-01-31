@class TIAboutKeyboardPrivacyController, TIAddExtensionKeyboardController, PSSpecifier;

@interface TIKeyboardExtensionController : PSListController

@property (retain, nonatomic) TIAboutKeyboardPrivacyController *aboutPrivacyController;
@property (retain, nonatomic) TIAddExtensionKeyboardController *addExtensionKeyboardController;
@property (retain, nonatomic) PSSpecifier *lastInputModeSpecifier;

+ (id)keyboardsForBundleID:(id)a0;

- (void)dealloc;
- (void)viewDidLoad;
- (id)specifiers;
- (void)tableView:(id)a0 willDisplayFooterView:(id)a1 forSection:(long long)a2;
- (id)isKeyboardEnabled:(id)a0;
- (void)setKeyboardEnabled:(id)a0 specifier:(id)a1;

@end
