@class NSData, NSString;

@interface ADMagnificationForRadiusLensDistortionModel : NSObject <ADLensDistortionModel>

@property (nonatomic) struct CGPoint { double x; double y; } distortionCenter;
@property (retain, nonatomic) NSData *lensDistortionLookupTable;
@property (retain, nonatomic) NSData *inverseLensDistortionLookupTable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)scale:(float)a0;
- (id)initWithDistortionCenter:(struct CGPoint { double x0; double x1; })a0 lensDistortionLookupTable:(id)a1 inverseLensDistortionLookupTable:(id)a2;
- (id)dictionaryRepresentation:(BOOL)a0;
- (void)adjustForImageRotation:(long long)a0 forDimensions:(struct CGSize { double x0; double x1; })a1;
- (void)applyDistortionModelToPixels:(unsigned long long)a0 inPixels:(const struct CGPoint { double x0; double x1; } *)a1 intrinsicsMatrix:(struct { void /* unknown type, empty encoding */ x0[3]; })a2 referenceDimensions:(struct CGSize { double x0; double x1; })a3 magnificationLookupTable:(id)a4 outPixels:(struct CGPoint { double x0; double x1; } *)a5;
- (void)crop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromDimensions:(struct CGSize { double x0; double x1; })a1;
- (void)distortPixels:(unsigned long long)a0 undistortedPixels:(const struct CGPoint { double x0; double x1; } *)a1 withCameraCalibration:(id)a2 outDistortedPixels:(struct CGPoint { double x0; double x1; } *)a3;
- (void)undistortPixels:(unsigned long long)a0 distortedPixels:(const struct CGPoint { double x0; double x1; } *)a1 withCameraCalibration:(id)a2 outUndistortedPixels:(struct CGPoint { double x0; double x1; } *)a3;

@end
