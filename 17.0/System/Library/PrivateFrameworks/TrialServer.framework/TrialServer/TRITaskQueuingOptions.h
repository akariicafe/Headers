@interface TRITaskQueuingOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long duplicateTaskResolution;

+ (id)defaultOptionsWithIgnoreDuplicates;
+ (id)optionsWithDuplicateTaskResolution:(unsigned long long)a0;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)defaultEncodeWithCoder:(id)a0;
- (id)copyWithReplacementDuplicateTaskResolution:(unsigned long long)a0;
- (id)initWithDuplicateTaskResolution:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToOptions:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
