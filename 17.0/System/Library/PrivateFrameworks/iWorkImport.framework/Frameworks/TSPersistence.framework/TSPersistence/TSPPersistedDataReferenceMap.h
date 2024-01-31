@class NSString, _TtC13TSPersistence15TSPReferenceMap, NSIndexSet;

@interface TSPPersistedDataReferenceMap : NSObject <TSPObjectInDocumentContaining> {
    _TtC13TSPersistence15TSPReferenceMap *_dataToObjectReferenceMap;
    void *_objectToDataReferenceMap;
    NSIndexSet *_objectIdentifiersInDocument;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)allReferencesFromDataIdentifier:(long long)a0;
- (id)allReferencesFromObjectIdentifier:(long long)a0;
- (void)enumerateDataReferencesUsingBlock:(id /* block */)a0;
- (id)initWithComponentDataReferenceInfoDictionary:(id)a0 dataCount:(unsigned long long)a1 objectCount:(unsigned long long)a2;
- (BOOL)isAnyObjectIdentifierInDocument:(id)a0;
- (BOOL)isObjectIdentifierInDocument:(long long)a0;

@end
