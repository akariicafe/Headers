@protocol _PRUIInlinePosterEditingPlaceholderViewControllerDelegate;

@interface _PRUIInlinePosterEditingPlaceholderViewController : UIViewController

@property (weak, nonatomic) id<_PRUIInlinePosterEditingPlaceholderViewControllerDelegate> delegate;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillMoveToWindow:(id)a0;
- (void).cxx_destruct;
- (void)_dismissRecognizerTapped:(id)a0;
- (void)_updateBackgroundColorForWindow:(id)a0;

@end
