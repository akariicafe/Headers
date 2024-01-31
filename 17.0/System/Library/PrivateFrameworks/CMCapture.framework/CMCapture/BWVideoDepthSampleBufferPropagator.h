@class NSString;

@interface BWVideoDepthSampleBufferPropagator : BWInferenceSampleBufferPropagator <BWInferencePropagatable>

@property (readonly, nonatomic) BOOL allowsAsyncPropagation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithVideoRequirements:(id)a0 cloneRequirements:(id)a1;

@end
