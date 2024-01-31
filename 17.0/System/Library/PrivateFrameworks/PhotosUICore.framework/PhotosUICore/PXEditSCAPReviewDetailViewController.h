@interface PXEditSCAPReviewDetailViewController : UIViewController <PXTapToRadarDiagnosticProvider> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ sourceImagesStackView;
    void /* unknown type, empty encoding */ viewModelObservation;
    void /* unknown type, empty encoding */ sourceViewButton;
    void /* unknown type, empty encoding */ closeButton;
    void /* unknown type, empty encoding */ feedbackButton;
    void /* unknown type, empty encoding */ ttrQueue;
}

- (id)initWithViewModel:(id)a0;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)a0;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)closeButtonTapped;
- (void)feedbackButtonTapped;
- (void)handleDismissWithRecognizer:(id)a0;
- (void)handleFitToggleWithRecognizer:(id)a0;
- (void)sourceViewButtonTapped;

@end
