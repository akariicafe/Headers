@interface TSDSimpleTileProvider : TSDTileProvider

@property (nonatomic) SEL action;

- (BOOL)canTargetDrawInParallel;
- (void)drawTargetInLayer:(id)a0 context:(struct CGContext { } *)a1;
- (BOOL)isTargetOpaque;

@end
