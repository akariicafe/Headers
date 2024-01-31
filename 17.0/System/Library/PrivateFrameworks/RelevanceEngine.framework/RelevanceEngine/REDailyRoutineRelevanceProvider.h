@interface REDailyRoutineRelevanceProvider : RERelevanceProvider

@property (readonly, nonatomic) unsigned long long type;

+ (id)relevanceSimulatorID;

- (unsigned long long)_hash;
- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryEncoding;
- (id)initWithDailyRoutineType:(unsigned long long)a0;

@end
