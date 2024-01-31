@class NSString, ACAccount, NSNumber;

@interface _ICQMegaBackupEligibilityRequest : _ICQMegaBackupNetworkRequest

@property (readonly, nonatomic) ACAccount *account;
@property (readonly, copy, nonatomic) NSString *deviceBackupUUID;
@property (readonly, copy, nonatomic) NSNumber *deviceTotalUsedSpaceInBytes;
@property (readonly, nonatomic) long long entryMethod;
@property (readonly, copy, nonatomic) NSString *deepLinkURL;
@property (readonly, nonatomic, getter=isBackupAllowed) BOOL backupAllowed;
@property (readonly, nonatomic) BOOL needsTemporaryStorage;
@property (readonly, nonatomic) NSNumber *daysUntilExpiration;

+ (id)eligibilityRequestWithAccount:(id)a0 deviceBackupUUID:(id)a1 deviceTotalUsedSpaceInBytes:(id)a2 entryMethod:(long long)a3 deepLinkURL:(id)a4 requestURL:(id)a5 URLSession:(id)a6 queue:(id)a7 error:(id *)a8;

- (void).cxx_destruct;
- (id)additionalRequestHeaders;
- (id)bodyJSON;
- (id)handleResponse:(id)a0 body:(id)a1;
- (void)addAdditionalRequestHeaders:(id)a0;

@end
