@class CLLocation, NSDateInterval;

@interface RTSynthesizedLocationEnumerationOptions : RTEnumerationOptions <NSCopying>

@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (nonatomic) unsigned long long batchSize;
@property (copy, nonatomic) CLLocation *boundingBoxLocation;
@property (nonatomic) long long preferredDownsamplingLevel;

+ (BOOL)supportsSecureCoding;
+ (long long)NextLessDecimatedDownsamplingPreference:(long long)a0;

- (id)init;
- (unsigned long long)hash;
- (id /* block */)processingBlock;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDateInterval:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (Class)enumeratedType;
- (BOOL)isEqualToOptions:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDateInterval:(id)a0 preferredDownsamplingLevel:(long long)a1;
- (id)initWithDateInterval:(id)a0 preferredDownsamplingLevel:(long long)a1 batchSize:(unsigned long long)a2;
- (id)initWithDateInterval:(id)a0 preferredDownsamplingLevel:(long long)a1 batchSize:(unsigned long long)a2 boundingBoxLocation:(id)a3;

@end
