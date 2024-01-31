@class NSString;

@interface SHSKeyboardClicksControllerViewController : PSListController

@property (class, readonly) NSString *combinedDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)loadView;
- (id)specifiers;
- (id)_hapticValue:(id)a0;
- (void)_setHapticValue:(id)a0 specifier:(id)a1;
- (void)_setSoundValue:(id)a0 specifier:(id)a1;
- (void)_updateReloadSpecifierInParentController;

@end
