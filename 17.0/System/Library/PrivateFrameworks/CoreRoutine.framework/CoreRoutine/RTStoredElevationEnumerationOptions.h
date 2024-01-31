@class NSDateInterval;

@interface RTStoredElevationEnumerationOptions : RTEnumerationOptions <NSCopying> {
    unsigned long long _batchSize;
}

@property (readonly, nonatomic) NSDateInterval *dateInterval;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)batchSize;
- (id)init;
- (unsigned long long)hash;
- (id /* block */)processingBlock;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (Class)enumeratedType;
- (BOOL)isEqualToOptions:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDateInterval:(id)a0 batchSize:(unsigned long long)a1;

@end
