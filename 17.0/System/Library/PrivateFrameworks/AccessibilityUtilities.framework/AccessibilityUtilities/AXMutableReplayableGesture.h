@interface AXMutableReplayableGesture : AXReplayableGesture

- (void)addPointsFromReplayableGesture:(id)a0;
- (void)_addPoint:(struct CGPoint { double x0; double x1; })a0 force:(double)a1 forFingerIdentifier:(id)a2 atEventIndex:(unsigned long long)a3;
- (void)_addPoint:(struct CGPoint { double x0; double x1; })a0 force:(double)a1 forFingerIdentifier:(id)a2 atTime:(double)a3;
- (id)_forcesByFingerIdentifierAtEventIndex:(unsigned long long)a0;
- (id)_pointsByFingerIdentifierAtEventIndex:(unsigned long long)a0;
- (void)_removeFingersAtEventIndex:(unsigned long long)a0;
- (void)addPointsByFingerIdentifier:(id)a0 forces:(id)a1 atTime:(double)a2;

@end
