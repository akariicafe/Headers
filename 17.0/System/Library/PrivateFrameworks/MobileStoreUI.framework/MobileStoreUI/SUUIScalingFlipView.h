@class UIView;

@interface SUUIScalingFlipView : UIView {
    UIView *_backView;
    id /* block */ _completionBlock;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _fromFrame;
    UIView *_frontView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _toFrame;
}

@property (nonatomic) long long direction;
@property (nonatomic) double duration;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void).cxx_destruct;
- (id)_timingFunction;
- (void)performFlipWithCompletionBlock:(id /* block */)a0;
- (id)_backLayerAnimation;
- (id)_frontLayerAnimation;
- (id)_inputColorAnimation;
- (id)_positionAnimation;
- (id)initWithFrontView:(id)a0 backView:(id)a1;

@end
