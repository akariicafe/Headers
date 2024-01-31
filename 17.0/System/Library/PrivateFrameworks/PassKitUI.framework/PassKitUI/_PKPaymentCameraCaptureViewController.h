@class NSString, NSArray, PKTableHeaderView, UIView, PKPaymentProvisioningController, PKPaymentSetupDockView;
@protocol PKPaymentCameraCaptureViewControllerDelegate;

@interface _PKPaymentCameraCaptureViewController : CRCameraReader <CRCameraReaderDelegate, PKLoadingUIProviding> {
    NSArray *_outputObjects;
    long long _context;
    UIView *_cameraView;
    PKTableHeaderView *_headerView;
    unsigned long long _cameraCaptureStartTime;
    PKPaymentProvisioningController *_provisioningController;
    PKPaymentSetupDockView *_dockView;
}

@property (nonatomic) BOOL hideSetupLaterButton;
@property (weak, nonatomic) id<PKPaymentCameraCaptureViewControllerDelegate> flowItemDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_manualEntryButtonPressed:(id)a0;
- (void)_setupLater:(id)a0;
- (void)cameraReader:(id)a0 didFailWithError:(id)a1;
- (void)cameraReader:(id)a0 didRecognizeObjects:(id)a1;
- (void)cameraReaderDidCancel:(id)a0;
- (void)cameraReaderDidEnd:(id)a0;
- (id)initWithProvisioningController:(id)a0 context:(long long)a1;
- (void)showLoadingUI:(BOOL)a0 animated:(BOOL)a1;

@end
