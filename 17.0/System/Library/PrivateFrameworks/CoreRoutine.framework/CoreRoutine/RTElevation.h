@class NSDate;

@interface RTElevation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) double elevation;
@property (readonly, nonatomic) double elevationUncertainty;
@property (readonly, nonatomic) long long estimationStatus;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isValid;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithElevation:(double)a0 dateInterval:(id)a1;
- (id)initWithElevation:(double)a0 dateInterval:(id)a1 elevationUncertainty:(double)a2 estimationStatus:(long long)a3;

@end
