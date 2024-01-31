@class PFParallaxLayoutConfiguration, PFPosterOrientedLayout, PIPosterInactiveFrameLayoutRequest, CIImage;

@interface _PIPosterInactiveFrameLayoutJob : NURenderJob

@property (readonly, nonatomic) PIPosterInactiveFrameLayoutRequest *layoutInactiveFrameRequest;
@property (retain, nonatomic) PFPosterOrientedLayout *layout;
@property (retain, nonatomic) PFParallaxLayoutConfiguration *layoutConfiguration;
@property (retain, nonatomic) CIImage *matteImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } inactiveRect;

- (id)result;
- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (BOOL)render:(out id *)a0;
- (BOOL)complete:(out id *)a0;
- (id)initWithInactiveFrameLayoutRequest:(id)a0;
- (BOOL)prepare:(out id *)a0;
- (id)scalePolicy;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;
- (BOOL)wantsRenderStage;

@end
