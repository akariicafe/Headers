@class CDPContext, NSString, CDPDAccount;

@interface CDPDDefaultKeychainSyncPolicyProvider : NSObject <CDPDKeychainSyncPolicyProvider, CDPInitUnavailable>

@property (readonly, nonatomic) CDPDAccount *account;
@property (readonly, nonatomic) CDPContext *context;
@property (readonly, nonatomic) BOOL keychainSyncAllowedByMDM;
@property (readonly, nonatomic) BOOL keychainSyncAllowedByServer;
@property (nonatomic) BOOL userHasExplicitlyDisabledSync;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;

@end
