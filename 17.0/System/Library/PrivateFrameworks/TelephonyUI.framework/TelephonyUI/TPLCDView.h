@class TPLCDSubImageView, TPLCDTextView, UIView;

@interface TPLCDView : TPLCDBar {
    UIView *_contentView;
    TPLCDTextView *_textView;
    TPLCDTextView *_labelView;
    TPLCDSubImageView *_imageView;
    unsigned char _layoutAsLabelled : 1;
}

@property BOOL verticallyCenterTextViewIfLabelless;

+ (double)defaultLabelFontSize;
+ (double)defaultTextFontSize;

- (id)label;
- (void)setShadowColor:(id)a0;
- (void)setLabel:(id)a0;
- (void)setText:(id)a0;
- (void).cxx_destruct;
- (id)text;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_labelFrame;
- (BOOL)shouldCenterText;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_imageViewFrame;
- (double)_labelVInset;
- (void)_resetContentViewFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_text1Frame;
- (double)_textVInset;
- (void)blinkLabel;
- (void)didFinishAnimatingLCDLabelFadeOut:(id)a0 finished:(id)a1 context:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fullSizedContentViewFrame;
- (id)initWithDefaultSizeForOrientation:(long long)a0;
- (id)secondLineText;
- (void)setContentsAlpha:(double)a0;
- (void)setLabel:(id)a0 animate:(BOOL)a1;
- (void)setLabelFontSize:(double)a0;
- (void)setLayoutAsLabelled:(BOOL)a0;
- (void)setSecondLineText:(id)a0;
- (void)setSubImage:(id)a0;
- (void)setTextFontSize:(double)a0;
- (BOOL)shouldCenterContentView;
- (id)subImage;

@end
