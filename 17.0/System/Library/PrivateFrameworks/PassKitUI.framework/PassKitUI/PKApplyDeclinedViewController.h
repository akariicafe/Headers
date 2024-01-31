@class PKBusinessChatController;

@interface PKApplyDeclinedViewController : PKApplyExplanationViewController {
    PKBusinessChatController *_businessChatController;
}

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)_cancelAction;
- (void)_continueAction;
- (void)_auxiliaryAction;
- (BOOL)_shouldOfferAddPayLaterPassToWallet;

@end
