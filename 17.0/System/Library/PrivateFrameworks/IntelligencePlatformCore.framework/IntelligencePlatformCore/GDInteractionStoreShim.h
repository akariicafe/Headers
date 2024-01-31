@interface GDInteractionStoreShim : NSObject

+ (id)interactionFromCDInteraction:(id)a0;
+ (id)interactionHistoryEnumeratorFromStore:(id)a0 batchSize:(unsigned long long)a1;
+ (id)interactionHistoryEnumeratorFromStore:(id)a0 predicate:(id)a1 sortDescriptor:(id)a2 batchSize:(unsigned long long)a3;
+ (id)interactionHistoryEnumeratorWithBatchSize:(unsigned long long)a0;
+ (id)interactionHistoryEnumeratorWithPredicate:(id)a0 sortDescriptor:(id)a1 batchSize:(unsigned long long)a2;
+ (id)interactionHistoryFromStore:(id)a0;

@end
