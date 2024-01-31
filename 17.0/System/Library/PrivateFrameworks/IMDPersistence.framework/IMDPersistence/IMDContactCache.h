@class NSCache, NSData;

@interface IMDContactCache : NSObject

@property (retain, nonatomic) NSCache *cache;
@property (retain, nonatomic) NSData *currentHistoryToken;

+ (id)sharedInstance;
+ (id)contactsForVCardAtPath:(id)a0;
+ (void)updateAttributes:(id)a0 withAddressFromContact:(id)a1;
+ (void)vCardCoordinateForMapURL:(id)a0 outLatitude:(float *)a1 outLongitude:(float *)a2;
+ (id)vCardMapURLForContact:(id)a0;
+ (id)vCardNameForContact:(id)a0;

- (id)init;
- (void)resetCache;
- (void)contactStoreDidChange:(id)a0;
- (void).cxx_destruct;
- (id)_handlesMatchingContactIdentifier:(id)a0;
- (void)cacheContact:(id)a0 forKey:(id)a1;
- (void)cacheContactsFromFetchResults:(id)a0 forAliases:(id)a1;
- (id)cachedContactForKey:(id)a0;
- (void)removeCachedContactForKey:(id)a0;
- (void)updateCacheForAliases:(id)a0;

@end
