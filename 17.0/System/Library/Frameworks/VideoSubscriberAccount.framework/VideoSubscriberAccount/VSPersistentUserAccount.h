@class NSString, NSURL, NSDate, NSObject;

@interface VSPersistentUserAccount : NSManagedObject

@property (copy, nonatomic) NSString *accountIdentifier;
@property (nonatomic) long long accountType;
@property (copy, nonatomic) NSString *authenticationData;
@property (copy, nonatomic) NSDate *billingCycleEndDate;
@property (copy, nonatomic) NSString *billingIdentifier;
@property (copy, nonatomic) NSDate *created;
@property (nonatomic) BOOL developer;
@property (copy, nonatomic) NSString *deviceIdentifier;
@property (copy, nonatomic) NSString *deviceName;
@property (nonatomic) long long deviceType;
@property (nonatomic) long long keychainItemHash;
@property (copy, nonatomic) NSDate *modified;
@property (copy, nonatomic) NSString *providerID;
@property (nonatomic) BOOL requiresSystemTrust;
@property (nonatomic) BOOL signedOut;
@property (copy, nonatomic) NSString *sourceIdentifier;
@property (nonatomic) long long sourceType;
@property (retain, nonatomic) NSObject *tierIdentifiers;
@property (copy, nonatomic) NSURL *updateURL;
@property (nonatomic) short version;

+ (id)fetchRequest;

@end
