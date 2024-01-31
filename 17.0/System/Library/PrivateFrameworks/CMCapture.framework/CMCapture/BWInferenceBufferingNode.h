@class BWInferenceResultRingBuffers;

@interface BWInferenceBufferingNode : BWInferenceNode

@property (readonly, retain, nonatomic) BWInferenceResultRingBuffers *ringBuffers;

- (void)dealloc;
- (BOOL)intermediateResourceTrackingAllowedForAttachedMediaKey:(id)a0;
- (int)addInferenceOfType:(int)a0 version:(struct { unsigned short x0; unsigned short x1; unsigned short x2; })a1 configuration:(id)a2 ringBufferCapacity:(int)a3;
- (id)initWithConvEngineSupportWithCaptureDevice:(id)a0 scheduler:(id)a1 priority:(unsigned int)a2;
- (void)willEmitSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;

@end
