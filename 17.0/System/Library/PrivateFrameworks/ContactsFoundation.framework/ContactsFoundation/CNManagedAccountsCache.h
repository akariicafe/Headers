@class CNCache, ACAccountStore;

@interface CNManagedAccountsCache : NSObject

@property (retain, nonatomic) CNCache *accountsCache;
@property (retain, nonatomic) ACAccountStore *accountStore;

+ (id)sharedCache;

- (id)init;
- (void)clearCache;
- (id)accountsForIdentifiers:(id)a0;
- (void).cxx_destruct;
- (id)accountForIdentifier:(id)a0;

@end
