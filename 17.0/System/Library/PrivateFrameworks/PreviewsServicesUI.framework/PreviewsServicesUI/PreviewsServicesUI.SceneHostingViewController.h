@interface PreviewsServicesUI.SceneHostingViewController : UIViewController {
    void /* unknown type, empty encoding */ deactivatedHandler;
    void /* unknown type, empty encoding */ isUserActivePreview;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ host;
    void /* unknown type, empty encoding */ currentActivationRequest;
    void /* unknown type, empty encoding */ firstResponderStatus;
    void /* unknown type, empty encoding */ sceneObservationToken;
    void /* unknown type, empty encoding */ readyForDisplay;
}

@property (nonatomic, readonly) BOOL canBecomeFirstResponder;

- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (BOOL)resignFirstResponder;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)becomeFirstResponder;
- (id)initWithCoder:(id)a0;

@end
