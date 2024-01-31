@interface AKSpeechBubbleAnnotationEventHandler : AKThoughtBubbleAnnotationEventHandler

- (void)getInitialDraggedPoint:(struct CGPoint { double x0; double x1; } *)a0 otherPoint:(struct CGPoint { double x0; double x1; } *)a1 center:(struct CGPoint { double x0; double x1; } *)a2 forEvent:(id)a3 orRecognizer:(id)a4;
- (void)updateModelWithCurrentPoint:(struct CGPoint { double x0; double x1; })a0 options:(unsigned long long)a1;

@end
