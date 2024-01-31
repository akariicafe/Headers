@class TLKMultilineText;

@interface TLKTextView : UITextView

@property (nonatomic) unsigned long long prominence;
@property (retain, nonatomic) TLKMultilineText *multilineText;
@property (nonatomic) BOOL automaticUrlification;

- (void)tlk_updateForAppearance:(id)a0;
- (id)init;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)loadInlineImages;
- (void)setText:(id)a0;
- (BOOL)allowsVibrancy;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (double)effectiveBaselineOffsetFromBottom;
- (double)effectiveFirstBaselineOffsetFromTop;
- (void)updateAttributedString;
- (void)urlify;

@end
