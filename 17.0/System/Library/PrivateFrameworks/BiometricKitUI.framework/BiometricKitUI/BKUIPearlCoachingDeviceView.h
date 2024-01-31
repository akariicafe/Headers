@class UIImageView, UIImage, NSLayoutConstraint, BKUIRotationArrowAnimationLayer;
@protocol UITraitChangeRegistration;

@interface BKUIPearlCoachingDeviceView : UIView

@property (retain, nonatomic) UIImage *deviceImage;
@property (retain, nonatomic) UIImageView *deviceView;
@property (retain, nonatomic) BKUIRotationArrowAnimationLayer *animationLayer;
@property (nonatomic) BOOL animationRunning;
@property (nonatomic) BOOL inSheet;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *widthConstraint;
@property (retain, nonatomic) id<UITraitChangeRegistration> traitChangeRegistration;
@property (readonly, nonatomic) long long orientation;
@property (nonatomic) BOOL isDisplayZoomEnabled;

- (void)setOrientation:(long long)a0;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)layoutSubviews;
- (id)_colorForStroke;
- (id)initWithSheetLayout:(BOOL)a0;
- (void)resetDevice;
- (void)rotateDeviceToAngle:(double)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)setDeviceHidden:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
