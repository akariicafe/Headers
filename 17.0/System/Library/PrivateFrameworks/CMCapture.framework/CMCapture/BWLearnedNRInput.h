@protocol BWLearnedNRInputDelegate;

@interface BWLearnedNRInput : BWStillImageProcessorControllerInput

@property (retain, nonatomic) id<BWLearnedNRInputDelegate> delegate;
@property (readonly, nonatomic) struct opaqueCMSampleBuffer { } *inputFrame;

- (void)dealloc;
- (void)setInputFrame:(struct opaqueCMSampleBuffer { } *)a0;

@end
