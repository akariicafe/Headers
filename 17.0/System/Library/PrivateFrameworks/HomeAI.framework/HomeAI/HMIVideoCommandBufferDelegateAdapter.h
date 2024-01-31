@class NSString;

@interface HMIVideoCommandBufferDelegateAdapter : HMFObject <HMIVideoCommandBufferDelegate>

@property (copy) id /* block */ bufferWillHandleSampleBuffer;
@property (copy) id /* block */ bufferWillFlush;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)buffer:(id)a0 willHandleSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1;
- (void)bufferWillFlush:(id)a0;

@end
