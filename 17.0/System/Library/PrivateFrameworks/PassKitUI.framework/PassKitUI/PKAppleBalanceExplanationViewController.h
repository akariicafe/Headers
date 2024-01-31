@class NSString, PKAppleBalanceSetupController;
@protocol PKAppleBalanceExplanationViewControllerDelegate;

@interface PKAppleBalanceExplanationViewController : PKExplanationViewController <PKLoadingUIProviding> {
    PKAppleBalanceSetupController *_setupController;
}

@property (weak, nonatomic) id<PKAppleBalanceExplanationViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)_titleText;
- (id)_bodyText;
- (id)_primaryActionTitle;
- (void)_setShowSpinner:(BOOL)a0;
- (void)explanationViewDidSelectContinue:(id)a0;
- (id)initWithSetupController:(id)a0;
- (void)showLoadingUI:(BOOL)a0 animated:(BOOL)a1;

@end
