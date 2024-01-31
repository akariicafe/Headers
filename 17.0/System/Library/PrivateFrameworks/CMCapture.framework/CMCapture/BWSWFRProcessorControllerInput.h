@interface BWSWFRProcessorControllerInput : BWStillImageProcessorControllerInput

@property (readonly, nonatomic) struct opaqueCMSampleBuffer { } *flashFrame;
@property (readonly, nonatomic) struct opaqueCMSampleBuffer { } *ambientFrame;
@property (readonly, nonatomic) BOOL addFrameFailed;

- (void)dealloc;
- (void)addFrame:(struct opaqueCMSampleBuffer { } *)a0;

@end
