@interface ADFlowFrameOutput : NSObject

@property (readonly, nonatomic) struct __CVBuffer { } *depth;
@property (readonly, nonatomic) struct __CVBuffer { } *confidence;

- (void)setConfidence:(struct __CVBuffer { } *)a0;
- (void)dealloc;
- (void)setDepth:(struct __CVBuffer { } *)a0;

@end
