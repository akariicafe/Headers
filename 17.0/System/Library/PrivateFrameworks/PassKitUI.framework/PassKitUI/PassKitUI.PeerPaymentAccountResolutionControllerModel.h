@interface PassKitUI.PeerPaymentAccountResolutionControllerModel : NSObject <PKPeerPaymentAccountResolutionControllerDelegate> {
    void /* unknown type, empty encoding */ _currentView;
    void /* unknown type, empty encoding */ _loading;
    void /* unknown type, empty encoding */ updateAccountAction;
    void /* unknown type, empty encoding */ account;
    void /* unknown type, empty encoding */ verificationContext;
    void /* unknown type, empty encoding */ resolutionController;
    void /* unknown type, empty encoding */ webService;
}

- (id)init;
- (void).cxx_destruct;
- (void)peerPaymentAccountResolutionController:(id)a0 requestsDismissCurrentViewControllerAnimated:(BOOL)a1;
- (void)peerPaymentAccountResolutionController:(id)a0 requestsPresentViewController:(id)a1 animated:(BOOL)a2;

@end
