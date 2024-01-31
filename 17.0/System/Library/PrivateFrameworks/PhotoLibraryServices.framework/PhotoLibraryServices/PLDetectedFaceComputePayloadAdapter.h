@interface PLDetectedFaceComputePayloadAdapter : PLJournalEntryPayloadUpdateAdapter

- (id)payloadForChangedKeys:(id)a0;
- (id)payloadID;
- (id)payloadIDForTombstone:(id)a0;
- (BOOL)isValidForJournalPersistence;
- (id)face;

@end
