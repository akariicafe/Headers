@class REFeature;

@interface RECustomRelevanceProvider : RERelevanceProvider

@property (readonly, nonatomic) REFeature *feature;
@property (readonly, nonatomic) unsigned long long value;

+ (id)relevanceSimulatorID;

- (unsigned long long)_hash;
- (void)dealloc;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryEncoding;
- (id)initWithFeature:(id)a0 value:(unsigned long long)a1;

@end
