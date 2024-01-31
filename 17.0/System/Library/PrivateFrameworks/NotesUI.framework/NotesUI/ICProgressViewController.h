@class UIActivityIndicatorView, NSProgress, UILabel, ICCircularProgressView;
@protocol ICProgressViewControllerDelegate;

@interface ICProgressViewController : UIViewController

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) ICCircularProgressView *circularProgressView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) NSProgress *observedProgress;
@property (nonatomic) BOOL showsCancel;
@property (weak, nonatomic) id<ICProgressViewControllerDelegate> progressDelegate;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;

@end
