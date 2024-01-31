@class NSArray, CinematicFramingRenderer, CinematicFramingDirector, NSObject, CinematicFramingSessionOptions;
@protocol OS_dispatch_queue;

@interface CinematicFramingSession : NSObject {
    NSObject<OS_dispatch_queue> *_dataOutputDelegateQueue;
    CinematicFramingSessionOptions *_options;
    CinematicFramingRenderer *_renderer;
    CinematicFramingDirector *_director;
    struct { int width; int height; } _outputDimensions;
    unsigned int _roiHeatMap[64];
    BOOL _calibrationDataRegistered;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _outputFramingRectOfInterest;
}

@property (readonly, nonatomic) CinematicFramingSessionOptions *options;
@property (nonatomic) BOOL cameraOrientationCorrectionEnabled;
@property (readonly, nonatomic) NSArray *roiHeatMapCounts;
@property (nonatomic) int framingStyle;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } currentViewport;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } displayViewport;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } targetViewport;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } idealViewport;
@property (nonatomic) float fovLimit;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } outputFramingRectOfInterest;
@property (nonatomic) float zoomLevel;
@property (nonatomic) int cameraOrientation;

- (id)init;
- (void)reset;
- (void).cxx_destruct;
- (id)initWithOutputDimensions:(struct { int x0; int x1; })a0 portType:(id)a1 deviceModelName:(id)a2;
- (void)_updateROIHeatMapCountersWithCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithOutputDimensions:(struct { int x0; int x1; })a0;
- (id)initWithOutputDimensions:(struct { int x0; int x1; })a0 mode:(int)a1 portType:(id)a2 deviceModelName:(id)a3;
- (int)processPixelBuffer:(struct __CVBuffer { } *)a0 outputPixelBuffer:(struct __CVBuffer { } *)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })processWithMetadata:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })warpBoundingBoxInFrameCoordinatesToDisplayCoordinates:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
