@class NSSet, NSString, NSTimer, NSCache;

@interface WBReusableTabManager : NSObject <NSCacheDelegate, WBTabGroupManagerObserver> {
    NSCache *_uuidToTabCache;
    BOOL _reusing;
    NSTimer *_cleanupTimer;
    BOOL _pendingCleanup;
}

@property (class, readonly, nonatomic) WBReusableTabManager *sharedManager;

@property (readonly, copy, nonatomic) NSSet *allGroupsTabsUUIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)windowStates;
- (id)tabGroupManager;
- (id)init;
- (void)cache:(id)a0 willEvictObject:(id)a1;
- (void).cxx_destruct;
- (void)_cleanUp;
- (void)tabGroupManager:(id)a0 didRemoveTabGroupWithUUID:(id)a1;
- (void)addReusableTab:(id)a0;
- (BOOL)isTabSuspended:(id)a0;
- (id)_referenceToTabWithUUID:(id)a0;
- (void)enumerateReusableTabs:(id /* block */)a0;
- (id)reuseTabForUUID:(id)a0;
- (void)_addTabUUIDsFromGroup:(id)a0 toSet:(id)a1;
- (void)_scheduleCleanup;

@end
