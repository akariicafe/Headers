@class ADDynamicPolynomialsLensDistortionModel, ADCameraCalibration, ADMutableCameraCalibration;

@interface ADFigCameraCalibrationSource : NSObject {
    ADMutableCameraCalibration *_camera;
    float _rawSensorPixelSize;
    ADDynamicPolynomialsLensDistortionModel *_distortion;
}

@property (readonly) ADCameraCalibration *cameraCalibration;

+ (void)getFrameTransformsFromMetadataDictionary:(id)a0 sensorCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 rawSensorSize:(struct CGSize { double x0; double x1; } *)a2 postReadCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;
+ (struct float4x3 { void /* unknown type, empty encoding */ x0[4]; })figExtrinsicsToTransform:(id)a0;
+ (double)getMidExposureTimestampFromMetadataDictionary:(id)a0;
+ (double)getMidExposureTimestampFromMetadataDictionary:(id)a0 timestamp:(double)a1;
+ (struct { void /* unknown type, empty encoding */ x0[4]; })getTransformFromStream:(id)a0 toStream:(id)a1 usingExtrinsicsDictionary:(id)a2;

- (void).cxx_destruct;
- (BOOL)rectFromMetadataField:(id)a0 key:(id)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (BOOL)updateForFrame:(struct __CVBuffer { } *)a0;
- (id)initWithPixelSize:(float)a0 gdcModel:(id)a1 cameraToPlatformTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a2;
- (BOOL)pointFromMetadataField:(id)a0 key:(id)a1 point:(struct CGPoint { double x0; double x1; } *)a2;
- (BOOL)updateForFrameWithDimensions:(struct CGSize { double x0; double x1; })a0 metadataDictionary:(id)a1;

@end
