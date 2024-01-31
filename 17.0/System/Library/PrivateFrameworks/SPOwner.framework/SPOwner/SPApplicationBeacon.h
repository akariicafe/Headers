@class NSUUID, NSString, SPDiscoveredAccessoryProductInformation, NSSet, SPLostModeInfo, NSDictionary, SPHandle, SPBeaconRole;

@interface SPApplicationBeacon : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSUUID *groupIdentifier;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) long long batteryLevel;
@property (copy, nonatomic) NSUUID *productUUID;
@property (copy, nonatomic) NSString *model;
@property (nonatomic) long long partIdentifier;
@property (copy, nonatomic) SPLostModeInfo *lostModeInfo;
@property (copy, nonatomic) NSDictionary *taskInformation;
@property (copy, nonatomic) SPHandle *owner;
@property (copy, nonatomic) SPBeaconRole *role;
@property (copy, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) NSString *systemVersion;
@property (copy, nonatomic) NSSet *safeLocations;
@property (copy, nonatomic) SPDiscoveredAccessoryProductInformation *accessoryProductInfo;
@property (nonatomic) long long vendorId;
@property (nonatomic) long long productId;
@property (nonatomic) BOOL isAppleAudioAccessory;
@property (nonatomic) BOOL isZeus;
@property (nonatomic) BOOL canBeLeashedByHost;
@property (nonatomic) BOOL connected;
@property (nonatomic) NSString *discoveryId;

- (void).cxx_destruct;
- (id)initWithInternalSimpleBeacon:(id)a0;

@end
