@class NSString, NSArray, GCDeviceCursor, UIWindow, GCControllerButtonInput, NSMutableArray, NSObject, _GCDevicePhysicalInput, GCController;
@protocol OS_dispatch_queue;

@interface GCMouseInput : GCPhysicalInputProfile <_GCDevicePhysicalInputDataSource> {
    GCController *_controller;
    _Atomic BOOL _isActive;
    _Atomic BOOL _wasInitialized;
    long long _buttons;
    NSMutableArray *_auxiliaryButtons;
    UIWindow *_window;
    id /* block */ _mouseMovedHandlerPrivate;
    id /* block */ _mouseButtonPressedPrivate;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _eventBufferLock;
    NSMutableArray *_eventBuffer;
    unsigned long long _eventBufferDepth;
    NSObject<OS_dispatch_queue> *_physicalInputQueue;
    _GCDevicePhysicalInput *_liveInput;
}

@property (copy, nonatomic) id /* block */ mouseMovedHandler;
@property (readonly, nonatomic) GCDeviceCursor *scroll;
@property (readonly, nonatomic) GCControllerButtonInput *leftButton;
@property (readonly, nonatomic) GCControllerButtonInput *rightButton;
@property (readonly, nonatomic) GCControllerButtonInput *middleButton;
@property (readonly, nonatomic) NSArray *auxiliaryButtons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)controller;
- (void)setController:(id)a0;
- (id)initWithController:(id)a0;
- (void).cxx_destruct;
- (id)name;
- (id)handlerQueue;
- (id)productCategory;
- (void)appDidBecomeActive;
- (void)_drainBufferedEvents:(id)a0 latestOnly:(BOOL)a1;
- (void)_handleButtonEventType:(unsigned long long)a0 buttonMask:(unsigned long long)a1;
- (void)_handleDigitizerEvent:(struct CGPoint { double x0; double x1; })a0;
- (void)_handleEventImpl:(struct __IOHIDEvent { } *)a0;
- (BOOL)_handleEventRec:(struct __IOHIDEvent { } *)a0;
- (void)_legacy_handleEvent:(struct __IOHIDEvent { } *)a0;
- (long long)_mouseButtons;
- (void)appWillResignActive;
- (void)handleMouseButtonEventAddingButtonMask:(unsigned long long)a0;
- (void)handleMouseButtonEventRemovingButtonMask:(unsigned long long)a0;
- (void)handleMouseButtonEventSettingButtonMask:(unsigned long long)a0;
- (void)handleMouseMovementEventWithDelta:(struct CGPoint { double x0; double x1; })a0;
- (void)handleScrollEventWithDelta:(struct CGPoint { double x0; double x1; })a0;
- (id /* block */)mouseButtonPressedPrivate;
- (id /* block */)mouseMovedHandlerPrivate;
- (void)physicalInput:(id)a0 setQueue:(id)a1;
- (void)physicalInputPoll:(id)a0 forLatest:(BOOL)a1;
- (id)physicalInputQueue:(id)a0;
- (void)physicalInputTransactionQueueDepthDidChange:(id)a0;
- (id)physicalInputWithAttributes:(id)a0;
- (void)setMouseButtonPressedPrivate:(id /* block */)a0;
- (void)setMouseMovedHandlerPrivate:(id /* block */)a0;
- (BOOL)shouldAcceptMouseEvents;

@end
