@class NSString, _PMSmartPowerNap, NSOperationQueue, DPCManager, NSObject;
@protocol OS_dispatch_queue;

@interface CMSuppressionManagerInternal : NSObject {
    struct CMSuppressionEventStruct { double timestamp; long long type; unsigned long long reason; } fCurrentSuppressionEvent;
    id /* block */ fSuppressionEventHandler;
    NSOperationQueue *fSuppressionEventQueue;
    NSObject<OS_dispatch_queue> *fInputQueue;
    struct CMSuppressionEventStruct { double timestamp; long long type; unsigned long long reason; } fViewObstructedEvent;
    struct Dispatcher { void /* function */ **x0; id x1; } *fSuppressionEventDispatcher;
    struct CMSuppressionEventStruct { double timestamp; long long type; unsigned long long reason; } fSmartPowerNapEvent;
    struct CMSuppressionEventStruct { double timestamp; long long type; unsigned long long reason; } fDevicePresenceEvent;
    _PMSmartPowerNap *fSmartPowerNap;
    DPCManager *fDevicePresence;
    void *fConnection;
    NSObject<OS_dispatch_queue> *fConnectionQueue;
    BOOL fServiceEnabled;
    BOOL fViewObstructedDebugEnabled;
    id /* block */ fViewObstructedStateHandler;
    struct ViewObstructedState { unsigned char fType; struct Suppress { unsigned char fType; BOOL fShouldSuppress; BOOL fAPAwake; unsigned char fCurrentState; unsigned char fOrientation; unsigned char fMotionType; float fLux; float fPocketProbability; } fSuppress; float fMeanProbabilities[8]; } fViewObstructedState;
    struct Dispatcher { void /* function */ **x0; id x1; } *fViewObstructedStateDispatcher;
    unsigned long long fSuppressionSources;
    NSString *fClientID;
}

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void)teardownPrivate;

@end
