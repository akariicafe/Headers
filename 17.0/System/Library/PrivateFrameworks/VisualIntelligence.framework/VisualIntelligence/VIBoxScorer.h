@class _TtC18VisualIntelligence19BoxScorerCompatible;

@interface VIBoxScorer : NSObject {
    _TtC18VisualIntelligence19BoxScorerCompatible *_boxScorer;
}

- (void).cxx_destruct;
- (id)initWithGranularity:(long long)a0 xMean:(double)a1 yMean:(double)a2 std:(double)a3;
- (double)scoreWithBoundingBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)scoreWithXTopLeft:(double)a0 yTopLeft:(double)a1 width:(double)a2 height:(double)a3;

@end
