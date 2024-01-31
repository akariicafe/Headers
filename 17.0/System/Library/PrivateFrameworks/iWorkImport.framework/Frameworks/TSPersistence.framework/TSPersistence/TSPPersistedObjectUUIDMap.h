@class NSString, NSMutableIndexSet;

@interface TSPPersistedObjectUUIDMap : NSObject <NSCopying, TSPObjectInDocumentContaining> {
    void *_map;
    NSMutableIndexSet *_objectIdentifiers;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)enumerateEntriesUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPersistedObjectUUIDMap:(id)a0;
- (id)descriptionForComponentIdentifier:(long long)a0 objectIdentifier:(long long)a1 delegate:(id)a2;
- (void)didUpdateObjectIdentifierDuringRead:(long long)a0 UUID:(id)a1 componentIdentifier:(long long)a2 originalObjectIdentifier:(long long)a3 originalUUID:(id)a4 delegate:(id)a5;
- (void)didUpdateObjectIdentifierDuringRead:(long long)a0 forUUID:(id)a1 componentIdentifier:(long long)a2 originalObjectIdentifier:(long long)a3 delegate:(id)a4;
- (void)didUpdateUUIDDuringRead:(id)a0 forComponentIdentifier:(long long)a1 objectIdentifier:(long long)a2 originalUUID:(id)a3 isDuplicatedUUID:(BOOL)a4 delegate:(id)a5;
- (id)initWithComponentObjectUUIDMapDictionary:(id)a0 objectUUIDCount:(unsigned long long)a1 isLoadingDocument:(BOOL)a2 objectReferenceMap:(id)a3 delegate:(id)a4;
- (BOOL)isAnyObjectIdentifierInDocument:(id)a0;
- (BOOL)isObjectIdentifierInDocument:(long long)a0;
- (struct TSPObjectLocation { long long x0; long long x1; })objectLocationForUUID:(id)a0;
- (BOOL)setObjectLocation:(struct TSPObjectLocation { long long x0; long long x1; })a0 forUUID:(id)a1 objectReferenceMap:(id)a2 delegate:(id)a3;

@end
