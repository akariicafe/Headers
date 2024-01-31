@class NSCalendar;

@interface HKMHCountBasedQueryConfiguration : HKQueryServerConfiguration

@property (nonatomic) struct { long long start; long long duration; } dayIndexRange;
@property (retain, nonatomic) NSCalendar *gregorianCalendar;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
