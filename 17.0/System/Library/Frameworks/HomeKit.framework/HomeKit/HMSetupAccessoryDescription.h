@class NSUUID, NSString, NSURL, HMAccessory, NSData, HMSetupAccessoryPayload, HMAccessoryOwnershipToken, NSDictionary, NSError, NSArray, HMAccessoryCategory;

@interface HMSetupAccessoryDescription : NSObject <HMFObject, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *appIdentifier;
@property (retain, nonatomic) HMSetupAccessoryPayload *setupAccessoryPayload;
@property (nonatomic) BOOL addAndSetupAccessories;
@property (copy, nonatomic) NSString *marketingName;
@property (copy, nonatomic) NSURL *installationGuideURL;
@property (nonatomic) BOOL retry;
@property (copy, nonatomic) NSString *accessoryName;
@property (copy, nonatomic) NSString *manufacturerName;
@property (retain, nonatomic) HMAccessoryCategory *category;
@property (copy, nonatomic) NSURL *appBundleURL;
@property (copy, nonatomic) NSUUID *accessoryUUID;
@property (copy, nonatomic) NSUUID *suggestedRoomUUID;
@property (copy, nonatomic) NSString *suggestedAccessoryName;
@property (copy, nonatomic) NSString *storeID;
@property (copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSString *setupID;
@property (copy, nonatomic) NSString *setupCode;
@property (copy, nonatomic) HMAccessoryOwnershipToken *ownershipToken;
@property (copy, nonatomic) NSUUID *addRequestIdentifier;
@property (readonly, nonatomic) BOOL supportsIP;
@property (readonly, nonatomic) BOOL supportsWAC;
@property (readonly, nonatomic) BOOL supportsBTLE;
@property (readonly, nonatomic, getter=isPaired) BOOL paired;
@property (nonatomic) unsigned long long certificationStatus;
@property (nonatomic) BOOL userConsentedForReplace;
@property (weak, nonatomic) HMAccessory *accessoryBeingReplaced;
@property (copy, nonatomic) NSString *accessoryServerIdentifier;
@property (nonatomic, getter=isEntitledForHomeKitSPI) BOOL entitledForHomeKitSPI;
@property (nonatomic, getter=isEntitledForThirdPartySetupAccessoryPayload) BOOL entitledForThirdPartySetupAccessoryPayload;
@property (nonatomic, getter=isEntitledForThirdPartyMatterSetupPayload) BOOL entitledForThirdPartyMatterSetupPayload;
@property (nonatomic, getter=isSetupInitiatedByOtherMatterEcosystem) BOOL setupInitiatedByOtherMatterEcosystem;
@property (readonly, copy) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) BOOL hasAddRequest;
@property (readonly, copy, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSUUID *suggestedRoomUniqueIdentifier;
@property (copy, nonatomic) NSData *setupAuthToken;
@property (copy, nonatomic) NSUUID *setupAuthTokenUUID;
@property (retain, nonatomic) NSError *cancellationReason;
@property (nonatomic) BOOL doNetworkScan;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAppIdentifier:(id)a0 homeUUID:(id)a1;
- (id)initToSetupAccessoriesWithSetupAccessoryPayload:(id)a0 appID:(id)a1 homeName:(id)a2 homeUUID:(id)a3 trustedOrigin:(BOOL)a4 ownershipToken:(id)a5;
- (id)initWithAccessoryUUID:(id)a0 accessoryName:(id)a1 appID:(id)a2 homeName:(id)a3 homeUUID:(id)a4 trustedOrigin:(BOOL)a5;
- (id)initWithAccessoryUUID:(id)a0 accessoryName:(id)a1 appID:(id)a2 homeUUID:(id)a3;
- (id)initWithAddRequestIdentifier:(id)a0 accessoryName:(id)a1 accessoryCategory:(id)a2 setupAccessoryPayload:(id)a3 appID:(id)a4 ownershipToken:(id)a5;
- (id)initWithSetupAccessoryPayload:(id)a0 appID:(id)a1 homeUUID:(id)a2 ownershipToken:(id)a3;
- (id)initWithStagedCHIPAccessoryPairingIdentifier:(id)a0;
- (void)updateAccessoryCategory:(id)a0;
- (void)updateAccessoryName:(id)a0;
- (void)updateAppIdentifier:(id)a0;
- (void)updateOwnershipToken:(id)a0;
- (void)updateRetry:(BOOL)a0;
- (void)updateWithAccessory:(id)a0;
- (void)updateWithAuthToken:(id)a0 uuid:(id)a1;
- (void)updateWithSetupAccessoryPayload:(id)a0;

@end
