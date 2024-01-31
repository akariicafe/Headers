@class NUVisionDetectionRequest, NSArray;

@interface NUVisionDetectionJob : NURenderJob

@property (readonly, nonatomic) NUVisionDetectionRequest *detectionRequest;
@property (copy, nonatomic) NSArray *observations;

- (id)result;
- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (void)cleanUp;
- (BOOL)render:(out id *)a0;
- (id)scalePolicy;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;
- (id)initWithVisionDetectionRequest:(id)a0;

@end
