@interface ADDisparityToDepthWorldPointsContainer : NSObject {
    struct unique_ptr<DisparityToDepth::WorldPointsContainer, std::default_delete<DisparityToDepth::WorldPointsContainer>> { struct __compressed_pair<DisparityToDepth::WorldPointsContainer *, std::default_delete<DisparityToDepth::WorldPointsContainer>> { struct WorldPointsContainer *__value_; } __ptr_; } _worldPoints;
}

- (unsigned long long)size;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithParameters:(id)a0;
- (struct ADDisparityToDepthFitWorldPoint { float x0; int x1; })getPointFromContainer:(int)a0;
- (void)push:(struct ADDisparityToDepthFitWorldPoint { float x0; int x1; } *)a0 pointCount:(unsigned long long)a1;

@end
