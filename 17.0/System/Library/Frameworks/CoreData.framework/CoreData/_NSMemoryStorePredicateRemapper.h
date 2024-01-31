@class NSManagedObjectContext;

@interface _NSMemoryStorePredicateRemapper : NSObject <NSPredicateVisitor> {
    NSManagedObjectContext *_context;
}

+ (id)defaultInstance;

- (id)init;
- (void)dealloc;
- (void)visitPredicate:(id)a0;
- (void)visitPredicateExpression:(id)a0;
- (id)createPredicateForFetchFromPredicate:(id)a0;
- (id)createPredicateForFetchFromPredicate:(id)a0 withContext:(id)a1;
- (void)visitPredicateOperator:(id)a0;

@end
