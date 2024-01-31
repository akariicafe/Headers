@class NSString, MLE5InputPortBinder, MLFeatureValue, MLPixelBufferPool;

@interface MLE5InputPort : NSObject <MLE5IOPort>

@property (readonly) struct e5rt_io_port { } *portHandle;
@property (retain) MLE5InputPortBinder *binder;
@property (readonly, nonatomic) BOOL boundFeatureDirectly;
@property (retain) MLFeatureValue *featureValue;
@property (readonly) NSString *name;
@property (retain, nonatomic) MLPixelBufferPool *pixelBufferPool;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reset;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)copyFeatureValueToPortAndReturnError:(id *)a0;
- (id)initWithPortHandle:(struct e5rt_io_port { } *)a0 name:(id)a1 featureDescription:(id)a2;
- (BOOL)prepareAndReturnError:(id *)a0;

@end
