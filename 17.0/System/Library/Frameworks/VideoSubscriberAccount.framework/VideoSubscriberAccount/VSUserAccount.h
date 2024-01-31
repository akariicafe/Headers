@class NSString, NSArray, NSURL, NSDate;

@interface VSUserAccount : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *created;
@property (retain, nonatomic) NSDate *modified;
@property (nonatomic) long long sourceType;
@property (retain, nonatomic) NSString *sourceIdentifier;
@property (retain, nonatomic) NSString *deviceIdentifier;
@property (nonatomic, getter=isFromCurrentDevice) BOOL fromCurrentDevice;
@property (nonatomic) long long deviceCategory;
@property (retain, nonatomic) NSString *deviceName;
@property (nonatomic) unsigned long long keychainItemHash;
@property (nonatomic) BOOL isDeveloperCreated;
@property (copy, nonatomic) NSURL *updateURL;
@property (nonatomic) BOOL requiresSystemTrust;
@property (retain, nonatomic) NSString *accountProviderIdentifier;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long accountType;
@property (nonatomic, getter=isSignedOut) BOOL signedOut;
@property (copy, nonatomic) NSDate *subscriptionBillingCycleEndDate;
@property (copy, nonatomic) NSArray *tierIdentifiers;
@property (copy, nonatomic) NSString *billingIdentifier;
@property (copy, nonatomic) NSString *authenticationData;

+ (id)new;
+ (long long)deviceCategoryFromDeviceType:(unsigned long long)a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)prettyPrint;
- (id)componentsForPrinting:(id)a0;
- (id)initWithAccountType:(long long)a0 updateURL:(id)a1;
- (id)initWithAccountType:(long long)a0 updateURL:(id)a1 sourceType:(long long)a2 sourceIdentifier:(id)a3 deviceIdentifier:(id)a4;
- (id)sourceTypeForFiltering;

@end
