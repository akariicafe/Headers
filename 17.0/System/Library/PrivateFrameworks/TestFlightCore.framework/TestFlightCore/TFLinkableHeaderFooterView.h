@class NSString, UITextView;

@interface TFLinkableHeaderFooterView : UITableViewHeaderFooterView

@property (class, readonly, copy, nonatomic) NSString *reuseIdentifier;

@property (readonly, nonatomic) UITextView *textView;
@property (nonatomic) BOOL isHeader;

+ (double)_heightForTextViewWithText:(id)a0 font:(id)a1 isHeader:(BOOL)a2 fittingWidth:(double)a3 inTraitEnvironment:(id)a4;
+ (struct CGSize { double x0; double x1; })itemSizeWithText:(id)a0 isHeader:(BOOL)a1 fittingSize:(struct CGSize { double x0; double x1; })a2 inTraitEnvironment:(id)a3;

- (id)init;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_prepareForDisplayWithTraitCollection:(id)a0;
- (void)_updateTextViewWithLinkMap:(id)a0;
- (void)applyText:(id)a0 withTextLinkMap:(id)a1 isHeader:(BOOL)a2;

@end
