@class NSString, NSArray;

@interface NNMKAccount : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *accountId;
@property (retain, nonatomic) NSString *localId;
@property (retain, nonatomic) NSString *parentAccountIdentifier;
@property (retain, nonatomic) NSString *typeIdentifier;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) BOOL shouldArchive;
@property (nonatomic) unsigned long long sourceType;
@property (retain, nonatomic) NSArray *emailAddresses;
@property (retain, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *defaultEmailAddress;
@property (retain, nonatomic) NSString *pccEmailAddress;
@property (retain, nonatomic) NSString *emailAddressToken;
@property (nonatomic) unsigned long long standaloneState;
@property (retain, nonatomic) NSArray *mailboxes;

+ (id)inboxesFromAccounts:(id)a0;
+ (id)generateAccountIdForAccount:(id)a0;
+ (id)generateIdentifierFromEmailsAddresses:(id)a0;
+ (BOOL)isiCloudEmailAddress:(id)a0;

- (BOOL)_isiCloud;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_isHotmail;
- (BOOL)areStandaloneNotificationsEnabledWithCloudNotificationsEnabled:(BOOL)a0;
- (id)description;
- (BOOL)_isGmail;
- (void).cxx_destruct;
- (BOOL)maySupportStandaloneMode;
- (BOOL)isEqual:(id)a0;
- (BOOL)supportsCloudNotifications;
- (BOOL)directPushNotificationsSupported;
- (id)initWithCoder:(id)a0;

@end
