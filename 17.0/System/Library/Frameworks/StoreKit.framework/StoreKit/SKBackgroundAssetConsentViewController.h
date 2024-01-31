@interface SKBackgroundAssetConsentViewController : OBWelcomeController

@property (copy, nonatomic) id /* block */ responseBlock;

- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (long long)modalPresentationStyle;
- (void).cxx_destruct;
- (BOOL)isModalInPresentation;
- (void)_continueButtonPressed;

@end
