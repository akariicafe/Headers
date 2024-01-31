@class CNContactStore, NSArray, NSDictionary, CNFavorites, NSLock, NSObject;
@protocol OS_dispatch_queue;

@interface NTKPeopleComplicationContactsCache : NSObject {
    NSDictionary *_favoritesMapping;
    NSLock *_favoritesMappingLock;
    NSLock *_favoritesEntriesLock;
    NSLock *_allContactsEntriesLock;
    BOOL _hasSetupNotifications;
    NSLock *_hasSetupNotificationsLock;
    CNContactStore *_contactStore;
    CNFavorites *_favorites;
    NSArray *_nonFavoriteValidAllContacts;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedCache;

- (id)init;
- (void)dealloc;
- (void)_setupNotifications;
- (void)_tearDownNotifications;
- (id)fullNameForContact:(id)a0;
- (void).cxx_destruct;
- (id)_contactKeysToFetchWithThumbnail;
- (id)_contactKeysToFetchWithoutThumbnail;
- (void)_didReceiveContactStoreChangedNotification;
- (void)_didReceiveDeviceLockStateDidChangeNotification;
- (void)_didReceiveFavoritesChangeRelatedNotification;
- (void)_favoritesEntriesChangedExternally;
- (id)_favoritesMappingLocked;
- (id)_fetchContactForId:(id)a0;
- (void)_locked_createFavorites;
- (id)_mappedFavoriteContacts;
- (void)_queue_findContactWithFullName:(id)a0 block:(id /* block */)a1;
- (void)_queue_flushCNFavoritesReload;
- (void)_queue_reloadContacts;
- (void)_queued_flushCNFavorites;
- (void)_queued_loadAllContacts;
- (void)_queued_loadFavoriteContacts;
- (id)abbreviatedNameForContact:(id)a0;
- (BOOL)checkValidityOfContact:(id)a0 block:(id /* block */)a1;
- (id)computeNonFavoriteAllContactsWithCount:(unsigned long long)a0;
- (id)contactForId:(id)a0;
- (BOOL)contactIdentifierIsFavorited:(id)a0;
- (id)favoriteContacts;
- (void)findContactWithFullName:(id)a0 block:(id /* block */)a1;
- (id)firstNonFavoriteAllContact;
- (id)nonFavoriteAllContactsWithCount:(unsigned long long)a0;
- (void)setupNotificationsIfNecessary;
- (id)shortNameForContact:(id)a0;

@end
