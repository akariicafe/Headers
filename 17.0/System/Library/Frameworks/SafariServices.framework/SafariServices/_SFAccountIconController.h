@class WBSAutoFillQuirksManager, NSMutableDictionary, WBSCache, NSMutableSet, _SFSiteMetadataManager, NSMutableArray, NSObject;
@protocol _SFAccountIconControllerDelegate, OS_dispatch_queue;

@interface _SFAccountIconController : NSObject {
    WBSCache *_iconCache;
    NSMutableDictionary *_domainsToExtractedBackgroundColors;
    NSMutableSet *_touchIconRequests;
    NSMutableDictionary *_domainToItems;
    NSMutableSet *_domainsThatHaveRequestedIcon;
    NSMutableArray *_blocksAwaitingHistoryItems;
    NSObject<OS_dispatch_queue> *_queue;
    _SFSiteMetadataManager *_metadataManager;
    NSMutableDictionary *_domainToAppID;
    NSMutableArray *_blocksAwaitingSharedWebCredentialsInformation;
    WBSAutoFillQuirksManager *_autoFillQuirksManager;
    BOOL _initializedHistory;
}

@property (weak, nonatomic) id<_SFAccountIconControllerDelegate> delegate;

+ (struct CGSize { double x0; double x1; })_minimumIconSize;
+ (struct CGSize { double x0; double x1; })_preferredIconSize;
+ (struct CGSize { double x0; double x1; })tableViewIconSize;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_checkForLocalVisitToDomain:(id)a0 withCompletion:(id /* block */)a1;
- (void)_fetchAppIconForDomain:(id)a0;
- (void)_fetchTouchIconForDomain:(id)a0;
- (void)_fetchTouchIconInHistoryForDomain:(id)a0;
- (void)_iconDidUpdateForDomain:(id)a0;
- (void)_populateDomainToAppIDWithCompletion:(id /* block */)a0;
- (void)_populateDomainToItemsWithCompletion:(id /* block */)a0;
- (void)_requestTouchIconForDomain:(id)a0 withOptions:(unsigned long long)a1;
- (id)backgroundColorForDomain:(id)a0;
- (id)cachedIconForDomain:(id)a0 resizedToSize:(struct CGSize { double x0; double x1; })a1;
- (void)clearIconFetchingState;
- (id)iconForDomain:(id)a0;
- (id)initWithMetadataManager:(id)a0;

@end
