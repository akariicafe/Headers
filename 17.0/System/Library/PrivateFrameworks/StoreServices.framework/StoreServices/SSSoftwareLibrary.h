@class SSXPCConnection;

@interface SSSoftwareLibrary : NSObject {
    SSXPCConnection *_connection;
}

- (id)init;
- (void).cxx_destruct;
- (void)getLibraryItemsForITunesStoreItemIdentifiers:(id)a0 completionBlock:(id /* block */)a1;
- (void)getRemovableSytemApplicationsWithCompletionBlock:(id /* block */)a0;
- (void)isRemovedSystemApplicationWithBundleIdentifier:(id)a0 completionBlock:(id /* block */)a1;
- (void)_getItemsWithMessage:(id)a0 completionBlock:(id /* block */)a1;
- (void)_sendDemotionMessage:(id)a0 completionBlock:(id /* block */)a1;
- (void)demoteApplicationWithBundleIdentifier:(id)a0 completionBlock:(id /* block */)a1;
- (void)getLibraryItemForBundleIdentifiers:(id)a0 completionBlock:(id /* block */)a1;
- (void)hasDemotedApplicationsWithCompletionBlock:(id /* block */)a0;
- (void)isInstalledApplicationWithBundleIdentifier:(id)a0 completionBlock:(id /* block */)a1;
- (void)playableApplicationsWithBundleIdentifiers:(id)a0 completionBlock:(id /* block */)a1;
- (void)refreshReceiptsWithCompletionBlock:(id /* block */)a0;
- (void)restoreAllDemotedApplicationsWithOptions:(id)a0 completionBlock:(id /* block */)a1;
- (void)restoreDemotedApplicationWithBundleIdentifier:(id)a0 options:(id)a1 completionBlock:(id /* block */)a2;
- (void)restoreRemovedSystemApplicationWithBundleIdentifier:(id)a0 completionBlock:(id /* block */)a1;

@end
