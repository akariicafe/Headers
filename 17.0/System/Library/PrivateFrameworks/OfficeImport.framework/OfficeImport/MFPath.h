@interface MFPath : NSObject <NSCopying>

- (int)abort;
- (int)begin;
- (struct CGPoint { double x0; double x1; })currentPoint;
- (BOOL)isOpen;
- (int)end;
- (int)state;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)flatten;
- (int)stroke:(id)a0;
- (int)closeFigure;
- (int)fill:(id)a0;
- (int)widen:(id)a0;

@end
