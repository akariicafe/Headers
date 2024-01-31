@class UITextView, UIBarButtonItem;

@interface _PXConsoleViewController : UIViewController

@property (readonly, nonatomic) UITextView *_textView;
@property (readonly, nonatomic) UIBarButtonItem *_shareBarButtonItem;
@property (nonatomic) BOOL toolBarWasHidden;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_presentSharingViewController:(id)a0;
- (void)appendOutput:(id)a0;

@end
