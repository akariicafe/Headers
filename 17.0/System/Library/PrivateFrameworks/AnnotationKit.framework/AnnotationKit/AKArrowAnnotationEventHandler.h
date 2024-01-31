@interface AKArrowAnnotationEventHandler : AKAnnotationEventHandler

- (void)getInitialDraggedPoint:(struct CGPoint { double x0; double x1; } *)a0 otherPoint:(struct CGPoint { double x0; double x1; } *)a1 center:(struct CGPoint { double x0; double x1; } *)a2 forEvent:(id)a3 orRecognizer:(id)a4;
- (struct CGPoint { double x0; double x1; })_updatedMidPointForAnnotation:(id)a0 withNewStartPt:(struct CGPoint { double x0; double x1; })a1 andNewEndPt:(struct CGPoint { double x0; double x1; })a2;
- (void)setupDraggingConstraints;
- (void)updateModelWithCurrentPoint:(struct CGPoint { double x0; double x1; })a0 options:(unsigned long long)a1;

@end
