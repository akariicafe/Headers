@class UIColor, LACUIPackagedView, CAShapeLayer;

@interface LACUILockView : UIView {
    CAShapeLayer *_shackle;
    CAShapeLayer *_body;
    LACUIPackagedView *_packagedView;
}

@property (nonatomic) long long state;
@property (retain, nonatomic) UIColor *color;

- (id)init;
- (void)_setup;
- (void).cxx_destruct;

@end
