@class PKPayLaterDynamicContentPage, NSString, PKPayLaterSetupFlowController;

@interface PKPayLaterEnterAmountSetupViewController : PKPayLaterEnterAmountViewController {
    PKPayLaterSetupFlowController *_setupController;
    PKPayLaterDynamicContentPage *_dynamicContentPage;
    NSString *_minimumString;
    NSString *_maximumString;
    NSString *_pageTag;
}

- (id)headerSubtitle;
- (id)headerTitle;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)willMoveToParentViewController:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_cancelButtonTapped;
- (void)_reportViewDidAppear:(BOOL)a0;
- (void)currencyAmountUpdated:(id)a0;
- (id)initWithSetupFlowController:(id)a0;
- (void)nextButtonTapped;
- (BOOL)shouldAllowDecimalInput;

@end
