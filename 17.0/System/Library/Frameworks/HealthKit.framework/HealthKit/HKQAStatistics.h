@class NSNumber, NSDictionary;

@interface HKQAStatistics : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *sampleCount;
@property (readonly, nonatomic) NSDictionary *sampleCountByType;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSampleCount:(id)a0 sampleCountByType:(id)a1;

@end
