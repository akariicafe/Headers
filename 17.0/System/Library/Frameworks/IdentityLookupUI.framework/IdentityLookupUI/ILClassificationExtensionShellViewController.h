@class UIViewController, UIBarButtonItem;
@protocol ILClassificationExtensionShellViewControllerDelegate;

@interface ILClassificationExtensionShellViewController : UIViewController

@property (retain, nonatomic) UIViewController *extensionViewController;
@property (retain, nonatomic) UIBarButtonItem *doneButton;
@property (weak, nonatomic) id<ILClassificationExtensionShellViewControllerDelegate> delegate;
@property (nonatomic) BOOL enableFinishOption;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)userDidCancel;
- (void)displayExtensionViewController:(id)a0 forExtension:(id)a1;
- (void)userDidFinish;

@end
