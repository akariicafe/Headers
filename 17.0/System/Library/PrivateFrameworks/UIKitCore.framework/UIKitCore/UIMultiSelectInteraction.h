@class _UISingleFingerTapExtensionGesture, UIView, _UIMultiSelectOneFingerPanGesture, NSArray, UITapGestureRecognizer, NSString, UIBandSelectionInteraction, UIPanGestureRecognizer, UIKeyCommand;
@protocol UIMultiSelectInteractionDelegate;

@interface UIMultiSelectInteraction : NSObject <UIGestureRecognizerDelegate, _UIMultiSelectOneFingerPanGestureDelegate, _UIScrollViewScrollObserver, UIInteraction> {
    BOOL _isScrollView;
    BOOL _delegateConformsToProtocol;
    UIKeyCommand *_extendToCellAboveCommand;
    UIKeyCommand *_extendToCellBelowCommand;
    UIKeyCommand *_extendToCellRightCommand;
    UIKeyCommand *_extendToCellLeftCommand;
    struct { unsigned char respondsToShouldPreventDragLiftGesture : 1; unsigned char respondsToShouldAllowSelectionExtensionAtPoint : 1; unsigned char respondsToShouldAllowSelectionExtensionAtIndexPath : 1; unsigned char respondsToShouldAllowSelectionAppendageAtPoint : 1; unsigned char respondsToDidCancelMultiSelectInteraction : 1; unsigned char respondsToSelectItemsWithinRect : 1; unsigned char respondsToToggleSelectionWithinRect : 1; unsigned char respondsToShouldStartBandSelectionAtPoint : 1; unsigned char respondsToShouldShowBandForSelectionStartingAtPoint : 1; unsigned char respondsToSupportsKeyboardSelectionExtension : 1; unsigned char respondsToExtendSelectionInDirection : 1; unsigned char respondsToChildScrollViewAtLocation : 1; unsigned char respondsToShouldBeginMultiSelectInteraction : 1; unsigned char respondsToWillBeginMultiSelectInteractionKeepingSelection : 1; } _optionalDelegateFlags;
}

@property (weak, nonatomic) UIView *view;
@property (retain, nonatomic) _UIMultiSelectOneFingerPanGesture *_multiSelectModePan;
@property (retain, nonatomic) UIPanGestureRecognizer *_multiFingerPan;
@property (retain, nonatomic) UITapGestureRecognizer *_multiFingerTap;
@property (retain, nonatomic) _UISingleFingerTapExtensionGesture *_singleFingerExtensionTap;
@property (retain, nonatomic) UIBandSelectionInteraction *bandSelectionInteraction;
@property (weak, nonatomic) id<UIMultiSelectInteractionDelegate> delegate;
@property (nonatomic) double singleTouchPanGestureHysteresis;
@property (readonly, nonatomic) NSArray *gesturesForFailureRequirements;
@property (readonly, nonatomic) long long activeGestureType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_interactionDelegate;
- (BOOL)_isActive;
- (void)_observeScrollViewDidScroll:(id)a0;
- (id)keyCommandsForSelectionExtension;
- (id)init;
- (void)_askDelegateToAutomaticallyTransitionToMultiSelectModeKeepingSelection:(BOOL)a0;
- (void)setSingleTouchPanGestureHysteresis:(double)a0;
- (void)_sendWillBeginInteractionAtPoint:(struct CGPoint { double x0; double x1; })a0 keepingSelection:(BOOL)a1;
- (BOOL)_isCommandKeyBeingHeldWithGesture:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)_endInteractionAtPoint:(struct CGPoint { double x0; double x1; })a0 canceled:(BOOL)a1;
- (void)_didInvokeMultiSelectExtendGestureAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_areSelectionExtensionKeyCommandsEnabled;
- (void)_cancelCommonPan:(id)a0;
- (void)didMoveToView:(id)a0;
- (void)_updateCommonPan:(id)a0;
- (void)_updateDelegateConformance;
- (BOOL)_shouldBeginInteractionWithGestureType:(long long)a0 location:(struct CGPoint { double x0; double x1; })a1 velocity:(struct CGPoint { double x0; double x1; })a2;
- (id)_viewAsScrollView;
- (BOOL)multiSelectOneFingerPanGestureShouldPreventDragInteractionGesture:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (unsigned long long)_currentExtensionTypeForOneFingerTapGesture:(id)a0;
- (void)willMoveToView:(id)a0;
- (void)_endCommonPan:(id)a0;
- (void)_handleKeyboardSelectionExtensionKeyCommand:(id)a0;
- (BOOL)_shouldBeginBandSelectionInteraction:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)_handleCommonPanGestureStateChanged:(id)a0;
- (void)_cancelScrollingInScrollView:(id)a0;
- (double)singleTouchPanGestureHysteresis;
- (void)_cancelScrollingInViewForGesture:(id)a0;
- (BOOL)_isBandSelectionAllowedAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_multiFingerTapGesture:(id)a0;
- (void).cxx_destruct;
- (void)_handleSelectionExtensionTapGesture:(id)a0;
- (void)_beginCommonPan:(id)a0;
- (void)_beginInteractionWithTrigger:(id)a0 point:(struct CGPoint { double x0; double x1; })a1 keepingSelection:(BOOL)a2;
- (void)_endObservingScrollViewOffsetUpdates;
- (BOOL)_isShiftKeyBeingHeldWithGesture:(id)a0;
- (void)_handleBandSelectionInteraction:(id)a0;
- (void)_beginObservingScrollViewOffsetUpdates;
- (BOOL)_triggeredLegacyPathInsteadForGestureRecognizer:(id)a0 velocity:(struct CGPoint { double x0; double x1; })a1 shouldBegin:(out BOOL *)a2;
- (void)_didInvokeMultiSelectAppendGestureAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (long long)_gestureTypeForGestureInstance:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)_attemptToAutomaticallyTransitionToMultiSelectModeIfNecessaryAtPoint:(struct CGPoint { double x0; double x1; })a0 withVelocity:(struct CGPoint { double x0; double x1; })a1;

@end
