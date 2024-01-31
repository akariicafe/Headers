@class NSArray;
@protocol BWRedEyeReductionControllerInputDelegate, BWStillImageProcessorControllerDelegate;

@interface BWRedEyeReductionControllerInput : BWStillImageProcessorControllerInput

@property (retain, nonatomic) id<BWRedEyeReductionControllerInputDelegate> inputDelegate;
@property (retain, nonatomic) id<BWStillImageProcessorControllerDelegate> processorControllerDelegate;
@property (nonatomic) BOOL requiresSensorInterfaceRawPropagation;
@property (readonly, nonatomic) struct opaqueCMSampleBuffer { } *primaryImage;
@property (readonly, nonatomic) struct opaqueCMSampleBuffer { } *auxImage;
@property (readonly, nonatomic) NSArray *faceObservations;

+ (BOOL)requiresInferencesFromFrame:(struct opaqueCMSampleBuffer { } *)a0;

- (void)dealloc;
- (void)addFrame:(struct opaqueCMSampleBuffer { } *)a0 faceObservations:(id)a1;

@end
