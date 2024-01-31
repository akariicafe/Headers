@interface SPDomainManager : NSObject

+ (void)initialize;
+ (id)defaultManager;

- (BOOL)siriSuggestionsEnabled;
- (void)_removeAllDomainsForDisplayIdentifier:(id)a0;
- (void)applicationWasUninstalled:(id)a0;
- (id)getBundleIdForDomainNumber:(id)a0;
- (void)notifyIndexer;
- (void)registerApplication:(id)a0 withCategories:(id)a1;

@end
