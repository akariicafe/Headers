@interface MSAccounts : MSMailDefaultService

+ (BOOL)canSendMail;
+ (BOOL)hasActiveAccounts;
+ (id)attachmentCapabilities;
+ (void)accountValuesForKeys:(id)a0 originatingBundleID:(id)a1 sourceAccountManagement:(int)a2 launchMobileMail:(BOOL)a3 completionBlock:(id /* block */)a4;
+ (BOOL)canSendMailSourceAccountManagement:(int)a0;
+ (id)customSignatureForSendingEmailAddress:(id)a0;
+ (void)accountValuesForKeys:(id)a0 completionBlock:(id /* block */)a1;
+ (void)accountValuesForKeys:(id)a0 launchMobileMail:(BOOL)a1 completionBlock:(id /* block */)a2;
+ (BOOL)deleteAccountsWithUniqueIdentifiers:(id)a0 error:(id *)a1;
+ (void)mailboxListingForAccountWithUniqueIdentifier:(id)a0 keys:(id)a1 completionBlock:(id /* block */)a2;
+ (BOOL)setPushStateForMailboxWithPath:(id)a0 account:(id)a1 pushState:(BOOL)a2 error:(id *)a3;

- (void)_listAccountKeys:(id)a0 originatingBundleID:(id)a1 sourceAccountManagement:(int)a2 handler:(id /* block */)a3;
- (void)_simulateServicesMethod:(id)a0 arguments:(id)a1 callback:(id /* block */)a2;

@end
