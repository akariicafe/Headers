@interface PLRelationshipOrderingState : NSObject {
    id _oids;
    id _foks;
    BOOL _isMutable;
}

- (id)description;
- (void).cxx_destruct;
- (id)objectIDs;
- (unsigned long long)findIndexForObjectID:(id)a0 newOrderValue:(long long)a1 hasOrderValueConflictWithObjectID:(id *)a2;
- (unsigned long long)indexForObjectID:(id)a0;
- (id)initWithObjectIDs:(id)a0 orderValues:(id)a1;
- (id)orderKeys;
- (BOOL)setOrderValue:(long long)a0 forObjectID:(id)a1 atIndex:(unsigned long long)a2;

@end
