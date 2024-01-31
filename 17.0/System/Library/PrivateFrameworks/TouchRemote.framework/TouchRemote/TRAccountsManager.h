@class GKLocalPlayer, NSString, ACAccountStore, ACAccount, SSAccount;

@interface TRAccountsManager : NSObject

@property (retain, nonatomic) ACAccountStore *iCloudAccountStore;
@property (readonly, copy, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) SSAccount *activeiTunesStoreAccount;
@property (readonly, nonatomic) ACAccount *activeiCloudAccount;
@property (readonly, copy, nonatomic) NSString *homeSharingAppleID;
@property (readonly, copy, nonatomic) NSString *homeSharingGroupID;
@property (readonly, nonatomic) GKLocalPlayer *localGameCenterPlayer;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)accountTypesWithDefaultAccountID:(id)a0;
- (id)defaultAccountIDForAuthenticationAccountType:(unsigned long long)a0;

@end
