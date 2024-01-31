@class PUTileController, PUTilingView, PUTileHider;
@protocol PUInteractiveTileTrackerDelegate;

@interface PUInteractiveTileTracker : NSObject {
    struct { BOOL respondsToWillStartTrackingTileController; BOOL respondsToDidStopTrackingTileController; } _delegateFlags;
}

@property (nonatomic, setter=_setState:) long long _state;
@property (retain, nonatomic, setter=_setTileHider:) PUTileHider *_tileHider;
@property (nonatomic) double progress;
@property (nonatomic) BOOL shouldEnd;
@property (nonatomic) BOOL shouldFinish;
@property (nonatomic) struct PUDisplayVelocity { double x; double y; double scale; double rotation; } currentVelocity;
@property (readonly, nonatomic) PUTileController *trackedTileController;
@property (readonly, nonatomic) PUTilingView *tilingView;
@property (weak, nonatomic) id<PUInteractiveTileTrackerDelegate> delegate;

- (id)init;
- (void)update;
- (void).cxx_destruct;
- (void)updateGestureRecognizerTracking;
- (void)_setTrackedTileController:(id)a0;
- (void)_updateTrackedTileController;
- (void)completeTracking;
- (void)configureTileReattachmentContext:(id)a0;
- (id)initWithTilingView:(id)a0;
- (void)startTileControllerTracking;
- (void)stopTileControllerTracking;
- (id)tileControllerToTrack;
- (void)updateTileControllerTracking;

@end
