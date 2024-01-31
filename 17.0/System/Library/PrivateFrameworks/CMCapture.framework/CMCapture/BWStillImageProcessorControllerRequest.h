@class BWStillImageProcessorControllerInput;
@protocol BWStillImageProcessorControllerDelegate;

@interface BWStillImageProcessorControllerRequest : NSObject

@property (nonatomic) int err;
@property (readonly, nonatomic) BWStillImageProcessorControllerInput *input;
@property (readonly, nonatomic) id<BWStillImageProcessorControllerDelegate> delegate;

- (void)dealloc;
- (id)description;
- (unsigned long long)outputType;
- (id)initWithInput:(id)a0 delegate:(id)a1;
- (struct opaqueCMSampleBuffer { } *)outputFrame;
- (BOOL)readyForProcessing;

@end
