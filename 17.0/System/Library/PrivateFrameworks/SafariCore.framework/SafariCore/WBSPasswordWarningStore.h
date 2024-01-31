@class NSMutableDictionary, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface WBSPasswordWarningStore : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::default_delete<SafariShared::SuddenTerminationDisabler>> { struct __compressed_pair<SafariShared::SuddenTerminationDisabler *, std::default_delete<SafariShared::SuddenTerminationDisabler>> { struct SuddenTerminationDisabler *__value_; } __ptr_; } _suddenTerminationDisabler;
    BOOL _hasPendingChanges;
    NSURL *_backingStoreURL;
    NSMutableDictionary *_lastWarningDatesByPersistentIdentifier;
}

@property (class, readonly, nonatomic) WBSPasswordWarningStore *sharedStore;

- (id).cxx_construct;
- (id)_initWithBackingStoreURL:(id)a0;
- (void)clearStoreSynchronously;
- (void).cxx_destruct;
- (void)saveStoreSynchronously;
- (void)addPersistentIdentifier:(id)a0;
- (void)getContainsPersistentIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)_addPersistentIdentifier:(id)a0 withLastWarningDate:(id)a1;
- (id)_initWithDefaultBackingStore;
- (void)_loadStoreIfNecessary;
- (void)_saveStoreNow;
- (void)_saveStoreSoon;
- (void)synchronousyClearIdentifiersAddedAfterDate:(id)a0;

@end
