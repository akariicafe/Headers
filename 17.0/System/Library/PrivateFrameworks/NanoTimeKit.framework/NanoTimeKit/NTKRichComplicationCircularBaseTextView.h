@class UIView;
@protocol CLKUIColoringView;

@interface NTKRichComplicationCircularBaseTextView : NTKRichComplicationCircularBaseView {
    UIView<CLKUIColoringView> *_label;
    double _labelScale;
}

- (id)init;
- (id)_labelFont;
- (void)setForegroundColor:(id)a0;
- (id)label;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFamily:(long long)a0;
- (id)_createLabelViewWithFont:(id)a0;
- (void)_layoutLabel;
- (void)_setFontConfiguration:(struct CDRichComplicationFontConfiguration { BOOL x0; id x1; double x2; })a0;
- (void)_setLayoutTransformToView:(id)a0 origin:(struct CGPoint { double x0; double x1; })a1 centerScale:(double)a2;
- (void)_transitToHighlightState:(BOOL)a0 fraction:(double)a1;

@end
