@class UITextView;

@interface WDContactConsolidationLearnMoreViewController : HKViewController

@property (retain, nonatomic) UITextView *textView;
@property (copy, nonatomic) id /* block */ dismissHandler;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)dismissButtonPressed:(id)a0;
- (void)createTextView;
- (void)createDismissButton;

@end
