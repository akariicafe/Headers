@interface HealthExperienceUI.ProfileGradientView : UIView {
    void /* unknown type, empty encoding */ delayAnimation;
    void /* unknown type, empty encoding */ lastAnimate;
    void /* unknown type, empty encoding */ angle;
    void /* unknown type, empty encoding */ staticAngle;
    void /* unknown type, empty encoding */ displayLinkAdded;
    void /* unknown type, empty encoding */ displayLink;
}

@property (class, nonatomic, readonly) Class layerClass;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (void)updateGradient;

@end
