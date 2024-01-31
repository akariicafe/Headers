@interface TRAccountManager : NSObject

+ (id)_primaryICloudAccount;
+ (id)_idmsAccountForAccountWithUsername:(id)a0 altDSID:(id)a1 DSID:(id)a2;
+ (id)_idmsAccountForGameCenterService;
+ (id)_idmsAccountForICloudService;
+ (id)_idmsAccountForITunesService;
+ (id)_primaryGameCenterAccount;
+ (id)_primaryITunesAccount;
+ (id)associatedAccountServicesForIDMSAccount:(id)a0;
+ (id)idmsAccountForAccountService:(unsigned long long)a0;

@end
