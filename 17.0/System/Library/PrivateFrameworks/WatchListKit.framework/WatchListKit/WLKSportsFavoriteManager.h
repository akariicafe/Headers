@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, WLKSportsFavoriteCaching;

@interface WLKSportsFavoriteManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    int _favoritesCacheSyncNotificationToken;
    int _sportsFavoriteSyncSettingChangedNotificationToken;
    NSXPCConnection *_connection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _xpcLock;
}

@property (retain) id<WLKSportsFavoriteCaching> _cache;

+ (id)defaultManager;
+ (BOOL)isOptOutAvailable;

- (id)_connection;
- (void)dealloc;
- (id)caller;
- (void).cxx_destruct;
- (void)getFavoritesWithCompletion:(id /* block */)a0;
- (id)initWithCache:(id)a0;
- (void)_invalidationHandler;
- (void)_getFavoritesIgnoringCache:(BOOL)a0 overrideLastModifiedDate:(BOOL)a1 completion:(id /* block */)a2;
- (void)_perform:(id)a0 completion:(id /* block */)a1;
- (void)_performAction:(unsigned long long)a0 withIDs:(id)a1 caller:(id)a2 completion:(id /* block */)a3;
- (void)_performUserSettingsAction:(unsigned long long)a0 setFavoritesSyncEnabled:(BOOL)a1 caller:(id)a2 completion:(id /* block */)a3;
- (void)_performUserSettingsOperation:(id)a0 completion:(id /* block */)a1;
- (void)addFavorites:(id)a0 completion:(id /* block */)a1;
- (void)deleteLegacyCache;
- (void)favoritesWithCompletion:(id /* block */)a0;
- (void)getFavoritesIgnoringCache:(BOOL)a0 completion:(id /* block */)a1;
- (void)handleAccountDidChange:(id)a0;
- (void)handleRefreshCacheNotification;
- (void)handleSyncSettingChangedNotification;
- (void)isOnboarded:(id /* block */)a0;
- (void)removeFavorites:(id)a0 completion:(id /* block */)a1;
- (void)setOptInStatus:(BOOL)a0 completion:(id /* block */)a1;
- (void)watchlistd_performAction:(unsigned long long)a0 withIDs:(id)a1 caller:(id)a2 overrideLastModifiedDate:(BOOL)a3 completion:(id /* block */)a4;
- (void)watchlistd_performUserSettingsAction:(unsigned long long)a0 setFavoritesSyncEnabled:(BOOL)a1 caller:(id)a2 overrideLastModifiedDate:(BOOL)a3 completion:(id /* block */)a4;

@end
