@class NSDate, NSString, UIView, UIImageView, UIButton, CAShapeLayer, UIImagePickerController, TSCellularPlanQRCodeScannerView, UILabel;
@protocol TSSIMSetupFlowDelegate;

@interface TSCellularPlanScanViewController : SSUIViewController <AVCaptureMetadataOutputObjectsDelegate, NSSecureCoding, UINavigationControllerDelegate, UIImagePickerControllerDelegate, TSSetupFlowItem> {
    BOOL _withBackButton;
    NSDate *_nextTimeToAcceptScan;
    CAShapeLayer *_holeOutlineLayer;
    TSCellularPlanQRCodeScannerView *_scannerView;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) UIButton *btLearnMore;
@property (weak, nonatomic) UIButton *btOpenPhoto;
@property (retain) UIImageView *imageView;
@property (retain) UIImagePickerController *imagePicker;
@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property unsigned long long entryPoint;
@property (readonly) NSString *fauxCardData;
@property (readonly) BOOL confirmationCodeRequired;
@property (readonly) BOOL manualCardInfoEntry;
@property (readonly) BOOL transferViaQRCode;
@property (weak, nonatomic) UIView *scanView;
@property (weak, nonatomic) UIView *cutoutView;
@property (weak, nonatomic) UIButton *enterDetailsManuallyButton;
@property (weak, nonatomic) UILabel *scanQRCodeLabel;
@property (weak, nonatomic) UILabel *positionQRCodeLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (void)didChangeValueForKey:(id)a0;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (BOOL)canBeShownFromSuspendedState;
- (void)captureOutput:(id)a0 didOutputMetadataObjects:(id)a1 fromConnection:(id)a2;
- (void)learnMoreTapped:(id)a0;
- (void)_addNewPlanWithCardData:(id)a0 confirmationCode:(id)a1;
- (id)_decodeQR:(id)a0;
- (void)drawQRBox:(id)a0;
- (void)enterFauxCardDataManually:(id)a0;
- (id)imageWithImage:(id)a0 scaledToFillSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithBackButton:(BOOL)a0;
- (struct CGPoint { double x0; double x1; })makeCGPoint:(id)a0;
- (void)openPhotoTapped:(id)a0;

@end
