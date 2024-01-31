@class NSUbiquitousKeyValueStore, EFLocked, EFCancelationToken, NSUserDefaults;
@protocol EFAssertableScheduler;

@interface EDSyncableSettings : NSObject {
    EFCancelationToken *_cancelable;
    id<EFAssertableScheduler> _scheduler;
    NSUserDefaults *_defaults;
    NSUbiquitousKeyValueStore *_store;
    EFLocked *_changeActionsByKey;
}

@property (copy, nonatomic) id /* block */ proxyChangeHandler;

- (id)init;
- (void)dealloc;
- (void)_storeChangedExternally:(id)a0;
- (void).cxx_destruct;
- (void)beginSyncing;
- (id)initWithDefaults:(id)a0 store:(id)a1;
- (id)observeChangesForKey:(id)a0 cloudKey:(id)a1 conflictResolver:(id /* block */)a2;

@end
