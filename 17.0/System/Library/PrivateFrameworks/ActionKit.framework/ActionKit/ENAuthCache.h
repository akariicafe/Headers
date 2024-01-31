@class NSMutableDictionary, ENAuthCacheEntry;

@interface ENAuthCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *linkedCache;
@property (retain, nonatomic) ENAuthCacheEntry *businessCache;

- (id)init;
- (void).cxx_destruct;
- (id)authenticationResultForBusiness;
- (id)authenticationResultForLinkedNotebookGuid:(id)a0;
- (void)setAuthenticationResult:(id)a0 forLinkedNotebookGuid:(id)a1;
- (void)setAuthenticationResultForBusiness:(id)a0;

@end
