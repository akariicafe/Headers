@class NSSet, NSMutableSet, NSMapTable;

@interface UITouchesEvent : UIEvent {
    NSMutableSet *_allTouchesMutable;
    NSSet *_allTouchesImmutableCached;
    struct __CFDictionary { } *_keyedTouches;
    struct __CFDictionary { } *_keyedTouchesByWindow;
    struct __CFDictionary { } *_gestureRecognizersByWindow;
    NSMapTable *_latentSystemGestureWindows;
    struct __CFDictionary { } *_coalescedTouches;
    struct __CFDictionary { } *_finalTouches;
    BOOL _isCallingEventObservers;
    NSMutableSet *_exclusiveTouchWindows;
    BOOL _containsHIDPointerEvent;
}

@property (readonly, nonatomic) double _initialTouchTimestamp;
@property (nonatomic) long long singleAllowableExternalTouchPathIndex;
@property (readonly, nonatomic, getter=_containsHIDPointerEvent) BOOL containsHIDPointerEvent;

- (id)_gestureRecognizersForWindow:(id)a0;
- (void)dealloc;
- (BOOL)_sendEventToGestureRecognizer:(id)a0;
- (id)_touchesForView:(id)a0 withPhase:(long long)a1;
- (id)allTouches;
- (id)_init;
- (void)_removeTouch:(id)a0;
- (id)_exclusiveTouchWindows;
- (id)_viewsForWindow:(id)a0;
- (id)predictedTouchesForTouch:(id)a0;
- (struct __CFDictionary { } *)_coalescedTouchesForHidEvent:(struct __IOHIDEvent { } *)a0;
- (void)_clearTouches;
- (id)_touchesForGestureRecognizer:(id)a0;
- (void)_addGestureRecognizersForTouchContinuationInGestureOwner:(id)a0 toTouch:(id)a1;
- (BOOL)_shouldSkipEventDeliveryWithIgnoreInteractionEvents:(BOOL)a0;
- (void)_removeTouch:(id)a0 fromGestureRecognizer:(id)a1;
- (void)_addCoalescedTouch:(id)a0 forIndex:(long long)a1 hidEvent:(struct __IOHIDEvent { } *)a2;
- (void)_collectGestureRecognizersForGestureOwner:(id)a0 withBlock:(id /* block */)a1;
- (id)description;
- (id)_initWithEvent:(struct __GSEvent { } *)a0 touches:(id)a1;
- (id)_touchesForWindow:(id)a0;
- (id)_cloneEvent;
- (id)touchesForWindow:(id)a0;
- (void)_clearViewForTouch:(id)a0;
- (double)_initialTouchTimestampForWindow:(id)a0;
- (void)_windowNoLongerAwaitingSystemGestureNotification:(id)a0;
- (void)_gestureRecognizerNoLongerNeedsSendEvent:(id)a0;
- (void).cxx_destruct;
- (void)_moveTouchesFromView:(id)a0 toView:(id)a1;
- (id)_allTouches;
- (void)_addGestureRecognizersForGestureOwner:(id)a0 toTouch:(id)a1;
- (id)_windowsAwaitingLatentSystemGestureNotificationDeliveredToEventWindow:(id)a0;
- (void)_addGestureRecognizersForGestureOwner:(id)a0 toTouch:(id)a1 forContinuation:(BOOL)a2;
- (void)_moveCoalescedTouchesFromHidEvent:(struct __IOHIDEvent { } *)a0 toHidEvent:(struct __IOHIDEvent { } *)a1;
- (id)_lastPendingCoalescedTouchForIndex:(long long)a0 hidEvent:(struct __IOHIDEvent { } *)a1;
- (void)_touchesForGesture:(id)a0 withPhase:(long long)a1 intoSet:(id)a2;
- (void)_invalidateGestureRecognizerForWindowCache;
- (void)_setHIDEvent:(struct __IOHIDEvent { } *)a0;
- (void)_removeTouchesForWindow:(id)a0;
- (id)_windows;
- (unsigned long long)_inputPrecision;
- (id)touchesForView:(id)a0;
- (id)_touchesForGesture:(id)a0 withPhase:(long long)a1;
- (id)touchesForGestureRecognizer:(id)a0;
- (id)_rawCoalescedTouchesForTouch:(id)a0;
- (void)_addWindowAwaitingLatentSystemGestureNotification:(id)a0 deliveredToEventWindow:(id)a1;
- (id)_firstTouchForView:(id)a0;
- (void)_removeTouchesForKey:(id)a0;
- (long long)type;
- (id)_touchesForKey:(id)a0;
- (struct CGPoint { double x0; double x1; })_digitizerLocation;
- (BOOL)_anyInterestedGestureRecognizersForTouchInView:(id)a0;
- (id)coalescedTouchesForTouch:(id)a0;
- (void)_addTouch:(id)a0 forDelayedDelivery:(BOOL)a1;

@end
