@class NSSet, NSArray;

@interface CAMPhysicalCaptureRecognizer : UIGestureRecognizer

@property (nonatomic) long long pressType;
@property (nonatomic) long long lastActiveButton;
@property (copy, nonatomic) NSSet *activeButtons;
@property (copy, nonatomic) NSArray *desiredButtons;
@property (nonatomic, getter=isSuspended) BOOL suspended;

- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)setEnabled:(BOOL)a0;
- (void)_updateApplicationButtonStatus;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (long long)_captureButtonForPressType:(long long)a0;
- (void).cxx_destruct;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;

@end
