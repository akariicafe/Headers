@class _TtC13TSPersistence22TSPMutableReferenceMap, NSMutableIndexSet;

@interface TSPMutableComponentDataReferenceMap : NSObject {
    _TtC13TSPersistence22TSPMutableReferenceMap *_dataToObjectReferenceMap;
    _TtC13TSPersistence22TSPMutableReferenceMap *_objectToDataReferenceMap;
    NSMutableIndexSet *_objectIdentifiersWithoutUUID;
    void *_resetObjectIdentifiers;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (long long)addReferenceFromObjectIdentifier:(long long)a0 toDataIdentifier:(long long)a1 objectHasUUID:(BOOL)a2;
- (long long)incrementReferenceFromObjectIdentifier:(long long)a0 toDataIdentifier:(long long)a1 objectHasUUID:(BOOL)a2 increment:(unsigned long long)a3;
- (id)initWithDataCapacity:(long long)a0 objectCapacity:(long long)a1;
- (id)initWithDataToObjectReferenceMap:(id)a0 objectToDataReferenceMap:(id)a1 objectIdentifiersWithoutUUID:(id)a2;
- (id)makeComponentDataReferenceMap;
- (void)objectIdentifier:(long long)a0 didResetToObjectIdentifier:(long long)a1;

@end
