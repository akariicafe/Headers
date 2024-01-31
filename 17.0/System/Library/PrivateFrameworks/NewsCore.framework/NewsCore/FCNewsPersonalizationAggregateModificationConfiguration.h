@class FCNewsPersonalizationAggregateModificationData;

@interface FCNewsPersonalizationAggregateModificationConfiguration : NSObject

@property (retain, nonatomic) FCNewsPersonalizationAggregateModificationData *baselineModificationData;
@property (retain, nonatomic) FCNewsPersonalizationAggregateModificationData *aggregateModificationData;

- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
