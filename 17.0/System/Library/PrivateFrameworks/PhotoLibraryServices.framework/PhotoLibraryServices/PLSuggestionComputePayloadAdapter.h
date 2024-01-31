@interface PLSuggestionComputePayloadAdapter : PLJournalEntryPayloadUpdateAdapter

- (id)suggestion;
- (id)payloadForChangedKeys:(id)a0;
- (id)payloadID;
- (id)payloadIDForTombstone:(id)a0;
- (BOOL)isValidForJournalPersistence;

@end
