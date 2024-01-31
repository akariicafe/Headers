@class CAMCaptureGraphConfiguration;

@interface CAMSetVideoZoomFactorCommand : CAMCaptureCommand

@property (readonly, nonatomic) double _videoZoomFactor;
@property (readonly, nonatomic) CAMCaptureGraphConfiguration *_graphConfiguration;

- (id)initWithVideoZoomFactor:(double)a0 graphConfiguration:(id)a1;
- (void).cxx_destruct;
- (void)executeWithContext:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
