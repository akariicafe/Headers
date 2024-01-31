@class AutoLoopStabilizer;

@interface StabilizeParamGenerator : NSObject

@property (retain, nonatomic) AutoLoopStabilizer *stabilizer;

- (void).cxx_destruct;
- (void)CopyCoordinateShiftedHomographies:(void *)a0 firstIndex:(unsigned long long)a1 lastIndex:(unsigned long long)a2 toStabilizeParams:(id)a3 withImageBounds:(struct CGSize { double x0; double x1; })a4;
- (void)ICGetIdentityHomographies:(void *)a0 toStabilizeParams:(id)a1 withImageBounds:(struct CGSize { double x0; double x1; })a2 firstFrameIndex:(unsigned long long)a3 lastFrameIndex:(unsigned long long)a4;
- (id)generatePassThruForAsset:(id)a0 trimStart:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 trimLength:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (id)generateStabilizeParams;
- (id)generateTrivialPassThruForFrameTimes:(void *)a0 totalDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)initWithStabilizer:(id)a0;

@end
