@interface _MKConditionalPanGestureRecognizer : UIPanGestureRecognizer

@property (nonatomic) long long requiredModifierFlags;

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (BOOL)_shouldReceiveEvent:(id)a0;

@end
