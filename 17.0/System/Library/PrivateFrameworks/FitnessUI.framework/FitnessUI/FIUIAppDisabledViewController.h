@class FIUITextView;

@interface FIUIAppDisabledViewController : UIViewController {
    FIUITextView *_textView;
}

- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithAppName:(id)a0 disabledReason:(unsigned long long)a1;

@end
