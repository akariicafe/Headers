@class NSString, ACAccount, NSDate;

@interface _ICQMegaBackupUpdateStatusRequest : _ICQMegaBackupNetworkRequest

@property (readonly, nonatomic) ACAccount *account;
@property (readonly, copy, nonatomic) NSString *deviceBackupUUID;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSDate *expirationDate;

+ (id)updateStatusRequestWithAccount:(id)a0 deviceBackupUUID:(id)a1 status:(long long)a2 requestURL:(id)a3 URLSession:(id)a4 queue:(id)a5 error:(id *)a6;

- (void).cxx_destruct;
- (id)additionalRequestHeaders;
- (id)bodyJSON;
- (id)handleResponse:(id)a0 body:(id)a1;
- (void)addAdditionalRequestHeaders:(id)a0;

@end
