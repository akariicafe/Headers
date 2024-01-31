@protocol _UIPressGestureRecognizerDelegate;

@interface _UIPressGestureRecognizer : UIGestureRecognizer {
    struct { unsigned char shouldAllowPress : 1; } _delegateRespondsTo;
}

@property (weak, nonatomic) id<_UIPressGestureRecognizerDelegate> delegate;

- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (BOOL)_shouldReceivePress:(id)a0;
- (BOOL)shouldReceiveEvent:(id)a0;
- (void)setDelegate:(id)a0;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;

@end
