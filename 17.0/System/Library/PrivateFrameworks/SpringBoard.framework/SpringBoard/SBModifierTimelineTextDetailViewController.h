@class NSString, NSAttributedString, UITextView;

@interface SBModifierTimelineTextDetailViewController : UIViewController {
    UITextView *_textView;
}

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSAttributedString *attributedText;

- (void)viewWillLayoutSubviews;
- (void)prepareForReuse;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_copyText;

@end
