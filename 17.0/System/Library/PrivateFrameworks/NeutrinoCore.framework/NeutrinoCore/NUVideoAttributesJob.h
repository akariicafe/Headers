@class NUVideoAttributes;

@interface NUVideoAttributesJob : NURenderJob

@property (retain, nonatomic) NUVideoAttributes *videoAttributes;

- (id)result;
- (void).cxx_destruct;
- (BOOL)prepare:(out id *)a0;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsRenderStage;

@end
