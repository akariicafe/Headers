@interface RTPersistenceCloudDeletionEnforcer : NSObject

- (BOOL)applyTombstonesToEntityWithName:(id)a0 identifiers:(id)a1 context:(id)a2 error:(id *)a3;
- (BOOL)performBatchDeleteOfEntityWithName:(id)a0 identifiers:(id)a1 context:(id)a2 error:(id *)a3;
- (BOOL)processRequestsSinceReferenceDate:(id)a0 context:(id)a1 error:(id *)a2;

@end
