@interface PIDisparitySampleJob : NURenderJob

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } sampleTime;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sampleRect;
@property (nonatomic) float sampledDisparityValue;

- (id)result;
- (BOOL)render:(out id *)a0;
- (id)scalePolicy;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputVideo;
- (BOOL)wantsRenderStage;

@end
