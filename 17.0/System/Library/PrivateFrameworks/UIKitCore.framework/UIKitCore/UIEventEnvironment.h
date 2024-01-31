@class UIRemoteControlEvent, UIPhysicalKeyboardEvent, NSHashTable, UIApplication, UIMotionEvent, NSMutableDictionary, UIEvent, NSMutableSet, NSMutableArray, UIPressesEvent, UIWheelEvent, NSMapTable;

@interface UIEventEnvironment : NSObject {
    UIEvent *_event;
    UIMotionEvent *_motionEvent;
    UIRemoteControlEvent *_remoteControlEvent;
    NSMutableDictionary *_dragEventsByContextAndSessionIDPair;
    BOOL _isSystemApplication;
    double _commitTimeForTouchEvents;
    double _beginTimeForTouchEvents;
    double _deadlineTimeForTouchEvents;
    NSMutableSet *_windowsWithActiveTouchMaps;
    BOOL _hasSeenAnyPencilEvents;
    UIPressesEvent *_fallbackPressesEvent;
    UIPhysicalKeyboardEvent *_fallbackPhysicalKeyboardEvent;
    UIWheelEvent *_fallbackWheelEvent;
    NSMapTable *_eventRegistryByScene;
    NSHashTable *_invalidatedAndDisconnectedScenes;
    NSMapTable *_pressesMapByScene;
    NSMapTable *_currentNudgePressTypeByScene;
    NSMutableDictionary *_fallbackPressMap;
    NSMapTable *_currentTouchByScene;
    struct __CFDictionary { } *_touchMapsByWindow;
    long long _disableTouchCoalescingCount;
    NSMutableDictionary *_estimatedTouchRecordsByContextIDAndEstimationIndex;
    NSMutableArray *_estimatedTouchRecordsInIncomingOrder;
    unsigned int _pencilBarrelEventFocusWindowContextID;
    unsigned int _fallbackPencilBarrelEventFocusWindowContextID;
}

@property (nonatomic) UIApplication *application;
@property (retain, nonatomic) NSMutableArray *eventQueue;

- (void)sceneDidDisconnect:(id)a0;
- (void)dealloc;
- (void)sceneDidActivate:(id)a0;
- (id)initWithApplication:(id)a0;
- (void).cxx_destruct;
- (void)pointerLockStateDidChange:(id)a0;
- (void)_enqueueHIDEvent:(struct __IOHIDEvent { } *)a0;

@end
