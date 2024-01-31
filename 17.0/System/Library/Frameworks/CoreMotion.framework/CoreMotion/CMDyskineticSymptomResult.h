@class NSDate;

@interface CMDyskineticSymptomResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) float percentUnlikely;
@property (readonly, nonatomic) float percentLikely;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithParkinsonsResult:(const struct ParkinsonsResult { double x0; double x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; } *)a0;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 percentDyskinesiaUnlikely:(float)a2 percentDyskinesiaLikely:(float)a3;

@end
