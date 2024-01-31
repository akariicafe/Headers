@class NSString, NSDate;

@interface CMBikeSensorData : NSObject <NSSecureCoding, NSCopying> {
    double fTimestamp;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *timestamp;
@property (nonatomic) double instantaneousSpeed;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *manufacturer;
@property (copy, nonatomic) NSString *deviceIdentifier;
@property (nonatomic) double instantaneousCadence;
@property (nonatomic) double instantaneousPower;

+ (BOOL)isAvailable;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithTimestamp:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)newFitnessMachineDataFromBikeSensorData;

@end
