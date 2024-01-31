@interface CoreIDVUI.IDScanViewController : CoreIDVUI.IdentityProofingViewController {
    void /* unknown type, empty encoding */ autoCapturePath;
    void /* unknown type, empty encoding */ interactor;
    void /* unknown type, empty encoding */ docInfo;
    void /* unknown type, empty encoding */ scanSide;
    void /* unknown type, empty encoding */ cameraReader;
    void /* unknown type, empty encoding */ docScanConfig;
    void /* unknown type, empty encoding */ lastSpokenAlertMessage;
    void /* unknown type, empty encoding */ idScanResult;
    void /* unknown type, empty encoding */ eligibilityHelper;
    void /* unknown type, empty encoding */ proofingFlowManager;
    void /* unknown type, empty encoding */ analyticsReporter;
    void /* unknown type, empty encoding */ frameCount;
    void /* unknown type, empty encoding */ frameRate;
}

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithCoder:(id)a0;

@end
