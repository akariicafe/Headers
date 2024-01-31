@class NSDate;

@interface RESessionRelevanceProvider : RERelevanceProvider

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic, getter=isHistoric) BOOL historic;

+ (id)_simulationDateFormatter;
+ (id)relevanceSimulatorID;

- (unsigned long long)_hash;
- (id)init;
- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryEncoding;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 historic:(BOOL)a2;

@end
