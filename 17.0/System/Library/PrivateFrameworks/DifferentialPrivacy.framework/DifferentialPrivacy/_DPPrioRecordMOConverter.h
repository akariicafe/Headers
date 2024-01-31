@interface _DPPrioRecordMOConverter : NSObject <_DPRecordConverter>

- (id)insertRecord:(id)a0 inManagedObjectContext:(id)a1;
- (id)insertRecords:(id)a0 inManagedObjectContext:(id)a1;
- (BOOL)copyRecord:(id)a0 intoManagedObject:(id)a1;
- (id)createRecordFromManagedObject:(id)a0;
- (id)updateRecords:(id)a0 inManagedObjectContext:(id)a1;

@end
