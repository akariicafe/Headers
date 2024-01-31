@class NSError;
@protocol _MADVideoRemoveBackgroundPreviewResult;

@interface VKCRemoveBackgroundVideoPreviewResult : NSObject {
    id<_MADVideoRemoveBackgroundPreviewResult> _madResult;
}

@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL successful;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } normalizedCropRect;

- (void).cxx_destruct;
- (id)initWithMADVideoPreviewResult:(id)a0 error:(id)a1;
- (id)subjectMatteAtCompositionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)subjectMatteForImage:(id)a0 atCompositionTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
