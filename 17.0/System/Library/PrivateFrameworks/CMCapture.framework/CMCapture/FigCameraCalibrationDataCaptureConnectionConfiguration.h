@interface FigCameraCalibrationDataCaptureConnectionConfiguration : FigCaptureConnectionConfiguration

@property (nonatomic) BOOL mirroringEnabled;
@property (nonatomic) int orientation;

- (id)description;
- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
