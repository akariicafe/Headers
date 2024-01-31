@class BWSoftISPProcessorControllerInput;

@interface BWSoftISPResult : NSObject

@property (readonly, nonatomic) BWSoftISPProcessorControllerInput *input;
@property (readonly, nonatomic) struct opaqueCMSampleBuffer { } *outputSampleBuffer;
@property (readonly, nonatomic) int error;

- (void)dealloc;
- (id)initWithInput:(id)a0 outputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 error:(int)a2;

@end
