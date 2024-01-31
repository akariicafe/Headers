@interface BWSoftISPProcessorControllerRequest : BWStillImageProcessorControllerRequest

@property (readonly, nonatomic) unsigned long long uniqueID;
@property (retain, nonatomic) struct opaqueCMSampleBuffer { } *outputFrame;

- (void)dealloc;
- (id)description;
- (unsigned long long)outputType;
- (id)initWithInput:(id)a0 delegate:(id)a1;
- (BOOL)readyForProcessing;

@end
