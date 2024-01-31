@interface LKNamingSimilarity : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long similarity;

+ (id)namingSimilarityWithSimilarity:(unsigned long long)a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToLKNamingSimilarity:(id)a0;

@end
