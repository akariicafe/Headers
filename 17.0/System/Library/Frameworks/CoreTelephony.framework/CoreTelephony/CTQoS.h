@class NSNumber, NSArray;

@interface CTQoS : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *qci;
@property (retain, nonatomic) NSNumber *bitRateMax;
@property (retain, nonatomic) NSNumber *bitRateMin;
@property (retain, nonatomic) NSArray *filters;
@property (readonly, nonatomic) NSNumber *gbr;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
