@interface CMLSimilarityScore : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long identifier;
@property (nonatomic) float score;

+ (id)scoreWithIdentifier:(unsigned long long)a0 score:(float)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(unsigned long long)a0 score:(float)a1;

@end
