@class IDSAccount;

@interface IMDIDSAccount : IMDAccount

@property (readonly, retain, nonatomic) IDSAccount *idsAccount;

- (void)writeAccountDefaults:(id)a0;
- (BOOL)multiplePhoneNumbersTiedToAccount;
- (id)description;
- (id)initWithAccountID:(id)a0 defaults:(id)a1 service:(id)a2 idsAccount:(id)a3;
- (void).cxx_destruct;
- (BOOL)canMakeDowngradeRoutingChecks;
- (id)accountDefaults;

@end
