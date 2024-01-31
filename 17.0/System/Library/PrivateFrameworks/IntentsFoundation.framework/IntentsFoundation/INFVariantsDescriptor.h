@class NSString;

@interface INFVariantsDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long plurality;
@property (nonatomic) unsigned long long gender;
@property (readonly, nonatomic) NSString *dictionaryKey;

+ (id)variant;
+ (id)variantWithVariants:(unsigned long long)a0;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)append:(id)a0 toString:(id)a1;
- (id)initWithVariants:(unsigned long long)a0;
- (id)variantByRemovingOneAttribute;

@end
