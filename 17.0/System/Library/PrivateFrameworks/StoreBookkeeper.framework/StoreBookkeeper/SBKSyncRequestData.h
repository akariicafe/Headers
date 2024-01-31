@interface SBKSyncRequestData : SBKRequestData

- (id)syncTransaction;
- (BOOL)_needsConflictDetection;
- (id)_serializableConflictDetectionOrdinalForKey:(id)a0;
- (id)_serializableConflictDetectionValue;
- (id)_serializableDeleteItemPayloadDictionaryForKey:(id)a0;
- (id)_serializableUpdateItemPayloadDictionaryForKey:(id)a0;
- (id)serializableRequestBodyPropertyList;

@end
