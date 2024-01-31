@class UIViewController;
@protocol WFHUShortcutsTriggerViewAccessoryViewControllerDelegate;

@interface WFHUShortcutsTriggerViewAccessoryViewController : UIViewController

@property (readonly, nonatomic) UIViewController *accessoryPickerViewController;
@property (weak, nonatomic) id<WFHUShortcutsTriggerViewAccessoryViewControllerDelegate> delegate;

- (void)viewDidLoad;
- (void)loadView;
- (void).cxx_destruct;
- (void)cancelEditor;
- (void)dismissEditor;
- (id)initWithHome:(id)a0 services:(id)a1;

@end
