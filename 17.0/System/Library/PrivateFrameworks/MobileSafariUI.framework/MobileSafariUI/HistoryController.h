@class NSMapTable;

@interface HistoryController : WBSHistoryController {
    NSMapTable *_frequentlyVisitedSitesBannedURLStores;
    NSMapTable *_frequentlyVisitedSitesControllers;
}

- (id)init;
- (void).cxx_destruct;
- (id)_createHistoryForProfileIdentifier:(id)a0;
- (id)historyForProfileIdentifier:(id)a0 loadIfNeeded:(BOOL)a1;
- (id)frequentlyVisitedSitesBannedURLStoreForProfileIdentifier:(id)a0 loadIfNeeded:(BOOL)a1;
- (id)frequentlyVisitedSitesControllerForProfileIdentifier:(id)a0 loadIfNeeded:(BOOL)a1;

@end
