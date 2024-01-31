@class CALayer, ICDocCamImageQuadEditOverlay;

@interface ICDocCamImageQuadEditKnobAccessibilityElement : UIAccessibilityElement

@property (weak, nonatomic) CALayer *knobLayer;
@property (weak, nonatomic) ICDocCamImageQuadEditOverlay *overlayView;

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityViewIsModal;
- (id)initWithKnobLayer:(id)a0 overlayView:(id)a1;

@end
