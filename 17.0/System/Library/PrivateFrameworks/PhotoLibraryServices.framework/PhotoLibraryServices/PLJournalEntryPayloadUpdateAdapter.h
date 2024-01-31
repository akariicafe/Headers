@class NSManagedObject;

@interface PLJournalEntryPayloadUpdateAdapter : NSObject <PLJournalEntryPayloadUpdateAdapter> {
    NSManagedObject *_managedObject;
}

- (id)payloadForChangedKeys:(id)a0;
- (id)payloadID;
- (id)payloadIDForTombstone:(id)a0;
- (id)initWithManagedObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValidForJournalPersistence;
- (id)managedObject;
- (id)payloadsForChangedKeys:(id)a0;
- (id)payloadIDsByPayloadClassIDToDeleteOnInsert;
- (BOOL)validForPersistenceChangedForChangedKeys:(id)a0;

@end
