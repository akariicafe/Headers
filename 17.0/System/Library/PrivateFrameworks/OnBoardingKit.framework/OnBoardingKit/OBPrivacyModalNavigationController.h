@interface OBPrivacyModalNavigationController : OBNavigationController

@property (copy) id /* block */ dismissButtonPressedHandler;
@property (nonatomic, getter=isDarkMode) BOOL darkMode;

- (long long)preferredUserInterfaceStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)_doneButtonPressed;
- (void)addDismissButtonWithPressedHandler:(id /* block */)a0;

@end
