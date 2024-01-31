@interface ADRansacLine1DSolver : NSObject {
    struct unique_ptr<DisparityToDepth::Ransac<float, float>, std::default_delete<DisparityToDepth::Ransac<float, float>>> { struct __compressed_pair<DisparityToDepth::Ransac<float, float> *, std::default_delete<DisparityToDepth::Ransac<float, float>>> { void *__value_; } __ptr_; } _solver;
    struct unique_ptr<DisparityToDepth::RansacLineModel, std::default_delete<DisparityToDepth::RansacLineModel>> { struct __compressed_pair<DisparityToDepth::RansacLineModel *, std::default_delete<DisparityToDepth::RansacLineModel>> { struct RansacLineModel *__value_; } __ptr_; } _model1D;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithParameters:(id)a0;
- (id)fitWithX:(float *)a0 y:(float *)a1 count:(unsigned int)a2;

@end
