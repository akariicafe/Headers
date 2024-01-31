@class NSSet;

@interface PPNamedEntityMetadata : NSObject <NSCopying, NSSecureCoding, MLFeatureProvider>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned short impressionCount;
@property (readonly, nonatomic) unsigned short occurrencesInSource;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)initWithImpressionCount:(unsigned short)a0 occurrencesInSource:(unsigned short)a1;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)featureValueForName:(id)a0;
- (BOOL)isEqualToNamedEntityMetadata:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
