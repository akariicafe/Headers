@class UIImageView, UILabel, MTVisualStylingProvider, UITapGestureRecognizer;

@interface WGExplanatoryView : UIView {
    UIImageView *_glyphView;
    UILabel *_label;
    MTVisualStylingProvider *_visualStylingProvider;
    UITapGestureRecognizer *_tapGesture;
}

- (void)willMoveToSuperview:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)addTarget:(id)a0 action:(SEL)a1;
- (void)_updateVisualStylingIfNecessary;
- (void)_invalidateVisualStyling;
- (void)_configureExplanationLabelWithExplanation:(id)a0;
- (void)_configureGlyphViewWithGlyph:(id)a0;
- (id)initWithGlyph:(id)a0 andExplanation:(id)a1;

@end
