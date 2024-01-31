@interface AKNoteAnnotationEventHandler : AKRectangularAnnotationEventHandler

+ (BOOL)allowsDragging;

- (BOOL)continueDraggableAreaEventTrackingLoopWithEvent:(id)a0 orRecognizer:(id)a1;
- (BOOL)enterDraggableAreaEventTrackingLoopWithEvent:(id)a0 orRecognizer:(id)a1;
- (BOOL)handleDownEvent:(id)a0 orRecognizer:(id)a1;

@end
