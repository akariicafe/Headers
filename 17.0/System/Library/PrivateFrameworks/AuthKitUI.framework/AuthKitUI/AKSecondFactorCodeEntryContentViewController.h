@class NSArray, NSString, AKAppleIDAuthenticationContext, AKBasicLoginContentViewController, AKCodeEntryView;

@interface AKSecondFactorCodeEntryContentViewController : UIViewController <CAAnimationDelegate, AKSecondFactorCodeEntry>

@property (retain, nonatomic) AKCodeEntryView *codeGeneratorView;
@property (retain, nonatomic) AKBasicLoginContentViewController *titleHeaderViewController;
@property (retain, nonatomic) AKAppleIDAuthenticationContext *authenticationContext;
@property (retain, nonatomic) NSArray *activeConstraints;
@property (copy, nonatomic) NSString *reason;
@property (readonly, nonatomic) NSString *generatedCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateViewConstraints;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)_configureCodeGenView;
- (void)_configureTitleHeaderView;
- (void)_updateFontContstraints:(id)a0;
- (void)clearSecondFactorEntry;
- (void)jiggleAView;
- (void)setPasscodeFieldDisabled:(BOOL)a0;

@end
