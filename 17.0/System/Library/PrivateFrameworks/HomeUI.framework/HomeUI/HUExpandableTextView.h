@class UITextView, NSArray, NSString, NSDictionary, NSAttributedString, UIButton;
@protocol HFStringGenerator, HUExpandableTextViewDelegate;

@interface HUExpandableTextView : UIView

@property (retain, nonatomic) UITextView *textView;
@property (nonatomic) BOOL fitsWithinLineLimit;
@property (nonatomic) unsigned long long languageDirection;
@property (retain, nonatomic) NSArray *moreButtonLayoutConstraints;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) NSAttributedString *attributedText;
@property (copy, nonatomic) id<HFStringGenerator> stringGenerator;
@property (copy, nonatomic) NSDictionary *textAttributes;
@property (nonatomic) unsigned long long numberOfLines;
@property (retain, nonatomic) UIButton *moreButton;
@property (nonatomic) BOOL alwaysShowMoreButtonUnlessExpanded;
@property (nonatomic, getter=isExpanded) BOOL expanded;
@property (weak, nonatomic) id<HUExpandableTextViewDelegate> delegate;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)heightForWidth:(double)a0;
- (void)moreButtonTapped:(id)a0;
- (void)_resetMoreButtonLayoutConstraints;
- (void)_updateLanguageDirection;

@end
