@class NSString, GDEntityIdentifier, NSDate, NSNumber;

@interface GDKTSQueryParams : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSDate *endTime;
@property (readonly, nonatomic) long long inclusionType;
@property (readonly, nonatomic) NSNumber *distanceMinInMeters;
@property (readonly, nonatomic) NSNumber *distanceMaxInMeters;
@property (readonly, nonatomic) NSNumber *elevationGainMinInMeters;
@property (readonly, nonatomic) NSNumber *elevationGainMaxInMeters;
@property (readonly, nonatomic) NSNumber *durationMinInSeconds;
@property (readonly, nonatomic) NSNumber *durationMaxInSeconds;
@property (readonly, copy, nonatomic) NSString *roadType;
@property (readonly, copy, nonatomic) NSString *roadName;
@property (readonly, copy, nonatomic) GDEntityIdentifier *originId;
@property (readonly, copy, nonatomic) GDEntityIdentifier *destinationId;

+ (long long)roadTypeForString:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStartTime:(id)a0 endTime:(id)a1 inclusionType:(long long)a2 distanceMinInMeters:(id)a3 distanceMaxInMeters:(id)a4 elevationGainMinInMeters:(id)a5 elevationGainMaxInMeters:(id)a6 durationMinInSeconds:(id)a7 durationMaxInSeconds:(id)a8 roadType:(id)a9 roadName:(id)a10 originId:(id)a11 destinationId:(id)a12;

@end
