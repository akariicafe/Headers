@class NSMapTable, NSMutableSet;

@interface UIHoverEvent : UIEvent {
    NSMapTable *_touchesByContextId;
    NSMapTable *_deliveryTableByTouch;
    NSMutableSet *_touchesWithOutstandingUpdates;
    double _maximumPositionZ;
    double _hoverAzimuthAngle;
    double _hoverAltitudeAngle;
    double _positionZ;
}

@property (readonly, nonatomic) BOOL hasOutstandingUpdates;
@property (nonatomic, getter=_isPointerLocked, setter=_setPointerLocked:) BOOL _pointerLocked;

- (void)_pointerStateDidChange:(id)a0;
- (void)removeHoverTouchForContextId:(unsigned int)a0 pathIndex:(long long)a1;
- (void)_addHasOutstandingUpdateTouch:(id)a0;
- (id)_gestureRecognizersForWindow:(id)a0;
- (void)dealloc;
- (long long)subtype;
- (BOOL)_sendEventToGestureRecognizer:(id)a0;
- (void)_resetHasOutstandingUpdateTouches;
- (id)allTouches;
- (id)_init;
- (id)_touchesByContextId:(unsigned int)a0 createIfNeeded:(BOOL)a1;
- (void)setNeedsHitTestResetForWindow:(id)a0;
- (void)_setNeedsUpdateForWindow:(id)a0 forcingHitTest:(BOOL)a1;
- (id)hoverTouchForContextId:(unsigned int)a0 pathIndex:(long long)a1;
- (void)_windowDidDetachContext:(id)a0;
- (void)setHoverTouch:(id)a0 forContextId:(unsigned int)a1 pathIndex:(long long)a2;
- (void)_cancelAllGestureRecognizersAndRemoveAllHoverTouches;
- (id)touchesForWindow:(id)a0;
- (void)_gestureRecognizerNoLongerNeedsSendEvent:(id)a0;
- (void).cxx_destruct;
- (void)removeTouch:(id)a0 fromGestureRecognizer:(id)a1;
- (void)setNeedsUpdateForWindow:(id)a0;
- (void)_removeAllHoverTouchesForContextId:(unsigned int)a0;
- (void)_setHIDEvent:(struct __IOHIDEvent { } *)a0;
- (void)_windowDidBecomeHidden:(id)a0;
- (id)_windows;
- (unsigned long long)_inputPrecision;
- (id)touchesForView:(id)a0;
- (void)_cancelAllGestureRecognizers;
- (id)touchesForGestureRecognizer:(id)a0;
- (id)_deliveryTableByTouchCreateIfNeeded:(id)a0;
- (long long)type;
- (void)_completelyRemoveHoverTouchesForWindow:(id)a0 contextIdNumber:(id)a1 withCancellation:(BOOL)a2;

@end
