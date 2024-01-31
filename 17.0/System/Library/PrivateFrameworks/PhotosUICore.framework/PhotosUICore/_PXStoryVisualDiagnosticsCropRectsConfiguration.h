@protocol PXStoryMovieHighlight;

@interface _PXStoryVisualDiagnosticsCropRectsConfiguration : NSObject <PXStoryVisualDiagnosticsCropRectsConfiguration>

@property (nonatomic) struct { struct { struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } t; } sourceContentsRect; struct { struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } t; } targetContentsRect; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } kenBurnsAnimationInfo;
@property (retain, nonatomic) id<PXStoryMovieHighlight> movieHighlight;
@property (nonatomic) struct CGSize { double width; double height; } TVPreviewSize;

- (void).cxx_destruct;

@end
