@class NSArray;

@interface _PASSqliteNSArrayCursor : _PASSqliteRowIdIndexSetCursor {
    id _equalTo;
}

@property (retain, nonatomic) NSArray *collection;

+ (const char *)sqliteMethodName;
+ (id)planningInfoForValueConstraint:(int)a0;

- (id)init;
- (id)currentIndexedValue;
- (void)setCollection:(id)a0;
- (void)applyConstraint:(int)a0 withArgument:(id)a1;
- (void).cxx_destruct;
- (BOOL)currentIndexedRowSatisfiesConstraints;

@end
