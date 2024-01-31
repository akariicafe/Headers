@class UITextView, NSAttributedString;

@interface SKUIPinnedFooterView : UITableViewHeaderFooterView

@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) double horizontalPadding;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_configureTextViewTextStyling;
- (void)_initializeTextView;

@end
