@interface AKInkAnnotationEventHandler : AKRectangularAnnotationEventHandler

+ (BOOL)allowsDraggingOfAnnotation:(id)a0;

- (BOOL)alwaysLockAspectRatio;
- (BOOL)enterDraggableAreaEventTrackingLoopWithEvent:(id)a0 orRecognizer:(id)a1;
- (BOOL)handleDownEvent:(id)a0 orRecognizer:(id)a1;
- (struct CGSize { double x0; double x1; })naturalSizeForAnnotation;

@end
