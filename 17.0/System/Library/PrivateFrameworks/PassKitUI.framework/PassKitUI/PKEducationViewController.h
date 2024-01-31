@class PKPaymentHeroImageController, NSString, UIImageView, PKEducationPhone, UIView, PKSecureElementPass;

@interface PKEducationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKFieldDetectSuppressor, PKLoadingUIProviding> {
    PKPaymentHeroImageController *_heroImageController;
    UIImageView *_heroPadImageView;
    UIView *_heroPadBackground;
    PKSecureElementPass *_paymentPass;
    unsigned long long _educationContext;
    PKEducationPhone *_educationBodyView;
    unsigned long long _biometricAuthenticationType;
    BOOL _invalidated;
    BOOL _wasNavigationBarHidden;
}

@property (copy, nonatomic) id /* block */ continueHandler;
@property (copy, nonatomic) NSString *titleOverride;
@property (copy, nonatomic) NSString *bodyAddition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL suppressFieldDetect;

+ (id)assetBackgroundColor;
+ (id)assetBackgroundColorPad;
+ (BOOL)shouldPresentForPass:(id)a0 inEducationContext:(unsigned long long)a1;
+ (BOOL)shouldPresentForPass:(id)a0 inEducationContext:(unsigned long long)a1 reason:(id *)a2;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)invalidate;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)performContinue;
- (id)_heroPadImage;
- (void)explanationViewDidSelectContinue:(id)a0;
- (id)initWithPaymentPass:(id)a0 setupContext:(long long)a1 educationContext:(unsigned long long)a2;
- (void)showLoadingUI:(BOOL)a0 animated:(BOOL)a1;

@end
