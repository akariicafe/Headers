@class NSMapTable;

@interface _UIAssociationTable : NSObject {
    NSMapTable *_leftToRightHashTables;
    NSMapTable *_rightToLeftHashTables;
}

- (id)description;
- (id)leftValueEnumerable;
- (BOOL)hasLeftValuesForRightValue:(id)a0;
- (void).cxx_destruct;
- (id)rightValuesForLeftValue:(id)a0;
- (id)leftValues;
- (id)leftValuesForRightValue:(id)a0;
- (id)leftValueEnumerableForRightValue:(id)a0;
- (id)rightValueEnumerable;
- (id)initWithLeftValueOptions:(unsigned long long)a0 rightValueOptions:(unsigned long long)a1;
- (void)registerAssociationWithLeftValue:(id)a0 rightValue:(id)a1;
- (id)rightValues;
- (id)rightValueEnumerableForLeftValue:(id)a0;
- (BOOL)hasRightValuesForLeftValue:(id)a0;
- (void)unregisterAssociationWithLeftValue:(id)a0 rightValue:(id)a1;
- (BOOL)isEmpty;

@end
