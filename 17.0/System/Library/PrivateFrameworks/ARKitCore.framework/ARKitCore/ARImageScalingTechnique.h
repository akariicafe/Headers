@class NSMutableArray;

@interface ARImageScalingTechnique : ARTechnique {
    NSMutableArray *_scalingPasses;
    struct CGSize { double width; double height; } _scalingInputSize;
    BOOL _shouldUseScaleFactor;
}

@property (readonly, nonatomic) struct CGSize { double width; double height; } scaledSize;
@property (nonatomic) unsigned int conversionPixelFormatType;
@property (readonly, nonatomic) unsigned char downscaleFactor;

+ (id)scalingPassDescriptionForInputSize:(struct CGSize { double x0; double x1; })a0 scaledSize:(struct CGSize { double x0; double x1; })a1 conversionPixelFormat:(unsigned int)a2;

- (id)processData:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (struct __CVBuffer { } *)_applyScalingPasses:(struct __CVBuffer { } *)a0;
- (void)_createScalingPassesForInputSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithDownscaleFactor:(unsigned char)a0;
- (id)initWithScaledSize:(struct CGSize { double x0; double x1; })a0;
- (unsigned long long)requiredSensorDataTypes;

@end
