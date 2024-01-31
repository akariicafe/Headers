@interface BWDeepZoomInferenceConfiguration : BWTiledEspressoInferenceConfiguration

@property (nonatomic) int version;
@property (nonatomic) int type;
@property (nonatomic) int mode;

- (void)dealloc;

@end
