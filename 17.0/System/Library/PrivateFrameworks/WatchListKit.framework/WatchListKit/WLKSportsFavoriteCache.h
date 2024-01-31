@class NSString, NSUserDefaults, NSObject;
@protocol OS_dispatch_queue;

@interface WLKSportsFavoriteCache : NSObject <WLKSportsFavoriteCaching> {
    NSObject<OS_dispatch_queue> *_queue;
    NSUserDefaults *_userDefaults;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUserDefaults:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)getFavoritesWithCompletion:(id /* block */)a0;
- (void)addFavorites:(id)a0 completion:(id /* block */)a1;
- (void)deleteLegacyCacheWithCompletion:(id /* block */)a0;
- (BOOL)hasCache;
- (void)hasFavoritesSyncEnabledKey:(id /* block */)a0;
- (void)isOptedIn:(id /* block */)a0;
- (void)removeFavorites:(id)a0 completion:(id /* block */)a1;
- (void)setCache:(id)a0 overrideLastModifiedDate:(BOOL)a1 completion:(id /* block */)a2;
- (void)setOptInStatus:(BOOL)a0 overrideLastModifiedDate:(BOOL)a1 completion:(id /* block */)a2;

@end
