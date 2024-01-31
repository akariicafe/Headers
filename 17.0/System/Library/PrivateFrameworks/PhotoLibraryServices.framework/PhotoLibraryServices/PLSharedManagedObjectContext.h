@interface PLSharedManagedObjectContext : PLManagedObjectContext {
    id _changeNotificationObserver;
}

- (void)setupLocalChangeNotifications;
- (void)performBlockAndWait:(id /* block */)a0;
- (BOOL)_hasChangesForCloudShared:(id)a0;
- (BOOL)isUserInterfaceContext;
- (void)tearDownLocalChangeNotifications;
- (void)_mergeChangesFromDidSaveDictionary:(id)a0 usingObjectIDs:(BOOL)a1;
- (BOOL)shouldMergeFromRemoteContextWithChanges:(id)a0;
- (void).cxx_destruct;
- (void)performBlock:(id /* block */)a0;

@end
