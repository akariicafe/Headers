@interface REMotionRelevanceProvider : RERelevanceProvider

@property (readonly, nonatomic) unsigned long long motionTypes;

+ (id)relevanceSimulatorID;

- (unsigned long long)_hash;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryEncoding;
- (id)initWithMotionTypes:(unsigned long long)a0;

@end
