@interface FMFWildcardGestureRecognizer : UIGestureRecognizer

@property (copy, nonatomic) id /* block */ touchesBeganCallback;
@property (copy, nonatomic) id /* block */ touchesEndedCallback;

- (BOOL)canPreventGestureRecognizer:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)init;
- (void)reset;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)ignoreTouch:(id)a0 forEvent:(id)a1;

@end
