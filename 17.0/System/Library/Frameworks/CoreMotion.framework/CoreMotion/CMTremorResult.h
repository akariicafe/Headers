@class NSDate;

@interface CMTremorResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) float percentUnknown;
@property (readonly, nonatomic) float percentNone;
@property (readonly, nonatomic) float percentSlight;
@property (readonly, nonatomic) float percentMild;
@property (readonly, nonatomic) float percentModerate;
@property (readonly, nonatomic) float percentStrong;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithParkinsonsResult:(const struct ParkinsonsResult { double x0; double x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; } *)a0;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 percentUnknown:(float)a2 percentNone:(float)a3 percentSlight:(float)a4 percentMild:(float)a5 percentModerate:(float)a6 percentStrong:(float)a7;

@end
