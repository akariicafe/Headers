@class REFeature;

@interface REFeatureValuePair : NSObject <NSCopying>

@property (readonly, nonatomic) REFeature *feature;
@property (readonly, nonatomic) unsigned long long value;

- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFeature:(id)a0 value:(unsigned long long)a1;

@end
