@class UIImageView;

@interface STSetupAssistantPosedDeviceViewController : UIViewController

@property (readonly) BOOL isiPad;
@property (readonly) long long deviceSize;
@property (retain) UIImageView *deviceWithScreenImageView;

- (void)viewDidLoad;
- (BOOL)_isRTL;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_deviceWithScreenImage;
- (id)_setupGenericImage;
- (void)_stSetupAssistantPosedDeviceViewControllerCommonInit;

@end
