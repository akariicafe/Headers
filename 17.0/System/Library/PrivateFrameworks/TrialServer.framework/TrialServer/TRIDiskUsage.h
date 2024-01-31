@interface TRIDiskUsage : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long naiveSum;
@property (readonly, nonatomic) unsigned long long deduplicatedSum;
@property (readonly, nonatomic) unsigned long long compressedSum;

+ (id)usageWithNaiveSum:(unsigned long long)a0 deduplicatedSum:(unsigned long long)a1 compressedSum:(unsigned long long)a2;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToUsage:(id)a0;
- (id)copyWithReplacementCompressedSum:(unsigned long long)a0;
- (id)copyWithReplacementDeduplicatedSum:(unsigned long long)a0;
- (id)copyWithReplacementNaiveSum:(unsigned long long)a0;
- (id)initWithNaiveSum:(unsigned long long)a0 deduplicatedSum:(unsigned long long)a1 compressedSum:(unsigned long long)a2;

@end
