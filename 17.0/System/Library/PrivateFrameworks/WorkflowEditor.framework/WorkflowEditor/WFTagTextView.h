@class NSString;

@interface WFTagTextView : UITextView

@property (copy, nonatomic) NSString *placeholder;

- (void)cut:(id)a0;
- (void)dealloc;
- (void)setAttributedText:(id)a0;
- (void)setTextAlignment:(long long)a0;
- (void)copy:(id)a0;
- (void)setText:(id)a0;
- (void)setFont:(id)a0;
- (void)textDidChange:(id)a0;
- (void)paste:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;
- (void)updateTextAttachments;
- (void)updateTextContainerInsets;

@end
