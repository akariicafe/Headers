@class NSArray, NSString, WBSFrequentlyVisitedSitesBannedURLStore, WBSHistory;

@interface WBSFrequentlyVisitedSitesController : NSObject {
    WBSFrequentlyVisitedSitesBannedURLStore *_bannedURLStore;
    double _timeOfLastFrequentlyVisitedSitesComputation;
    WBSHistory *_history;
}

@property (readonly, nonatomic) NSArray *frequentlyVisitedSites;
@property (readonly, nonatomic) NSString *profileIdentifier;

- (id)_frequentlyVisitedSitesURLStringSet;
- (id)_canonicalizedFavoritesURLStringSet;
- (void)clearFrequentlyVisitedSites;
- (void).cxx_destruct;
- (void)_saveFrequentlyVisitedSites:(id)a0 completionHandler:(id /* block */)a1;
- (void)_postFrequentlyVisitedSitesDidChangeNotification;
- (void)_recomputeFrequentlyVisitedSitesNow;
- (id)initWithHistory:(id)a0 bannedURLStore:(id)a1 profileIdentifier:(id)a2;
- (BOOL)recomputeFrequentlyVisitedSitesIfNecessary;

@end
