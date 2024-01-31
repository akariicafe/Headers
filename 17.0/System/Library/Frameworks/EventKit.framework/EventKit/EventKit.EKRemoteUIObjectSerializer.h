@interface EventKit.EKRemoteUIObjectSerializer : NSObject {
    void /* unknown type, empty encoding */ kEKIsPendingInsertKey;
    void /* unknown type, empty encoding */ kEKChangeSetKey;
    void /* unknown type, empty encoding */ kEKPersistentObjectKey;
    void /* unknown type, empty encoding */ kEKCachedMeltedObjectsKey;
    void /* unknown type, empty encoding */ kEKChangeSetSingleValueChangesKey;
    void /* unknown type, empty encoding */ kEKChangeSetMultiValueAdditionsKey;
    void /* unknown type, empty encoding */ kEKChangeSetMultiValueRemovalsKey;
}

- (id)init;
- (void).cxx_destruct;
- (id)deserializedRepresentationWithSerializedDictionary:(id)a0 objectIDToChangeSetDictionaryMap:(id)a1 objectIDToPersistentDictionaryMap:(id)a2 eventStore:(id)a3 occurrenceDate:(id)a4;
- (id)serializedRepresentationWithEkObject:(id)a0;
- (id)serializedRepresentationWithEkObject:(id)a0 obfuscateKeyProperties:(BOOL)a1;

@end
