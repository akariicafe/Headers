@class NSMutableArray;

@interface FHDatabaseInsertOrUpdateBuilder : NSObject

@property (readonly, nonatomic) NSMutableArray *dynamicFieldValuePairList;

- (id)init;
- (void).cxx_destruct;
- (void)addDateValueForField:(id)a0 fieldValue:(id)a1;
- (void)addDecimalNumberValueForField:(id)a0 fieldValue:(id)a1;
- (void)addDoubleValueForField:(id)a0 fieldValue:(double)a1;
- (void)addIntegerValueForField:(id)a0 fieldValue:(long long)a1;
- (void)addNumberValueForField:(id)a0 fieldValue:(id)a1;
- (void)addStringValueForField:(id)a0 fieldValue:(id)a1;

@end
