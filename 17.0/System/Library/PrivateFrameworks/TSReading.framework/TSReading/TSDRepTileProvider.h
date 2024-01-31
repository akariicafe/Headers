@interface TSDRepTileProvider : TSDTileProvider

- (void)beginDrawingOperation;
- (BOOL)canTargetDrawInParallel;
- (void)drawTargetInLayer:(id)a0 context:(struct CGContext { } *)a1;
- (void)endDrawingOperation;
- (id)initWithRep:(id)a0;
- (BOOL)isTargetOpaque;

@end
