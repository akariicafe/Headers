@class UIView;
@protocol HUQuickControlAuxiliaryView;

@interface HUQuickControlAuxiliaryHostView : UIView

@property (retain, nonatomic) UIView<HUQuickControlAuxiliaryView> *auxiliaryView;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)updateConstraints;
- (void).cxx_destruct;

@end
