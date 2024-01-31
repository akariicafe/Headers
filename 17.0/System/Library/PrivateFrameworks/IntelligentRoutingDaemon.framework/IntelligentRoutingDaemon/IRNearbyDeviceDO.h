@class NSString, NSDate;

@interface IRNearbyDeviceDO : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double range;
@property (readonly, nonatomic) NSString *idsIdentifier;
@property (readonly, nonatomic) NSString *mediaRemoteIdentifier;
@property (readonly, nonatomic) NSString *proximityType;
@property (readonly, nonatomic) NSDate *measurementDate;

+ (id)miLoNearbyDeviceDOWithRange:(double)a0 idsIdentifier:(id)a1 mediaRemoteIdentifier:(id)a2 proximityType:(id)a3 measurementDate:(id)a4;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithReplacementIdsIdentifier:(id)a0;
- (id)copyWithReplacementMeasurementDate:(id)a0;
- (id)copyWithReplacementMediaRemoteIdentifier:(id)a0;
- (id)copyWithReplacementProximityType:(id)a0;
- (id)copyWithReplacementRange:(double)a0;
- (id)exportAsDictionary;
- (id)initWithRange:(double)a0 idsIdentifier:(id)a1 mediaRemoteIdentifier:(id)a2 proximityType:(id)a3 measurementDate:(id)a4;
- (BOOL)isEqualToMiLoNearbyDeviceDO:(id)a0;

@end
