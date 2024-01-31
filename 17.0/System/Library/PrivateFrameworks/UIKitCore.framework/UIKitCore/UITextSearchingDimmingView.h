@class NSArray, CALayer, CAShapeLayer;

@interface UITextSearchingDimmingView : UIView {
    CAShapeLayer *_brighteningLayer;
    CALayer *_dimmingLayer;
    CAShapeLayer *_punchoutLayer;
    BOOL _punchoutPathIsValid;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (retain, nonatomic) NSArray *textRects;

- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updatePunchoutPathForVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_wantsTargetOfKeyboardEventDeferringEnvironment;

@end
