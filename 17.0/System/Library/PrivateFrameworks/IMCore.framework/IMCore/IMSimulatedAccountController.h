@class NSMutableDictionary;

@interface IMSimulatedAccountController : IMAccountController {
    NSMutableDictionary *_simulatedAccountsPerService;
}

- (id)init;
- (id)activeAccounts;
- (void).cxx_destruct;
- (id)activeIMessageAccount;
- (id)activeSMSAccount;
- (void)setSimulatedAccounts:(id)a0 forServiceNamed:(id)a1;

@end
