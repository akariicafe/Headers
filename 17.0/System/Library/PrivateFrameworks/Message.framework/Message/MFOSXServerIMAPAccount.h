@class DeliveryAccount;

@interface MFOSXServerIMAPAccount : IMAPAccount {
    DeliveryAccount *_deliveryAccount;
}

+ (id)accountTypeIdentifier;
+ (id)accountTypeString;
+ (BOOL)primaryDeliveryAccountIsDynamic;
+ (id)_authSchemeForAuthenticationMethod:(id)a0;
+ (id)displayedAccountTypeString;
+ (id)newChildAccountWithParentAccount:(id)a0 error:(id *)a1;

- (void)setPassword:(id)a0;
- (void).cxx_destruct;
- (id)displayName;
- (id)_deliveryAccountCreateIfNeeded:(BOOL)a0;
- (id)_credentialCreateIfNecessary:(BOOL)a0 error:(id *)a1;
- (BOOL)derivesDeliveryAccountInfoFromMailAccount;

@end
