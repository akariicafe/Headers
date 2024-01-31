@class NSMapTable;
@protocol PKTextInputTouchDetectionGestureRecognizerDelegate;

@interface PKTextInputTouchDetectionGestureRecognizer : UIGestureRecognizer

@property (retain, nonatomic) NSMapTable *_touches;
@property (weak, nonatomic) id<PKTextInputTouchDetectionGestureRecognizerDelegate> delegate;

- (BOOL)canPreventGestureRecognizer:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)init;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void)reset;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (BOOL)shouldRequireFailureOfGestureRecognizer:(id)a0;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)a0;
- (void)recognizeTouch;
- (void)recognizeTouch:(id)a0 afterThreshold:(double)a1;

@end
