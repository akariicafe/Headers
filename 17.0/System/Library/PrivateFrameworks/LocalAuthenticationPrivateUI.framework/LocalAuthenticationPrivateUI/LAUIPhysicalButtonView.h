@class NSString, UILabel, UIView, LAUIPhysicalButtonViewAnimation;
@protocol UICoordinateSpace;

@interface LAUIPhysicalButtonView : UIView {
    id<UICoordinateSpace> _fixedCoordinateSpace;
    id<UICoordinateSpace> _coordinateSpace;
    BOOL _onScreen;
    UIView *_containerView;
    UILabel *_instructionLabel;
    UIView *_buttonView;
    LAUIPhysicalButtonViewAnimation *_animation;
    long long _lastInterfaceOrientation;
}

@property (nonatomic) long long style;
@property (nonatomic) long long animationStyle;
@property (nonatomic, getter=isAnimating) BOOL animating;
@property (readonly, nonatomic) unsigned int edge;
@property (copy, nonatomic) NSString *instruction;

- (id)init;
- (id)initWithStyle:(long long)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)_colorForStyle:(long long)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)updateFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_physicalButtonNormalizedFrame;
- (void)_setOnScreen:(BOOL)a0;
- (void)interfaceOrientationDidChange:(id)a0;

@end
