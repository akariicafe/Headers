@class NSObject, NSMapTable, NSHashTable;
@protocol OS_dispatch_queue;

@interface FigCaptureSessionObservatory : NSObject {
    NSMapTable *_captureSessionsStorage;
    NSHashTable *_registeredObservers;
    NSObject<OS_dispatch_queue> *_queue;
    long long _lastRunningIdentifier;
}

+ (void)initialize;
+ (id)sharedObservatory;

- (id)init;
- (void)dealloc;
- (void)registerObserver:(id)a0;
- (void)captureSessionWasCreated:(struct OpaqueFigCaptureSession { } *)a0;
- (void)unregisterObserver:(id)a0;

@end
