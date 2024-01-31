@class NSSet, NSEnumerator;

@interface _PASSqliteNSSetCursor : _PASSqliteCollectionsCursor {
    NSSet *_set;
    id _currentValue;
    NSEnumerator *_valuesEnumerator;
}

@property (retain, nonatomic) NSSet *collection;

+ (const char *)sqliteCreateTableStatement;
+ (const char *)sqliteMethodName;
+ (id)planningInfoForValueConstraint:(int)a0;

- (id)currentIndexedValue;
- (void)finalizeConstraints;
- (void)setCollection:(id)a0;
- (BOOL)currentIndexEof;
- (void)applyConstraint:(int)a0 withArgument:(id)a1;
- (void)stepIndexedRow;
- (void).cxx_destruct;
- (BOOL)currentIndexedRowSatisfiesConstraints;

@end
