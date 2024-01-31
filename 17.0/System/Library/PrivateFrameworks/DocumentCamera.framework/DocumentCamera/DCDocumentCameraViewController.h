@class UIViewController;
@protocol DCDocumentCameraViewControllerDelegate;

@interface DCDocumentCameraViewController : UIViewController

@property (retain, nonatomic, setter=setChildViewController:) UIViewController *childViewController;
@property (weak, nonatomic) id<DCDocumentCameraViewControllerDelegate> docCamDelegate;

+ (BOOL)isAvailable;
+ (id)defaultViewControllerWithDelegate:(id)a0;
+ (id)inProcessViewControllerWithDelegate:(id)a0;
+ (id)viewServiceViewControllerWithDelegate:(id)a0;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDelegate:(id)a0 childViewController:(id)a1;

@end
