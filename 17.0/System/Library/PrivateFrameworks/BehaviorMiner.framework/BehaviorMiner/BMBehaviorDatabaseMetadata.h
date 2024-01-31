@class NSDateInterval, NSArray, NSDate;

@interface BMBehaviorDatabaseMetadata : NSObject

@property (readonly, copy, nonatomic) NSDate *miningDate;
@property (readonly, copy, nonatomic) NSDateInterval *eventInterval;
@property (readonly, nonatomic) unsigned long long minimumAbsoluteSupport;
@property (readonly, nonatomic) double minimumConfidence;
@property (readonly, nonatomic) double samplingInterval;
@property (readonly, nonatomic) NSArray *itemTypeIdentifiers;
@property (readonly, nonatomic) NSArray *targetTypeIdentifiers;
@property (readonly, nonatomic) unsigned long long numberOfBaskets;

- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresntation;
- (id)initWithMiningDate:(id)a0 eventInterval:(id)a1 minimumAbsoluteSupport:(unsigned long long)a2 minimumConfidence:(double)a3 samplingInterval:(double)a4 itemTypeIdentifiers:(id)a5 targetTypeIdentifiers:(id)a6 numberOfBaskets:(unsigned long long)a7;

@end
