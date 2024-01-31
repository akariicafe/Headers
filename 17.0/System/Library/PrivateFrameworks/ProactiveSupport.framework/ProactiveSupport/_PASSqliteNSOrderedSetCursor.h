@class NSOrderedSet;

@interface _PASSqliteNSOrderedSetCursor : _PASSqliteRowIdIndexSetCursor

@property (retain, nonatomic) NSOrderedSet *collection;

+ (const char *)sqliteCreateTableStatement;
+ (const char *)sqliteMethodName;
+ (id)planningInfoForValueConstraint:(int)a0;

- (id)currentIndexedValue;
- (void)setCollection:(id)a0;
- (void)applyConstraint:(int)a0 withArgument:(id)a1;

@end
