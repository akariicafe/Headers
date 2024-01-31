@class DCCircularProgressView, UIActivityIndicatorView, NSProgress, UILabel;
@protocol DCProgressViewControllerDelegate;

@interface DCProgressViewController : UIViewController

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) DCCircularProgressView *circularProgressView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) NSProgress *observedProgress;
@property (nonatomic) BOOL showsCancel;
@property (weak, nonatomic) id<DCProgressViewControllerDelegate> progressDelegate;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;

@end
