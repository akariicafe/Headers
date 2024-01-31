@class NSString, UITextView, EKEvent;
@protocol EKEditItemViewControllerDelegate;

@interface EKEventDetailExtendedTextViewController : UIViewController <EKEditItemViewControllerProtocol> {
    UITextView *_textView;
    NSString *_text;
    NSString *_textToCopy;
    EKEvent *_event;
}

@property (weak, nonatomic) id<EKEditItemViewControllerDelegate> editDelegate;
@property (nonatomic) BOOL presentModally;
@property (nonatomic) BOOL editItemShouldBeAskedForInjectableViewController;
@property (nonatomic) BOOL useCustomBackButton;

- (void)viewSafeAreaInsetsDidChange;
- (void)_updateConstraints;
- (void)_share:(id)a0;
- (void)viewDidLoad;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)updateTextView;
- (id)initWithText:(id)a0 title:(id)a1 event:(id)a2 textForCopyAction:(id)a3;
- (void)loadTextView;

@end
