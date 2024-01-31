@class NSString;
@protocol MTLDevice;

@interface MTLToolsCounterSampleBuffer : MTLToolsObject <MTLCounterSampleBuffer>

@property (readonly) id<MTLDevice> device;
@property (readonly) NSString *label;
@property (readonly) unsigned long long sampleCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)resolveCounterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
