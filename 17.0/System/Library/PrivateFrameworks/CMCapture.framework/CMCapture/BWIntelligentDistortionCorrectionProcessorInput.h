@protocol BWIntelligentDistortionCorrectionProcessorInputDelegate;

@interface BWIntelligentDistortionCorrectionProcessorInput : BWStillImageProcessorControllerInput {
    struct opaqueCMSampleBuffer { } *_image;
    BOOL _imageSet;
    unsigned long long _imageBufferType;
}

@property (nonatomic) BOOL receivedAllInputs;
@property (retain, nonatomic) id<BWIntelligentDistortionCorrectionProcessorInputDelegate> delegate;
@property (nonatomic) BOOL processIntelligentDistortionCorrection;
@property (nonatomic) BOOL processGeometricDistortionCorrection;
@property (nonatomic) BOOL applyZoom;
@property (readonly, nonatomic) struct opaqueCMSampleBuffer { } *image;
@property (readonly, nonatomic) unsigned long long imageBufferType;

- (void)dealloc;
- (id)description;
- (void)addImage:(struct opaqueCMSampleBuffer { } *)a0 imageBufferType:(unsigned long long)a1;
- (id)initWithSettings:(id)a0 portType:(id)a1;

@end
