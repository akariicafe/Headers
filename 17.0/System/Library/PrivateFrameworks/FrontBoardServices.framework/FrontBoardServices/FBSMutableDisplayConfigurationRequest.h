@interface FBSMutableDisplayConfigurationRequest : FBSDisplayConfigurationRequest

@property (nonatomic) long long overscanCompensation;
@property (nonatomic) struct CGSize { double x0; double x1; } nativePixelSize;
@property (nonatomic) double pointScale;
@property (nonatomic) double refreshRate;
@property (nonatomic) long long hdrMode;
@property (nonatomic) struct CGSize { double x0; double x1; } logicalScale;

- (void)setHdrMode:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setRefreshRate:(double)a0;
- (void)setLogicalScale:(struct CGSize { double x0; double x1; })a0;
- (void)setPointScale:(double)a0;
- (void)setNativePixelSize:(struct CGSize { double x0; double x1; })a0;
- (void)setOverscanCompensation:(long long)a0;

@end
