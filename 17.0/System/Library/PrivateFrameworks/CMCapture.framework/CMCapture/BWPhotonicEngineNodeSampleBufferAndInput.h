@class BWNodeInput;

@interface BWPhotonicEngineNodeSampleBufferAndInput : NSObject

@property (readonly, nonatomic) struct opaqueCMSampleBuffer { } *sampleBuffer;
@property (readonly, nonatomic) BWNodeInput *nodeInput;

- (void)dealloc;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 nodeInput:(id)a1;

@end
