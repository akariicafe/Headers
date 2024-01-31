@interface _PASSqliteCollectionsCursor : NSObject {
    BOOL _foundOutputRow;
    BOOL _eof;
}

@property (retain, nonatomic) id collection;

+ (BOOL)hasKey;
+ (id)planningInfoForKeyConstraint:(int)a0;
+ (const char *)sqliteCreateTableStatement;
+ (double)baseEstimatedRows;
+ (const char *)sqliteMethodName;
+ (BOOL)canOrderByValue:(BOOL)a0;
+ (id)planningInfoForValueConstraint:(int)a0;
+ (double)baseEstimatedCost;
+ (id)planningInfoForRowIdConstraint:(int)a0;
+ (BOOL)canOrderByKey:(BOOL)a0;
+ (BOOL)canOrderByRowId:(BOOL)a0;
+ (BOOL)hasRowId;

- (id)init;
- (id)currentIndexedValue;
- (void)finalizeConstraints;
- (void)applyKeySort:(BOOL)a0;
- (BOOL)currentIndexEof;
- (void)applyRowIdSort:(BOOL)a0;
- (void)applyConstraint:(int)a0 withArgument:(id)a1;
- (void)applyValueSort:(BOOL)a0;
- (void)stepIndexedRow;
- (void)applyRowIdConstraint:(int)a0 withArgument:(id)a1;
- (unsigned long long)outputRowId;
- (void).cxx_destruct;
- (BOOL)currentIndexedRowSatisfiesConstraints;
- (void)applyKeyConstraint:(int)a0 withArgument:(id)a1;
- (id)outputKey;

@end
