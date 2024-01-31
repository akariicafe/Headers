@class ADLogManager;

@interface ADDispartiyToDepthFitEstimator : NSObject {
    struct unique_ptr<DisparityToDepth::DisparityToDepthFitEstimator, std::default_delete<DisparityToDepth::DisparityToDepthFitEstimator>> { struct __compressed_pair<DisparityToDepth::DisparityToDepthFitEstimator *, std::default_delete<DisparityToDepth::DisparityToDepthFitEstimator>> { struct DisparityToDepthFitEstimator *__value_; } __ptr_; } _impl;
    unsigned int _updateWorldPointsCounter;
    unsigned int _estimateWithDisparityCounter;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _x;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _y;
    struct vector<ADDisparityToDepthFitWorldPoint, std::allocator<ADDisparityToDepthFitWorldPoint>> { struct ADDisparityToDepthFitWorldPoint *__begin_; struct ADDisparityToDepthFitWorldPoint *__end_; struct __compressed_pair<ADDisparityToDepthFitWorldPoint *, std::allocator<ADDisparityToDepthFitWorldPoint>> { struct ADDisparityToDepthFitWorldPoint *__value_; } __end_cap_; } _worldPoints;
}

@property (retain, nonatomic) ADLogManager *logger;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithParameters:(id)a0;
- (id)estimateWithDisparity:(struct __CVBuffer { } *)a0 calibration:(id)a1 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a2 disparityTimestamp:(double)a3;
- (id)estimateWithDisparityFile:(id)a0 disparityWidth:(unsigned int)a1 disparityHeight:(unsigned int)a2 calibration:(id)a3 poseArray:(id)a4 disparityTimestamp:(double)a5;
- (id)queryIntermediateResults;
- (void)updateWorldPoints:(struct ADDisparityToDepthFitWorldPoint { float x0; int x1; } *)a0 pointCount:(unsigned int)a1 pointsTimestamp:(double)a2;
- (void)updateWorldPointsArray:(id)a0 pointsTimestamp:(double)a1;

@end
