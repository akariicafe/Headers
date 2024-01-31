@class NSString, NSDictionary, VISRotationCorrectionEstimator;

@interface GVSOverscanPredictor : NSObject {
    void /* unknown type, empty encoding */ _margin;
    void /* unknown type, empty encoding */ _imageSize;
    void /* unknown type, empty encoding */ _imageCenter;
    struct { void /* unknown type, empty encoding */ vector; } _cameraAlignment;
    double _detectionTimeoutSeconds;
    double _resetTimeoutSeconds;
    double _overscanFitsTimestamp;
    double _latestSampleTimestamp;
    NSString *_previousPort;
    VISRotationCorrectionEstimator *_visEstimator;
    NSDictionary *_pixelSizeByPortType;
    struct { BOOL doingBiasEstimation; double timestamp; struct { double w; double x; double y; double z; } quaternion; } _rawQuaternionArray[36];
    void /* unknown type, empty encoding */ _estimatedCorrection;
    void /* unknown type, empty encoding */ _estimatedOverscan;
}

- (void).cxx_destruct;
- (void)resetPrediction;
- (int)computeFocalLength:(float *)a0 fromMetadata:(id)a1;
- (int)estimateOverscanUseFromMetadata:(id)a0 finalCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void /* unknown type, empty encoding */)estimateOverscanUseFromRotation:(SEL)a0 focalLength:(float)a1 cornerCoords:(struct { void /* unknown type, empty encoding */ x0[2]; })a2;
- (id)initWithConfig:(struct VISOverscanPredictorConfiguration { float x0; float x1; })a0 cameraInfoByPortType:(id)a1 visInputPixelBufferAttributes:(id)a2;
- (int)parseCameraInfoByPortType:(id)a0;
- (BOOL)predictOverscanFitsFromMetadata:(id)a0 finalCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 boundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)resetAndClear;
- (void)setCameraAlignmentForPortType:(id)a0;

@end
