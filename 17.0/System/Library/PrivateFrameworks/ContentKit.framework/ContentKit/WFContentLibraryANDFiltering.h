@interface WFContentLibraryANDFiltering : NSObject

+ (Class)objectClass;
+ (void)getItemsMatchingComparisonPredicates:(id)a0 resultHandler:(id /* block */)a1;
+ (void)getItemsMatchingPredicate:(id)a0 resultHandler:(id /* block */)a1;
+ (void)performCustomFilteringUsingComparisonPredicates:(id)a0 resultHandler:(id /* block */)a1;
+ (void)performCustomFilteringUsingORComparisonPredicates:(id)a0 resultHandler:(id /* block */)a1;

@end
