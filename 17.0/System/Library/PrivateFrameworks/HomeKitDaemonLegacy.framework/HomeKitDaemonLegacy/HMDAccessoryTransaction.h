@class NSData, NSString, NSArray, HMDUserManagementOperationTimestamp, NSDate, NSUUID, NSObject, NSNumber;
@protocol OS_dispatch_group;

@interface HMDAccessoryTransaction : HMDBackingStoreModelObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *configuredName;
@property (retain, nonatomic) NSString *providedName;
@property (retain, nonatomic) NSNumber *accessoryCategory;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *roomUUID;
@property (retain, nonatomic) NSString *hostAccessoryUUID;
@property (retain, nonatomic) NSString *model;
@property (retain, nonatomic) NSString *manufacturer;
@property (retain, nonatomic) NSString *firmwareVersion;
@property (retain, nonatomic) NSString *serialNumber;
@property (retain, nonatomic) NSString *configurationAppIdentifier;
@property (retain, nonatomic) NSNumber *networkClientIdentifier;
@property (retain, nonatomic) NSString *networkRouterUUID;
@property (retain, nonatomic) NSNumber *currentNetworkProtectionMode;
@property (retain, nonatomic) NSNumber *networkClientLAN;
@property (retain, nonatomic) NSString *networkClientProfileFingerprint;
@property (retain, nonatomic) NSData *wiFiUniquePreSharedKey;
@property (retain, nonatomic) NSNumber *wiFiCredentialType;
@property (retain, nonatomic) NSArray *appliedFirewallWANRules;
@property (retain, nonatomic) NSNumber *lastNetworkAccessViolationOccurrenceSince1970;
@property (retain, nonatomic) NSNumber *lastNetworkAccessViolationResetSince1970;
@property (retain, nonatomic) NSString *configuredNetworkProtectionGroupUUIDString;
@property (retain, nonatomic) NSString *pendingConfigurationIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *configurationTracker;
@property (retain, nonatomic) NSNumber *suspendCapable;
@property (retain, nonatomic) NSDate *lastSeenDate;
@property (retain, nonatomic) NSNumber *lowBattery;
@property (retain, nonatomic) NSString *primaryProfileVersion;
@property (retain, nonatomic) NSString *productData;
@property (retain, nonatomic) NSString *productDataV2;
@property (retain, nonatomic) NSString *initialManufacturer;
@property (retain, nonatomic) NSString *initialModel;
@property (retain, nonatomic) NSNumber *initialCategoryIdentifier;
@property (retain, nonatomic) HMDUserManagementOperationTimestamp *sharedAdminAddedTimestamp;
@property (retain, nonatomic) HMDUserManagementOperationTimestamp *pairingsAuditedTimestamp;
@property (copy) NSUUID *preferredMediaUserUUID;
@property (copy, nonatomic) NSNumber *preferredUserSelectionType;

+ (id)properties;

- (void).cxx_destruct;
- (id)dependentUUIDs;

@end
