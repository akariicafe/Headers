@class NSDictionary, UITextView;

@interface CKMentionsTextContainerOverlayView : UIView

@property (retain, nonatomic) UITextView *textView;
@property (copy, nonatomic) NSDictionary *mentionAnimations;

- (BOOL)isOpaque;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)__drawGlyph:(unsigned short)a0 textPosition:(struct CGPoint { double x0; double x1; })a1 glyphPosition:(struct CGPoint { double x0; double x1; })a2 font:(struct __CTFont { } *)a3 attributes:(id)a4 layoutFragment:(id)a5;
- (void)_drawAnimatedMentionRun:(struct __CTRun { } *)a0 textPosition:(struct CGPoint { double x0; double x1; })a1 rippler:(id)a2 layoutFragment:(id)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textView:(id)a1;
- (void)updateUsingAnimations:(id)a0;

@end
