@class NSDate;

@interface CLTripSegmentInertialData : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *timestamp;
@property (nonatomic) double dataPeriod_s;
@property (nonatomic) double deltaCourse_rad;
@property (nonatomic) double deltaSpeed_mps;
@property (nonatomic) double deltaCourseVar_rad2;
@property (nonatomic) double deltaSpeedVar_mps2;
@property (nonatomic) double deltaCourseSpeedCovar_radmps;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isValid;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTime:(id)a0 dataPeriodSec:(double)a1 deltaCourseRad:(double)a2 deltaSpeedMps:(double)a3 deltaCourseVarRad2:(double)a4 deltaSpeedVarMps2:(double)a5 deltaCourseSpeedCovarRadMps:(double)a6;

@end
