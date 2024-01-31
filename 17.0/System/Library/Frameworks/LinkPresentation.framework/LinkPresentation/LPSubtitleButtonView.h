@class LPCaptionButtonPresentationProperties, LPTextViewStyle, UIButton;

@interface LPSubtitleButtonView : LPComponentView {
    LPCaptionButtonPresentationProperties *_buttonProperties;
    LPTextViewStyle *_style;
    UIButton *_button;
}

- (id)viewForLastBaselineLayout;
- (void)sizeToFit;
- (void).cxx_destruct;
- (id)initWithHost:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)buttonPressed:(id)a0;
- (void)_buildSubviewsIfNeeded;
- (struct CGSize { double x0; double x1; })_layoutButtonForSize:(struct CGSize { double x0; double x1; })a0 applyingLayout:(BOOL)a1;
- (id)initWithHost:(id)a0 buttonProperties:(id)a1 style:(id)a2;
- (void)layoutComponentView;

@end
