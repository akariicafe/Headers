@class NSDateComponents;

@interface HKCurrentActivityCacheQueryServerConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) NSDateComponents *statisticsIntervalComponents;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
