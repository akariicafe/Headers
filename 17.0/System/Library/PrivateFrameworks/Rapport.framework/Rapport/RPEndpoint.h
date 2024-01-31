@class NSDate, NSString, NSArray, CUBonjourDevice, IDSDevice, SFDevice, NSDictionary, CBDevice;

@interface RPEndpoint : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *accountID;
@property (retain, nonatomic) SFDevice *bleDevice;
@property (retain, nonatomic) CBDevice *cbDevice;
@property (retain, nonatomic) CUBonjourDevice *bonjourDevice;
@property (nonatomic) BOOL cameraCapabilityRequestIsActive;
@property (retain, nonatomic) IDSDevice *idsDevice;
@property (copy, nonatomic) NSString *idsCorrelationIdentifier;
@property (copy, nonatomic) NSString *idsDeviceIdentifier;
@property (nonatomic) int linkType;
@property (copy, nonatomic) NSString *mediaRemoteIdentifier;
@property (copy, nonatomic) NSString *mediaRouteIdentifier;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned char nearbyActionV2Type;
@property (nonatomic) struct { long long majorVersion; long long minorVersion; long long patchVersion; } operatingSystemVersion;
@property (nonatomic) BOOL present;
@property (copy, nonatomic) NSArray *serviceTypes;
@property (nonatomic) unsigned long long statusFlags;
@property (copy, nonatomic) NSString *sourceVersion;
@property (copy, nonatomic) NSString *verifiedIdentity;
@property (retain, nonatomic) NSDictionary *verifiedAcl;
@property (readonly, nonatomic) int activityLevel;
@property (readonly, copy, nonatomic) NSDate *activityLevelTimeStamp;
@property (readonly, nonatomic) unsigned char cameraState;
@property (copy, nonatomic) NSArray *homeKitUserIdentifiers;
@property (readonly, nonatomic) unsigned int hotspotInfo;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL inDiscoverySession;
@property (copy, nonatomic) NSString *ipAddress;
@property (readonly, nonatomic) int proximity;
@property (readonly, copy, nonatomic) NSDictionary *serviceInfo;
@property (readonly, copy, nonatomic) NSString *serviceType;
@property (readonly, copy, nonatomic) NSString *contactID;

+ (id)nullEndpoint;

- (id)descriptionWithLevel:(int)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (unsigned int)updateWithIdentity:(id)a0;
- (unsigned int)updateWithCBDevice:(id)a0;
- (unsigned int)removeIDSDevice;
- (BOOL)removeSFDevice:(id)a0;
- (BOOL)removeCBDevice:(id)a0;
- (id)bleTargetData;
- (BOOL)compareWithDeviceIdentifier:(id)a0;
- (BOOL)removeBonjourDevice:(id)a0;
- (void)setActivityLevel:(int)a0;
- (unsigned int)updateWithBonjourDevice:(id)a0;
- (unsigned int)updateWithFamilyEndpoint:(id)a0;
- (unsigned int)updateWithIDSDevice:(id)a0;
- (unsigned int)updateWithSFDevice:(id)a0;

@end
