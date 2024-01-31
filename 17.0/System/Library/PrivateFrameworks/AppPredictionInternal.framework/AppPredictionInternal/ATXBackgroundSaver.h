@class _PASLock, ATXSigtermListener, NSObject;
@protocol OS_dispatch_queue;

@interface ATXBackgroundSaver : NSObject <ATXSigtermObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _block;
    _PASLock *_lock;
    ATXSigtermListener *_sigtermListener;
}

- (id)init;
- (void)_saveImmediatelyOnSigterm;
- (void)dealloc;
- (void)scheduleSave;
- (void)_cancelSaveTimer;
- (void)handleSigterm;
- (void).cxx_destruct;
- (void)_cancelSaveTimerWithLockWitness:(id)a0;
- (id)initWithQueue:(id)a0 block:(id /* block */)a1;
- (void)scheduleSaveImmediately;

@end
