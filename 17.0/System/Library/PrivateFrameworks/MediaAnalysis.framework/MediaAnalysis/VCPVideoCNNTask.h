@interface VCPVideoCNNTask : NSObject

- (int)run:(id)a0;
- (id)results;
- (int)finishAnalysisPass:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (int)run:(id)a0 withPersons:(id)a1 andRegionCrop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 andDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a4;

@end
