@interface TSDConnectionLineLayout : TSDConnectionLineAbstractLayout {
    double _startClipT;
    double _endClipT;
}

- (id)quadraticCurve:(struct CGPoint { double x0; double x1; }[3])a0;
- (struct CGPoint { double x0; double x1; })controlPointForPointA:(struct CGPoint { double x0; double x1; })a0 pointB:(struct CGPoint { double x0; double x1; })a1 andOriginalA:(struct CGPoint { double x0; double x1; })a2 originalB:(struct CGPoint { double x0; double x1; })a3;
- (id)createConnectedPathFrom:(id)a0 to:(id)a1 withControlPoints:(struct CGPoint { double x0; double x1; }[3])a2;
- (struct CGPoint { double x0; double x1; })getControlKnobPosition:(unsigned long long)a0;

@end
