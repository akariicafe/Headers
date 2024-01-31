@class NSData, NSString;

@interface BRAccount : NSObject {
    NSString *_accountID;
    NSString *_personaID;
}

@property (copy, nonatomic) NSData *perAppAccountIdentifier;

+ (BOOL)refreshCurrentLoggedInAccount;
+ (BOOL)_refreshCurrentLoggedInAccountForcingRefresh:(BOOL)a0 personaID:(id)a1 error:(id *)a2;
+ (void)startAccountTokenChangeObserverIfNeeded;
+ (BOOL)refreshCurrentLoggedInAccountWithError:(id *)a0;
+ (id)currentCachedLoggedInAccountWithError:(id *)a0;
+ (id)currentLoggedInAccountWithError:(id *)a0;

- (id)init;
- (id)containerWithPendingChanges;
- (void)evictOldDocumentsWithHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithAccountID:(id)a0;
- (BOOL)iCloudDesktopSettingsChangedWithAttributes:(id)a0 error:(id *)a1;
- (BOOL)setOptimizeStorageEnabled:(BOOL)a0 error:(id *)a1;
- (BOOL)getEvictableSpace:(id *)a0 error:(id *)a1;
- (BOOL)hasOptimizeStorageWithError:(id *)a0;

@end
