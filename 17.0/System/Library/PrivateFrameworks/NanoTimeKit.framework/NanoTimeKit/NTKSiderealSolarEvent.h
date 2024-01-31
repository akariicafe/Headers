@class NSDate;

@interface NTKSiderealSolarEvent : NSObject <NSSecureCoding> {
    double _degree;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *time;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) double angle;
@property (readonly, nonatomic) double degree;

+ (id)eventWithType:(long long)a0 degree:(double)a1;
+ (id)eventWithType:(long long)a0 time:(id)a1 degree:(double)a2;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)debugNameForType:(long long)a0;

@end
