@class FCTagController, FCTagRecordSource, NSString, FCSportsEventRecordSource, NSCache;
@protocol FCNewsAppConfigurationManager, FCContentContext;

@interface FCSportsEventController : NSObject <FCSportsEventsFetchOperationDelegate, FCJSONEncodableObjectProviding>

@property (retain, nonatomic) NSCache *fastCache;
@property (retain, nonatomic) id<FCContentContext> context;
@property (retain, nonatomic) FCSportsEventRecordSource *sportsEventRecordSource;
@property (retain, nonatomic) FCTagRecordSource *tagRecordSource;
@property (retain, nonatomic) FCTagController *tagController;
@property (retain, nonatomic) id<FCNewsAppConfigurationManager> appConfigurationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)jsonEncodableObject;
- (void).cxx_destruct;
- (id)_cachedSportsEventForSportsEventID:(id)a0 fastCacheOnly:(BOOL)a1;
- (id)_cachedSportsEventsForSportsEventID:(id)a0 fastCacheOnly:(BOOL)a1;
- (id)_fetchOperationForSportsEventsWithIDs:(id)a0;
- (void)_fetchSportsEventForSportsEventID:(id)a0 cachePolicy:(id)a1 qualityOfService:(long long)a2 completionHandler:(id /* block */)a3;
- (void)_fetchSportsEventsForSportsEventIDs:(id)a0 cachePolicy:(id)a1 qualityOfService:(long long)a2 completionHandler:(id /* block */)a3;
- (void)_refreshSportsEventsBasedOnAgeForSportsEventIDs:(id)a0;
- (void)_saveSportsEventsToCache:(id)a0;
- (id)fastCachedSportsEventForID:(id)a0;
- (void)fetchSportsEventForSportsEventID:(id)a0 cachePolicy:(id)a1 qualityOfService:(long long)a2 completionHandler:(id /* block */)a3;
- (void)fetchSportsEventsForSportsEventIDs:(id)a0 cachePolicy:(id)a1 qualityOfService:(long long)a2 completionHandler:(id /* block */)a3;
- (id)initWithContentDatabase:(id)a0 context:(id)a1 sportsEventRecordSource:(id)a2 tagController:(id)a3;
- (id)slowCachedSportsEventForID:(id)a0;
- (void)sportsEventsFetchOperation:(id)a0 didFetchSportsEvents:(id)a1;

@end
