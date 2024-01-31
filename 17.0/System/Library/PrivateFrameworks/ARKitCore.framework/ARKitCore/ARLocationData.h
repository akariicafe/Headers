@class NSString, CLLocation;

@interface ARLocationData : NSObject <ARDictionaryCoding, ARMetadataWrapperCoding, ARSensorData, ARDaemonSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CLLocation *location;
@property (readonly, nonatomic, getter=isSecure) BOOL secure;
@property (readonly, nonatomic) double undulation;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ locationLLA;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ locationECEF;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } ecefFromlocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double timestamp;

+ (id)grabNextFromReader:(id)a0 timestamp:(double *)a1;
+ (BOOL)isAltitudeValid:(id)a0;

- (id)initWithLocation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)appendToWriter:(id)a0;
- (BOOL)isAltitudeValid;
- (id)encodeToDictionary;
- (id)encodeToMetadataWrapper;
- (void /* unknown type, empty encoding */)enuFromLocation:(id)a0;
- (id)initWithLocation:(id)a0 timestamp:(double)a1 secure:(BOOL)a2;
- (id)initWithMetadataWrapper:(id)a0;
- (BOOL)isUndulationValid;

@end
