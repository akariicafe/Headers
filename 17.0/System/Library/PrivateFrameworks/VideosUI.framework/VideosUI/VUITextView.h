@class NSString, NSAttributedString;

@interface VUITextView : UITextView

@property (retain, nonatomic) NSAttributedString *vuiAttributedText;
@property (retain, nonatomic) NSString *vuiText;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } vuiTextContainerInset;
@property (nonatomic) long long vuiTextAlignment;

- (id)_defaultParagraphStyle;
- (void)setVuiBackgroundColor:(id)a0;
- (struct CGSize { double x0; double x1; })vui_sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
