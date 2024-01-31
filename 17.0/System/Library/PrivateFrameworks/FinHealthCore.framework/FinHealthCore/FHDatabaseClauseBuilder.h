@class NSMutableArray;

@interface FHDatabaseClauseBuilder : NSObject

@property (readonly, nonatomic) NSMutableArray *dynamicClauseList;

- (id)init;
- (void).cxx_destruct;
- (void)addDateClause:(id)a0 fieldName:(id)a1 expression:(id)a2;
- (void)addDecimalNumberClause:(id)a0 fieldName:(id)a1 expression:(id)a2;
- (void)addDoubleClause:(id)a0 fieldName:(id)a1 expression:(double)a2;
- (void)addIntegerClause:(id)a0 fieldName:(id)a1 expression:(long long)a2;
- (void)addNumberClause:(id)a0 fieldName:(id)a1 expression:(id)a2;
- (void)addStringClause:(id)a0 fieldName:(id)a1 expression:(id)a2;

@end
