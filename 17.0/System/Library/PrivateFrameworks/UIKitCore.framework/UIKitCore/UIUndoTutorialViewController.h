@class UIUndoTutorialView;

@interface UIUndoTutorialViewController : UIViewController

@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) UIUndoTutorialView *tutorialView;

- (void)viewDidLoad;
- (id)initWithCompletionHandler:(id /* block */)a0;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)doneButtonPressed;

@end
