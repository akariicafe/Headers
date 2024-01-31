@interface UIKBHandwritingPointFIFO : NSObject

@property (retain, nonatomic) UIKBHandwritingPointFIFO *nextFIFO;

- (void)clear;
- (void)flush;
- (void).cxx_destruct;
- (void)addPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; })a0;
- (void)emitPoint:(struct { struct CGPoint { double x0; double x1; } x0; double x1; })a0;
- (id)initWithFIFO:(id)a0;

@end
