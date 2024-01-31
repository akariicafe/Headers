@interface _UIRelationshipGestureRecognizer : UIGestureRecognizer

@property (nonatomic) BOOL succeedsOnTouchesEnded;
@property (nonatomic) BOOL failsOnTouchesCancelled;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)_fail;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (BOOL)_isGestureType:(long long)a0;
- (void)_succeed;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
