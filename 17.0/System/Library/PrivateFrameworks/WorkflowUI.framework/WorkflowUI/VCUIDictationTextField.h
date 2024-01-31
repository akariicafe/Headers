@interface VCUIDictationTextField : UITextView

+ (double)bottomPadding;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)didMoveToSuperview;
- (void)startDictation;
- (void)layoutSubviews;
- (void)setAttributedPlaceholder:(id)a0;
- (id)placeholderLabel;
- (void)dictationDidFinish:(id)a0;

@end
