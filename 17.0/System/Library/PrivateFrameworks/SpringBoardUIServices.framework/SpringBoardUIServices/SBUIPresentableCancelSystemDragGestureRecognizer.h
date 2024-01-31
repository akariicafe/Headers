@protocol SBUIPresentableCancelSystemDragGestureRecognizerDelegate;

@interface SBUIPresentableCancelSystemDragGestureRecognizer : UIGestureRecognizer

@property (weak, nonatomic) id<SBUIPresentableCancelSystemDragGestureRecognizerDelegate> delegate;

- (BOOL)canPreventGestureRecognizer:(id)a0;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (BOOL)shouldRequireFailureOfGestureRecognizer:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)a0;

@end
