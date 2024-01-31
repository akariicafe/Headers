@interface VUICollectionComparator : NSObject

+ (id)_identifiersWithObjects:(id)a0 identifierBlock:(id /* block */)a1;
+ (id)_indexByIdentifierDictionaryWithIdentifiers:(id)a0;
+ (id)_movedIdentifiersWithSourceIdentifiers:(id)a0 destinationIdentifiers:(id)a1;

- (id)_changeSetWithSourceObjects:(id)a0 destinationObjects:(id)a1 identifierBlock:(id /* block */)a2 isEqualBlock:(id /* block */)a3 updateChangeSetBlock:(id /* block */)a4;
- (id)changeSetFromObjects:(id)a0 toObjects:(id)a1 identifierBlock:(id /* block */)a2 isEqualBlock:(id /* block */)a3;
- (id)changeSetFromObjects:(id)a0 toObjects:(id)a1 identifierBlock:(id /* block */)a2 updateChangeSetBlock:(id /* block */)a3;

@end
