@class PUReviewScreenDoneButton;
@protocol CFXStageManagerWarningViewControllerDelegate;

@interface CFXStageManagerWarningViewController : UIViewController

@property (readonly, nonatomic) BOOL isMultitasking;
@property (retain, nonatomic) PUReviewScreenDoneButton *doneButton;
@property (weak, nonatomic) id<CFXStageManagerWarningViewControllerDelegate> delegate;

- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)doneButtonTapped:(id)a0;
- (BOOL)showDoneButton;

@end
