@class SCROConnection, SCRCTargetSelectorTimer, NSLock, NSObject;
@protocol OS_dispatch_queue;

@interface SCROScriptClient : NSObject {
    NSLock *_lock;
    SCROConnection *_connection;
    SCRCTargetSelectorTimer *_timer;
    BOOL _isReady;
}

@property (class, readonly) SCROScriptClient *sharedClient;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_scriptDispatchQueue;

- (id)init;
- (void)dealloc;
- (void)handleCallback:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isReady;
- (id)_lazyConnection;
- (BOOL)_runAsyncWithConnection:(int)a0 object:(id)a1;
- (void)_killConnection;
- (BOOL)runScriptFile:(id)a0;
- (BOOL)runShortcutWithIdentifier:(id)a0;

@end
