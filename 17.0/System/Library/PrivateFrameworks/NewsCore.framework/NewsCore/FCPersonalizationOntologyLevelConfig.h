@class NSDictionary;

@interface FCPersonalizationOntologyLevelConfig : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *tagWeightMapping;

- (id)init;
- (id)initWithConfig:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0 defaultConfig:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTagWeightMapping:(id)a0;

@end
