@class NSNumber;

@interface SMTSiriIntendedInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) float odldScore;
@property (readonly, nonatomic) float aftmScore;
@property (readonly, nonatomic) float spkrIdScore;
@property (readonly, nonatomic) float lrnnScore;
@property (readonly, nonatomic) float checkerScore;
@property (readonly, copy, nonatomic) NSNumber *invocationType;
@property (readonly, nonatomic) float lrnnThreshold;
@property (readonly, nonatomic) float lrnnScale;
@property (readonly, nonatomic) float lrnnOffset;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOdldScore:(float)a0 aftmScore:(float)a1 spkrIdScore:(float)a2 lrnnScore:(float)a3 checkerScore:(float)a4 invocationType:(id)a5;
- (id)initWithOdldScore:(float)a0 aftmScore:(float)a1 spkrIdScore:(float)a2 lrnnScore:(float)a3 checkerScore:(float)a4 invocationType:(id)a5 lrnnThreshold:(float)a6 lrnnScale:(float)a7 lrnnOffset:(float)a8;

@end
