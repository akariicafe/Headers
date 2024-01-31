@protocol MTLCommandBuffer, MTLBuffer;

@interface SSCHistogramResult : NSObject {
    id<MTLCommandBuffer> _commandBuffer;
    id<MTLBuffer> _histogramBuffer;
    struct { unsigned int bins[256]; } _bins;
    BOOL _realized;
}

- (void).cxx_destruct;
- (id)initForCpuUsage;
- (void)_realize;
- (struct { unsigned int x0[256]; } *)getHistogramBins;
- (id)getHistogramMetalBuffer;
- (id)initWithCommandBuffer:(id)a0 andHistogramBuffer:(id)a1;

@end
