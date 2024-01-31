@class PKPaymentPass, UILayoutGuide, UIImageView, NSData, UILabel, PKRightAngleRotatingView, UIButton;

@interface PKPaymentBarcodeViewController : UIViewController {
    PKRightAngleRotatingView *_barcodeView;
    UILabel *_disclaimerText;
    UIButton *_closeButton;
    UILayoutGuide *_barcodeGuide;
    UIImageView *_compactBankLogoView;
    PKPaymentPass *_pass;
    struct { double barcodeTopPadding; double disclaimerToBarcodePadding; double disclaimerSidePadding; double bankToDisclaimerPadding; double altTextInset; } _viewSizeInfo;
}

@property (retain, nonatomic) NSData *barcodeData;

- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)invalidate;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)initWithPass:(id)a0;
- (struct { double x0; double x1; double x2; double x3; double x4; })_barcodePadding;
- (struct CGSize { double x0; double x1; })_barcodeSize;
- (void)_closeButtonPressed:(id)a0;

@end
