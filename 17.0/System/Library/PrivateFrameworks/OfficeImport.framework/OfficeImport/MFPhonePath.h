@class OITSUBezierPath;

@interface MFPhonePath : MFPath {
    OITSUBezierPath *m_path;
    int m_state;
}

- (int)abort;
- (int)begin;
- (id)init;
- (struct CGPoint { double x0; double x1; })currentPoint;
- (BOOL)isOpen;
- (int)end;
- (int)state;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)flatten;
- (int)stroke:(id)a0;
- (void)appendBezierPath:(id)a0 dc:(id)a1;
- (int)closeFigure;
- (int)fill:(id)a0;
- (id)getBezierPath;
- (id)initWithPath:(id)a0 state:(int)a1;
- (int)widen:(id)a0;

@end
