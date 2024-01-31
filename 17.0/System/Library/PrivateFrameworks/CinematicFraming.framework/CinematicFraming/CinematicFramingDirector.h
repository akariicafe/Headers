@class CinematicFramingSessionOptions, RectangleAnimator, SceneFramingEngine, CinematicTracker;
@protocol FramingSpaceManager;

@interface CinematicFramingDirector : NSObject {
    id<FramingSpaceManager> _framingSpaceManager;
    CinematicFramingSessionOptions *_options;
    CinematicTracker *_tracker;
    RectangleAnimator *_rectangleAnimator;
    SceneFramingEngine *_sceneFramingEngine;
}

@property (retain, nonatomic) CinematicFramingSessionOptions *options;
@property (nonatomic) int framingStyle;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } currentViewport;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetViewport;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } idealViewport;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } slackViewport;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } deadband;
@property (nonatomic) float zoomLevel;

- (void)reset;
- (void).cxx_destruct;
- (void)updateWithMetadata:(id)a0;
- (void)computeSceneFramingForMetadata:(id)a0;
- (id)initWithFramingSpaceManager:(id)a0;
- (void)resetCameraViewport:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
