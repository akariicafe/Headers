@class NSString;

@interface SBDeckSwitcherPanGestureWorkspaceTransaction : SBFluidSwitcherGestureWorkspaceTransaction <SBHomeGrabberDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_didComplete;
- (BOOL)shouldAllowAutoHideForHomeGrabberView:(id)a0;
- (BOOL)shouldAllowThinStyleForHomeGrabberView:(id)a0;
- (double)additionalEdgeSpacingForHomeGrabberView:(id)a0;
- (void)_begin;
- (long long)_gestureType;
- (void)_removeHysteresisFromTranslation;
- (void)_beginWithGesture:(id)a0;
- (void)_finishWithGesture:(id)a0;
- (id)selectedAppLayoutForGestureRecognizer:(id)a0;
- (id)touchHistoryProvidingGesture;

@end
