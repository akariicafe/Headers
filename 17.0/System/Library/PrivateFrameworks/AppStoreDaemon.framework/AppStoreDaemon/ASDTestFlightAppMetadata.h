@class NSData, NSString, NSDictionary, NSURL, ACAccount, NSNumber, NSArray;

@interface ASDTestFlightAppMetadata : NSObject <ASDAppMetadata, NSCopying, NSSecureCoding> {
    BOOL _requiresPowerPluggedIn_wasSet;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) ACAccount *account;
@property (copy, nonatomic) NSURL *artworkURL;
@property (copy, nonatomic) NSDictionary *backgroundAssetMetadata;
@property (copy, nonatomic) NSString *betaBuildGroupID;
@property (readonly, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *bundleVersion;
@property (copy, nonatomic) NSString *companionBundleID;
@property (copy, nonatomic) NSURL *existingBundleURL;
@property (copy, nonatomic) NSNumber *externalVersionIdentifier;
@property (copy, nonatomic) NSArray *genreIDs;
@property (nonatomic) BOOL hasMessagesExtension;
@property (copy, nonatomic) NSNumber *initialODRSize;
@property (copy, nonatomic) NSNumber *itemID;
@property (copy, nonatomic) NSString *itemName;
@property (nonatomic, getter=isLaunchProhibited) BOOL launchProhibited;
@property (copy, nonatomic) NSDictionary *placeholderEntitlements;
@property (copy, nonatomic) NSURL *messagesArtworkURL;
@property (nonatomic) long long packageCompression;
@property (copy, nonatomic) NSData *packageDPInfo;
@property (copy, nonatomic) NSData *packageSINF;
@property (copy, nonatomic) NSNumber *packageSize;
@property (copy, nonatomic) NSURL *packageURL;
@property (copy, nonatomic) NSArray *provisioningProfiles;
@property (copy, nonatomic) NSData *receipt;
@property BOOL requiresPowerPluggedIn;
@property (copy, nonatomic) NSString *shortBundleVersion;
@property long long softwarePlatform;
@property (copy, nonatomic) NSString *storeCohort;
@property (copy, nonatomic) NSNumber *storeFront;
@property (nonatomic) BOOL userInitiated;
@property (copy, nonatomic) NSString *variantID;
@property (copy, nonatomic) NSString *vendorName;
@property (readonly) long long metadataType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBundleID:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
