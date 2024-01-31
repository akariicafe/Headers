@class PHSwipeDownTracker, PUTileController, PUTileLayoutInfo, UIPanGestureRecognizer;

@interface PUSwipedDownTileTracker : PUInteractiveTileTracker

@property (retain, nonatomic, setter=_setSwipeDownTracker:) PHSwipeDownTracker *_swipeDownTracker;
@property (retain, nonatomic, setter=_setTrackedTileLayoutInfo:) PUTileLayoutInfo *_trackedTileLayoutInfo;
@property (readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (retain, nonatomic) PUTileController *designatedTileController;

- (void).cxx_destruct;
- (void)updateGestureRecognizerTracking;
- (void)completeTracking;
- (id)initWithPanGestureRecognizer:(id)a0 tilingView:(id)a1;
- (id)initWithTilingView:(id)a0;
- (void)startTileControllerTracking;
- (id)tileControllerToTrack;
- (void)updateTileControllerTracking;

@end
