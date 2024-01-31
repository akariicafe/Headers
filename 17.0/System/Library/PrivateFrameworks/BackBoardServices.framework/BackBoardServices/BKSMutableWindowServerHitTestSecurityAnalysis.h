@interface BKSMutableWindowServerHitTestSecurityAnalysis : BKSWindowServerHitTestSecurityAnalysis

@property (nonatomic) struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } cumulativeLayerTransform;
@property (nonatomic) float cumulativeOpacity;
@property (nonatomic) BOOL hasInsecureFilter;
@property (nonatomic) BOOL parentsHaveInsecureLayerProperties;
@property (nonatomic) unsigned int occlusionMask;
@property (nonatomic) float occlusionPercentage;
@property (nonatomic) long long occlusionType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setCumulativeLayerTransform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })a0;
- (void)setCumulativeOpacity:(float)a0;
- (void)setHasInsecureFilter:(BOOL)a0;
- (void)setOcclusionMask:(unsigned int)a0;
- (void)setOcclusionPercentage:(float)a0;
- (void)setOcclusionType:(long long)a0;
- (void)setParentsHaveInsecureLayerProperties:(BOOL)a0;

@end
