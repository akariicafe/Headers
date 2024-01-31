@class NIDiscoveryToken, NSString, NSUUID, NSData, NSNumber, UWBSignalFeatures;

@interface NINearbyObject : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NIDiscoveryToken *discoveryToken;
@property (nonatomic) float distance;
@property (nonatomic) void /* unknown type, empty encoding */ direction;
@property (nonatomic) struct { void /* unknown type, empty encoding */ vector; } quaternion;
@property (nonatomic) float azimuth;
@property (nonatomic) float elevation;
@property (nonatomic) unsigned long long relationship;
@property (copy, nonatomic) NSString *deviceIdentifier;
@property (nonatomic) double timestamp;
@property (nonatomic) long long distanceMeasurementQuality;
@property (nonatomic) long long motionState;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSNumber *spatialScore;
@property (copy, nonatomic) NSData *bluetoothAdvertisingAddress;
@property (copy, nonatomic) NSUUID *bluetoothPeerIdentifier;
@property (nonatomic) long long verticalDirectionEstimate;
@property (nonatomic) float horizontalAngle;
@property (nonatomic) float horizontalAngleAccuracy;
@property (nonatomic) double signalStrength;
@property (nonatomic) double rangeBiasEstimate;
@property (nonatomic) double rangeUncertainty;
@property (nonatomic) unsigned char remoteTxAntennaMask;
@property (nonatomic) void /* unknown type, empty encoding */ worldPosition;
@property (nonatomic) BOOL requiresBiasCorrection;
@property (copy, nonatomic) UWBSignalFeatures *uwbSignalFeatures;
@property (nonatomic) unsigned char nbRxStatus;
@property (nonatomic) unsigned char mmsRxStatus;
@property (nonatomic) double nbRssi;
@property (nonatomic) BOOL canInteract;
@property (nonatomic) float boundedRegionRange;
@property (nonatomic) long long algorithmSource;
@property (copy, nonatomic) NSString *debugDisplayInfo;
@property (nonatomic) BOOL resetARSession;
@property (nonatomic) BOOL revokeFindingExperience;

+ (id)fauxObjectWithDiscoveryToken:(id)a0 name:(id)a1 deviceIdentifier:(id)a2;
+ (id)new;

- (id)initWithToken:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionInternal;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)deviceIdentifer;
- (id)initWithNearbyObject:(id)a0;
- (void)overrideDirection:(SEL)a0;
- (void)overrideDistance:(float)a0;
- (void)overrideDistanceMeasurementQuality:(long long)a0;
- (void)overrideMotionState:(long long)a0;
- (void)overrideRelationship:(unsigned long long)a0;
- (void)overrideSpatialScore:(id)a0;
- (void)overrideTimestamp:(float)a0;

@end
