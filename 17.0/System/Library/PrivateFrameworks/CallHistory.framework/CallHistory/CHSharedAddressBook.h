@class NSMutableDictionary;

@interface CHSharedAddressBook : CHSynchronizedLoggable

@property (retain) NSMutableDictionary *addressBookCache;

+ (id)get;

- (id)init;
- (void)dealloc;
- (void)sendABChangedNotificationSyncWithUserInfo:(id)a0;
- (id)fetchAddressBookInfoFromCacheForKey:(id)a0;
- (void)cleanUpAddressBookCache_sync;
- (unsigned long long)cachedCount;
- (void)registerForContactsNotifications;
- (void)revertAddressBook:(id)a0;
- (void)insertAddressBookInfoIntoCache:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)insertAddressBookInfoDictionaryIntoCache:(id)a0;

@end
