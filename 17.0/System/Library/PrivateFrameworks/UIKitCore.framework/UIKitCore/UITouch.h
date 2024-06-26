@class UIView, NSString, NSArray, BKSHIDEventAuthenticationMessage, UIWindow, UIResponder, BKSWindowServerHitTestSecurityAnalysis, _UITouchAuthenticationRecord, NSMutableArray, _UITouchPredictor, NSNumber;
@protocol _UITouchPhaseChangeDelegate, _UIGestureOwning;

@interface UITouch : NSObject <_UIResponderForwardable, _UIEventComponent> {
    double _movementMagnitudeSquared;
    long long _phase;
    unsigned long long _tapCount;
    unsigned long long _precision;
    unsigned int _touchIdentifier;
    UIWindow *_window;
    UIResponder<_UIGestureOwning> *_responder;
    UIView *_warpedIntoView;
    NSMutableArray *_gestureRecognizers;
    NSMutableArray *_forwardingRecord;
    struct CGPoint { double x; double y; } _locationInWindow;
    struct CGPoint { double x; double y; } _previousLocationInWindow;
    struct CGPoint { double x; double y; } _preciseLocationInWindow;
    struct CGPoint { double x; double y; } _precisePreviousLocationInWindow;
    double _previousPressure;
    double _pathMajorRadius;
    double _majorRadiusTolerance;
    double _maxObservedPressure;
    struct { unsigned char _firstTouchForView : 1; unsigned char _isTap : 1; unsigned char _isDelayed : 1; unsigned char _sentTouchesEnded : 1; unsigned char _abandonForwardingRecord : 1; unsigned char _deliversUpdatesInTouchesMovedIsValid : 1; unsigned char _deliversUpdatesInTouchesMoved : 1; unsigned char _isPredictedTouch : 1; unsigned char _didDispatchAsEnded : 1; unsigned char _isPointerTouch : 1; unsigned char _analyticsUsedByAllowedGesture : 1; unsigned char _isRestingTouch : 1; unsigned char _isTapToClick : 1; } _touchFlags;
    _UITouchPredictor *_touchPredictor;
    BOOL _eaten;
    BOOL _needsForceUpdate;
    BOOL _hasForceUpdate;
    BOOL __expectedToBecomeDrag;
    long long _forceCorrelationToken;
    double _maximumPossiblePressure;
    double _altitudeAngle;
    id<_UITouchPhaseChangeDelegate> __phaseChangeDelegate;
    UIWindow *__windowServerHitTestWindow;
    double _azimuthAngleInCADisplay;
    double _azimuthAngleInWindow;
    BKSHIDEventAuthenticationMessage *__authenticationMessage;
    BKSWindowServerHitTestSecurityAnalysis *__hitTestSecurityAnalysis;
    struct CGSize { double width; double height; } _displacement;
}

@property (nonatomic, setter=_setPathIndex:) long long _pathIndex;
@property (nonatomic, setter=_setPathIdentity:) unsigned char _pathIdentity;
@property (readonly, nonatomic) double _pressure;
@property (nonatomic, setter=_setZGradient:) float _zGradient;
@property (nonatomic, setter=_setEdgeType:) long long _edgeType;
@property (nonatomic, setter=_setEdgeAim:) unsigned long long _edgeAim;
@property (nonatomic, setter=_setType:) long long type;
@property (nonatomic, setter=_setSenderID:) unsigned long long _senderID;
@property (nonatomic, setter=_setHidEvent:) struct __IOHIDEvent { } *_hidEvent;
@property (retain, nonatomic, setter=_setTouchAuthenticationRecord:) _UITouchAuthenticationRecord *_touchAuthenticationRecord;
@property (nonatomic) double initialTouchTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) long long phase;
@property (nonatomic) unsigned long long tapCount;
@property (retain, nonatomic) UIWindow *window;
@property (retain, nonatomic) UIView *view;
@property (nonatomic, setter=_setForceStage:) unsigned char _forceStage;
@property (nonatomic, setter=_setIsPointerTouch:) BOOL _isPointerTouch;
@property (nonatomic, setter=_setIsRestingTouch:) BOOL _isRestingTouch;
@property (nonatomic, setter=_setIsTapToClick:) BOOL _isTapToClick;
@property (readonly, nonatomic) double majorRadius;
@property (readonly, nonatomic) double majorRadiusTolerance;
@property (readonly, copy, nonatomic) NSArray *gestureRecognizers;
@property (readonly, nonatomic) double force;
@property (readonly, nonatomic) double maximumPossibleForce;
@property (readonly, nonatomic) double altitudeAngle;
@property (readonly, nonatomic) NSNumber *estimationUpdateIndex;
@property (readonly, nonatomic) long long estimatedProperties;
@property (readonly, nonatomic) long long estimatedPropertiesExpectingUpdates;
@property (nonatomic, setter=_setForwardablePhase:) long long _forwardablePhase;
@property (retain, nonatomic, setter=_setResponder:) UIResponder<_UIGestureOwning> *_responder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long _eventComponentType;

+ (id)_createTouchesWithGSEvent:(struct __GSEvent { } *)a0 phase:(long long)a1 view:(id)a2;

- (id)_mutableForwardingRecord;
- (void)dealloc;
- (id)_clone;
- (BOOL)isDelayed;
- (id)_forwardingRecord;
- (void)setIsDelayed:(BOOL)a0;
- (SEL)_responderSelectorForPhase:(long long)a0;
- (struct CGPoint { double x0; double x1; })_locationInSceneReferenceSpace;
- (void).cxx_destruct;
- (long long)info;
- (id)_phaseDescription;
- (BOOL)_isAbandoningForwardingRecord;
- (BOOL)_wantsForwardingFromResponder:(id)a0 toNextResponder:(id)a1 withEvent:(id)a2;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (long long)_responderForwardableType;
- (void)_abandonForwardingRecord;
- (void)_clearForReenteringHoverInWindow:(id)a0;
- (void)_clearGestureRecognizers;
- (void)_clonePropertiesToTouch:(id)a0;
- (long long)_compareIndex:(id)a0;
- (BOOL)_edgeForceActive;
- (BOOL)_edgeForcePending;
- (id)_gestureRecognizers;
- (BOOL)_isFirstTouchForView;
- (void)_loadStateFromTouch:(id)a0;
- (float)_pathMajorRadius;
- (struct CGPoint { double x0; double x1; })_previousLocationInSceneReferenceSpace;
- (void)_setIsFirstTouchForView:(BOOL)a0;
- (void)_setLocationInWindow:(struct CGPoint { double x0; double x1; })a0 resetPrevious:(BOOL)a1;
- (void)_setPreviousTouch:(id)a0;
- (unsigned int)_touchIdentifier;
- (double)azimuthAngleInView:(id)a0;
- (struct CGVector { double x0; double x1; })azimuthUnitVectorInView:(id)a0;
- (struct CGPoint { double x0; double x1; })preciseLocationInView:(id)a0;
- (struct CGPoint { double x0; double x1; })precisePreviousLocationInView:(id)a0;
- (struct CGPoint { double x0; double x1; })previousLocationInView:(id)a0;

@end
