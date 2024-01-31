@class NSString, UIImageView, UIActivityIndicatorView, UILabel;

@interface MCActivityViewController : UIViewController

@property (retain, nonatomic) UIActivityIndicatorView *spinnerView;
@property (retain, nonatomic) UIImageView *completionIconImageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UILabel *longWaitingWarningLabel;
@property (nonatomic) BOOL isInProgress;
@property (retain, nonatomic) NSString *inProgresText;
@property (retain, nonatomic) NSString *completionText;
@property (retain, nonatomic) NSString *longWaitingWarningText;
@property (nonatomic) double longWaitingWarningThreshold;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)_scheduleLongWaitingWarning;
- (void)completeActivityAnimated:(BOOL)a0;

@end
