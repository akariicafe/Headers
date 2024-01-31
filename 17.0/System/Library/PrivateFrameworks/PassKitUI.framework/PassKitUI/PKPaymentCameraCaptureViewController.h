@class UIColor;
@protocol PKPaymentCameraCaptureViewControllerDelegate;

@interface PKPaymentCameraCaptureViewController : UIViewController

@property (nonatomic) BOOL hideSetupLaterButton;
@property (weak, nonatomic) id<PKPaymentCameraCaptureViewControllerDelegate> flowItemDelegate;
@property (copy, nonatomic) UIColor *maskColor;
@property (copy, nonatomic) UIColor *maskOutlineColor;
@property (copy, nonatomic) UIColor *placementTextColor;
@property (copy, nonatomic) UIColor *capturedTextColor;

- (void).cxx_destruct;
- (id)initWithProvisioningController:(id)a0 context:(long long)a1;
- (void)pk_applyAppearance:(id)a0;

@end
