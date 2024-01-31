@class CHDrawing;

@interface CHPointStrokeFIFO : CHPointFIFO

@property (retain, nonatomic) CHDrawing *strokes;
@property (retain, nonatomic) CHDrawing *drawing;

- (void)clear;
- (void)flush;
- (void).cxx_destruct;
- (void)addPoint:(SEL)a0;
- (id)initWithFIFO:(id)a0;

@end
