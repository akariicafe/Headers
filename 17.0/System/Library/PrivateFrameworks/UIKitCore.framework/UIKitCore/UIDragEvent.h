@class UIView, NSHashTable, NSSet, UIWindow, _UIDropSessionImpl, _UIInternalDraggingSessionSource, _UIDragEventSample, _UIInternalDraggingSessionDestination, NSMutableSet;

@interface UIDragEvent : UIEvent {
    _UIDragEventSample *_currentSample;
    UIView *_previousEventView;
    UIView *_eventView;
    NSMutableSet *_beginningGestureRecognizers;
    NSMutableSet *_updatingGestureRecognizers;
    NSMutableSet *_exitingGestureRecognizers;
    NSMutableSet *_endingGestureRecognizers;
    NSMutableSet *_ignoredGestureRecognizers;
    NSMutableSet *_dynamicGestureRecognizers;
    NSHashTable *_ownersQueriedForDynamicGestures;
    NSMutableSet *_dynamicInteractions;
    BOOL _ignoreDragEnd;
    BOOL _needsHitTestReset;
    BOOL _dragFailed;
    id /* block */ _dragFailedCallback;
}

@property (readonly, nonatomic, getter=_hitTestedView) UIView *hitTestedView;
@property (readonly, nonatomic, getter=_dynamicGestureRecognizers) NSSet *dynamicGestureRecognizers;
@property (readonly, nonatomic, getter=_sessionDestination) _UIInternalDraggingSessionDestination *sessionDestination;
@property (readonly, nonatomic, getter=_sessionSource) _UIInternalDraggingSessionSource *sessionSource;
@property (readonly, nonatomic, getter=_dropSession) _UIDropSessionImpl *dropSession;
@property (readonly, nonatomic) UIWindow *eventWindow;
@property (readonly, nonatomic) BOOL isPolicyDriven;
@property (readonly, nonatomic) BOOL hasActiveGestureRecognizers;
@property (readonly, nonatomic, getter=_touchRoutingPolicyContextID) unsigned int touchRoutingPolicyContextID;
@property (readonly, nonatomic, getter=_windowServerHitTestContextID) unsigned int windowServerHitTestContextID;
@property (readonly, nonatomic) unsigned int dragSessionID;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } locationInSceneReferenceSpace;
@property (readonly, nonatomic) BOOL isFromAccessibilitySession;

+ (void)_invalidateSessionID:(unsigned int)a0;
+ (BOOL)_isSessionIDValid:(unsigned int)a0;

- (id)_gestureRecognizersForWindow:(id)a0;
- (void)dealloc;
- (BOOL)_sendEventToGestureRecognizer:(id)a0;
- (void)_reset;
- (BOOL)_shouldSkipEventDeliveryWithIgnoreInteractionEvents:(BOOL)a0;
- (void).cxx_destruct;
- (void)_removeGestureRecognizer:(id)a0;
- (BOOL)_shouldSendEvent;
- (void)_setHIDEvent:(struct __IOHIDEvent { } *)a0;
- (void)_wasDeliveredToGestureRecognizers;
- (id)_windows;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (long long)type;
- (id)_updatingDropGestureRecognizers;
- (void)_dragFailedWithCallback:(id /* block */)a0;
- (void)_ignoreDragEnd;
- (void)_ignoreGestureRecognizer:(id)a0;
- (BOOL)_isReadyForReset;
- (BOOL)_isTouchRoutingPolicyBased;
- (void)_removeQueriedOwnerForDynamicGesturesIfNeeded:(id)a0;
- (void)_sendIfNeeded;
- (void)_setNeedsHitTestReset;
- (void)_updateFromCurrentSample;
- (void)_updateGesturesFromCurrentSample;
- (id)initWithDragSessionID:(unsigned int)a0 environment:(id)a1;

@end
