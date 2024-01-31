@protocol FMMapAnnotationGestureRecognizerDelegate;

@interface FMMapAnnotationGestureRecognizer : UIGestureRecognizer

@property (nonatomic) id<FMMapAnnotationGestureRecognizerDelegate> touchDelegate;

- (BOOL)canPreventGestureRecognizer:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)init;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
