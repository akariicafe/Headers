@interface ESAccount : DAAccount

+ (id)esAccountSubclassWithBackingAccountInfo:(id)a0;
+ (id)oneshotListOfAccountIDs;
+ (void)reacquireClientRestrictions:(id)a0;
+ (id)_leafExchangeAccountTypes;

- (void)retrieveOofSettingsForConsumer:(id)a0;
- (void)updateOofSettingsWithParams:(id)a0 consumer:(id)a1;

@end
