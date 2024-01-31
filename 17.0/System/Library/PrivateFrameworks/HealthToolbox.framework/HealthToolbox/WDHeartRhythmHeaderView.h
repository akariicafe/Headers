@class UITextView, NSString, NSURL, UILabel, NSAttributedString, NSLayoutConstraint;

@interface WDHeartRhythmHeaderView : UITableViewHeaderFooterView <UITextViewDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UITextView *bodyTextView;
@property (copy, nonatomic) NSString *bodyText;
@property (copy, nonatomic) NSString *bodyURLText;
@property (copy, nonatomic) NSURL *bodyURL;
@property (readonly, nonatomic) NSAttributedString *bodyTextAttributedString;
@property (readonly, nonatomic) NSAttributedString *bodyURLAttributedString;
@property (retain, nonatomic) NSLayoutConstraint *titleFirstBaselineToTopMarginConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bodyFirstBaslineToTitleLastBaslineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bottomMarginToBodyLastBaselineConstraint;
@property (copy, nonatomic) NSString *titleText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultReuseIdentifier;

- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)updateConstraintConstants;
- (void)setUpUI;
- (void)setBodyText:(id)a0 URLText:(id)a1 URL:(id)a2;
- (void)updateBodyTextView;

@end
