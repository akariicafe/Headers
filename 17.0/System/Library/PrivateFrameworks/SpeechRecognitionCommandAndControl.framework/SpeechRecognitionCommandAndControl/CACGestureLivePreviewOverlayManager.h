@class CACGestureLivePreviewViewController;

@interface CACGestureLivePreviewOverlayManager : CACSimpleContentViewManager

@property (retain, nonatomic) CACGestureLivePreviewViewController *gestureViewController;

- (BOOL)isOverlay;
- (void).cxx_destruct;
- (BOOL)isPhysiciallyInteractiveOverlay;
- (void)addPointsToLiveRecordingGesturePreviewByFingerIdentifier:(id)a0 forces:(id)a1 atTime:(double)a2;
- (void)removeTrackingForFingerIdentifier:(id)a0;
- (void)showGestureLivePreviewViewer;

@end
