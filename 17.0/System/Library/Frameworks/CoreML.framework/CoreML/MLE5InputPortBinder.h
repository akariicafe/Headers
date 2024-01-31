@class NSString, MLPixelBufferPool, MLFeatureValue, MLFeatureDescription;

@interface MLE5InputPortBinder : NSObject <MLE5PortBinder> {
    struct __CVBuffer { } *_temporarilyBoundPixelBuffer;
}

@property (readonly) struct e5rt_io_port { } *portHandle;
@property (readonly) MLFeatureDescription *featureDescription;
@property (retain) MLFeatureValue *featureValue;
@property (readonly, nonatomic) BOOL boundFeatureDirectly;
@property (retain, nonatomic) MLPixelBufferPool *pixelBufferPool;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reset;
- (void).cxx_destruct;
- (BOOL)bindMemoryObjectToPort:(id)a0 error:(id *)a1;
- (BOOL)copyFeatureValueToPortAndReturnError:(id *)a0;
- (id)initWithPort:(struct e5rt_io_port { } *)a0 featureDescription:(id)a1;

@end
