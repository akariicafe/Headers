@class NSString, PKPassSharePendingActivation;

@interface PKPassShareActivationViewController : PKPassShareRedemptionViewController {
    NSString *_activationCode;
    PKPassSharePendingActivation *_pendingActivation;
}

- (id)init;
- (void)loadView;
- (void).cxx_destruct;
- (void)cancelButtonPressed;
- (void)_showError:(id)a0;
- (void)activationCodeDidChangeToCode:(id)a0;
- (void)continueButtonPressed;
- (id)initWithPendingActivation:(id)a0;
- (void)loadCardArt;

@end
