@class ADJasperPointCloud;

@interface ADFlowFrameInput : NSObject

@property (readonly, nonatomic) struct __CVBuffer { } *color;
@property (readonly, retain, nonatomic) ADJasperPointCloud *pointCloud;

- (void)dealloc;
- (void)setColor:(struct __CVBuffer { } *)a0;
- (void).cxx_destruct;
- (void)setPointCloud:(id)a0;

@end
