@class UITargetedPreview;

@interface _UIContextMenuActionsOnlyViewController : UIViewController

@property (retain, nonatomic) UITargetedPreview *sourcePreview;

- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (BOOL)_defersToPresentingViewControllerForSupportedInterfaceOrientations;
- (id)initWithTargetedPreview:(id)a0;

@end
