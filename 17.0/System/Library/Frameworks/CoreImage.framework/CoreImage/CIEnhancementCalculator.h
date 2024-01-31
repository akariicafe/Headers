@interface CIEnhancementCalculator : CIEnhancementCalculation

@property BOOL faceBalanceEnabled;
@property BOOL vibranceEnabled;
@property BOOL curvesEnabled;
@property BOOL shadowsEnabled;

- (id)init;
- (void)dealloc;
- (void)analyzeFeatures:(id)a0 usingContext:(id)a1 baseImage:(id)a2;
- (id)histogramFromRows:(id)a0 componentOffset:(unsigned int)a1;
- (id)setupFaceColorFromImage:(id)a0 usingContext:(id)a1 detectorOpts:(id)a2;
- (void)setupFaceColorFromImage:(id)a0 usingContext:(id)a1 features:(id)a2;
- (void)setupHistogramsUsing:(id)a0 redIndex:(int)a1 greenIndex:(int)a2 blueIndex:(int)a3;

@end
