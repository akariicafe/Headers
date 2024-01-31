@protocol BWJasperDisparityProcessorInputDelegate;

@interface BWJasperDisparityProcessorInput : BWStillImageProcessorControllerInput {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _colorBufferPTS;
    double _colorBufferExposureTime;
}

@property (retain, nonatomic) id<BWJasperDisparityProcessorInputDelegate> delegate;
@property (readonly, nonatomic, getter=isReadyToExecute) BOOL readyToExecute;
@property (readonly, nonatomic) struct opaqueCMSampleBuffer { } *colorBuffer;
@property (readonly, nonatomic) unsigned long long colorBufferType;
@property (nonatomic) BOOL skipProcessing;

- (void)dealloc;
- (id)description;
- (void)setColorBufferPTS:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 exposureTime:(double)a1;
- (void)executeNow;
- (id)initWithSettings:(id)a0 portType:(id)a1;
- (void)setColorBuffer:(struct opaqueCMSampleBuffer { } *)a0 type:(unsigned long long)a1;

@end
