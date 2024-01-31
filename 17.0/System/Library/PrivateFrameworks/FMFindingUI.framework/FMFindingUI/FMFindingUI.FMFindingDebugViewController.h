@interface FMFindingUI.FMFindingDebugViewController : UIViewController <UIDocumentPickerDelegate> {
    void /* unknown type, empty encoding */ backgroundLayer;
    void /* unknown type, empty encoding */ stackView;
    void /* unknown type, empty encoding */ topStackView;
    void /* unknown type, empty encoding */ middleStackView;
    void /* unknown type, empty encoding */ bottomStackView;
    void /* unknown type, empty encoding */ autoplayButton;
    void /* unknown type, empty encoding */ nextStateButton;
    void /* unknown type, empty encoding */ prevStateButton;
    void /* unknown type, empty encoding */ disconnectedStateButton;
    void /* unknown type, empty encoding */ connectingStateButton;
    void /* unknown type, empty encoding */ coldStateButton;
    void /* unknown type, empty encoding */ warmStateButton;
    void /* unknown type, empty encoding */ warmerStateButton;
    void /* unknown type, empty encoding */ hotStateButton;
    void /* unknown type, empty encoding */ foundStateButton;
    void /* unknown type, empty encoding */ ringFactorSlider;
    void /* unknown type, empty encoding */ ringOpacitySlider;
    void /* unknown type, empty encoding */ hapticForceSlider;
    void /* unknown type, empty encoding */ dotScaleSlider;
    void /* unknown type, empty encoding */ pulsePeriodSlider;
    void /* unknown type, empty encoding */ saveButton;
    void /* unknown type, empty encoding */ loadButton;
    void /* unknown type, empty encoding */ closeButton;
    void /* unknown type, empty encoding */ hideButton;
    void /* unknown type, empty encoding */ mockSession;
    void /* unknown type, empty encoding */ autoplayTimer;
    void /* unknown type, empty encoding */ findingViewController;
    void /* unknown type, empty encoding */ delegate;
}

- (void)documentPicker:(id)a0 didPickDocumentsAtURLs:(id)a1;
- (void)viewDidLayoutSubviews;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)handleWithButton:(id)a0;
- (void)handleWithSlider:(id)a0;

@end
