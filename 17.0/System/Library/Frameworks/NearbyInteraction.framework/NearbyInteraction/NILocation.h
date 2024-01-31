@class NSDate;

@interface NILocation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *timestamp;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double altitude;
@property (nonatomic) double ellipsoidalAltitude;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) double verticalAccuracy;
@property (nonatomic) double speed;
@property (nonatomic) double speedAccuracy;
@property (nonatomic) double course;
@property (nonatomic) double courseAccuracy;
@property (nonatomic) long long floor;
@property (nonatomic) long long locationType;
@property (nonatomic) long long signalEnvironment;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionInternal;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTimestamp:(id)a0 latitude:(double)a1 longitude:(double)a2 altitude:(double)a3 ellipsoidalAltitude:(double)a4 horizontalAccuracy:(double)a5 verticalAccuracy:(double)a6 speed:(double)a7 speedAccuracy:(double)a8 course:(double)a9 courseAccuracy:(double)a10 floor:(long long)a11 locationType:(long long)a12 signalEnvironment:(long long)a13;

@end
