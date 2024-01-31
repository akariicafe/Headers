@class NSString;

@interface _NSPersistentHistoryPredicateRemapper : NSObject <NSPredicateVisitor> {
    NSString *_storeID;
    BOOL _previousKeyPathExpressionWasToken;
}

+ (id)defaultInstance;

- (void)dealloc;
- (void)visitPredicate:(id)a0;
- (void)visitPredicateExpression:(id)a0;
- (id)createPredicateForFetchFromPredicate:(id)a0;
- (id)createPredicateForFetchFromPredicate:(id)a0 withContext:(id)a1;
- (id)initWithStoreIdentifier:(id)a0;
- (void)visitPredicateOperator:(id)a0;

@end
