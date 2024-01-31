@class NSString;

@interface AOLAccount : YahooAccount <MFOAuth2TokenAuthProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)accountTypeIdentifier;
+ (id)deliveryAccountHostname;
+ (unsigned int)deliveryAccountPortNumber;
+ (BOOL)deliveryAccountUsesSSL;
+ (id)displayedAccountTypeString;
+ (id)emailAddressWithUsername:(id)a0;

- (id)_deliveryAccountCreateIfNeeded:(BOOL)a0;
- (id)URLForMessage:(id)a0;
- (id)_defaultSpecialMailboxNameForType:(int)a0;
- (BOOL)derivesDeliveryAccountInfoFromMailAccount;
- (id)iconString;
- (id)statisticsKind;

@end
