@class PKPaletteToolPreview, UIView;

@interface PKPalettePencilInteractionFeedbackView : UIView

@property (retain, nonatomic) UIView *clippingView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) PKPaletteToolPreview *toolPreview;

- (id)init;
- (void)_setCornerRadius:(double)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)showPreviewForTool:(id)a0 scalingFactor:(double)a1 animated:(BOOL)a2;

@end
