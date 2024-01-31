@class NSIndexSet;

@interface _PASSqliteNSIndexSetCursor : _PASSqliteRowIdIndexSetCursor

@property (retain, nonatomic) NSIndexSet *collection;

+ (const char *)sqliteCreateTableStatement;
+ (double)baseEstimatedRows;
+ (const char *)sqliteMethodName;
+ (BOOL)canOrderByValue:(BOOL)a0;
+ (id)planningInfoForValueConstraint:(int)a0;
+ (double)baseEstimatedCost;

- (id)currentIndexedValue;
- (void)setCollection:(id)a0;
- (void)applyConstraint:(int)a0 withArgument:(id)a1;
- (void)applyValueSort:(BOOL)a0;

@end
