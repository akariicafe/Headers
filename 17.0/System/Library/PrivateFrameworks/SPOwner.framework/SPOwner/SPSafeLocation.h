@class NSUUID, NSString, NSSet, CLLocation;

@interface SPSafeLocation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *identifier;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) CLLocation *location;
@property (nonatomic) long long approvalState;
@property (copy, nonatomic) NSSet *associatedBeacons;
@property (readonly, nonatomic) double latitude;
@property (readonly, nonatomic) double longitude;
@property (readonly, nonatomic) double horizontalAccuracy;
@property (readonly, nonatomic) double altitude;
@property (readonly, nonatomic) double verticalAccuracy;
@property (readonly, nonatomic) double speed;
@property (readonly, nonatomic) double speedAccuracy;
@property (readonly, nonatomic) double course;
@property (readonly, nonatomic) double courseAccuracy;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 type:(long long)a1 name:(id)a2 location:(id)a3 associatedBeacons:(id)a4 approvalState:(long long)a5;
- (id)mutableSafeLocation;
- (id)initWithType:(long long)a0 name:(id)a1 location:(id)a2 approvalState:(long long)a3;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
