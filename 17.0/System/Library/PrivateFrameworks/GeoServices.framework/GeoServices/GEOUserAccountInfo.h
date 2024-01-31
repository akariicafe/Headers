@class geo_isolater, ACAccountStore, ACAccount;

@interface GEOUserAccountInfo : NSObject {
    geo_isolater *_isolation;
    ACAccountStore *_accountStore;
    BOOL _hasCheckedPrimaryAccount;
    ACAccount *_primaryICloudAccount;
    BOOL _hasCheckedPrimaryAuthKitAccount;
    ACAccount *_primaryAuthKitAccount;
}

+ (id)sharedInstance;
+ (BOOL)isAccountInfoAvailable;
+ (BOOL)isCurrentICloudAccountManaged;
+ (BOOL)hasValidICloudAccountForAddingRatingsAndPhotos;
+ (BOOL)isCurrentICloudAccountUnderage;
+ (BOOL)isCurrentICloudAccountChinaBased;
+ (id)primaryICloudAccount;

- (id)init;
- (id)_primaryICloudAccountIsolated;
- (void)_accountStoreDidChange:(id)a0;
- (BOOL)isCurrentICloudAccountManaged;
- (BOOL)isCurrentICloudAccountUnderage;
- (void).cxx_destruct;
- (BOOL)isCurrentICloudAccountChinaBased;
- (id)primaryICloudAccount;

@end
