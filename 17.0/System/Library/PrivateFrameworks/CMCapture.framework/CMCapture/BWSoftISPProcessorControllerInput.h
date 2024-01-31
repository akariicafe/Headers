@interface BWSoftISPProcessorControllerInput : BWStillImageProcessorControllerInput

@property (retain, nonatomic) struct opaqueCMSampleBuffer { } *frame;
@property (readonly, nonatomic) int processingMode;
@property (readonly, nonatomic) BOOL gdcEnabled;

- (void)dealloc;
- (id)description;
- (void)addFrame:(struct opaqueCMSampleBuffer { } *)a0;
- (void)addFrame:(struct opaqueCMSampleBuffer { } *)a0 processingMode:(int)a1;
- (void)addFrame:(struct opaqueCMSampleBuffer { } *)a0 processingMode:(int)a1 transferOwnership:(BOOL)a2;
- (id)initWithSettings:(id)a0 portType:(id)a1;
- (id)initWithSettings:(id)a0 portType:(id)a1 gdcEnabled:(BOOL)a2;

@end
