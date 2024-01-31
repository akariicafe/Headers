@class NSString, NSPointerArray, NSArray, NSObject, BSServiceConnection;
@protocol OS_dispatch_queue;

@interface SBSSystemApertureLayoutMonitor : NSObject <BSInvalidatable> {
    BSServiceConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSPointerArray *_observers;
    NSArray *_frames;
    BOOL _isValid;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)removeObserver:(id)a0;
- (oneway void)systemApertureLayoutDidChange:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;

@end
