@class HKOrganDonationRegisterViewController;

@interface HKOrganDonationIntroductionViewController : HKOrganDonationBaseViewController {
    HKOrganDonationRegisterViewController *_registrationViewController;
}

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)titleString;
- (id)bodyString;
- (id)titleImage;
- (void)learnMoreButtonTapped:(id)a0;
- (id)bottomAnchoredButtons;
- (void)buttonAtIndexTapped:(long long)a0;
- (id)linkButtonTitle;
- (void)setUpRegistrationViewController;
- (void)alreadyButtonTapped:(id)a0;
- (void)linkButtonTapped:(id)a0;
- (void)notNowButtonTapped:(id)a0;
- (void)signupButtonTapped:(id)a0;

@end
