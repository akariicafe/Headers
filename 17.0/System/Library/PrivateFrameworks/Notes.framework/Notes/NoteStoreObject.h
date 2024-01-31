@class NoteAccountObject, NSString, NSArray, NSSet;

@interface NoteStoreObject : NoteCollectionObject

@property (retain, nonatomic) NSString *externalIdentifier;
@property (retain, nonatomic) NoteAccountObject *account;
@property (readonly, retain, nonatomic) NoteStoreObject *parentStore;
@property (readonly, retain, nonatomic) NSArray *ancestorStores;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSSet *changes;
@property (retain, nonatomic) NSString *syncAnchor;

- (id)notesForGUIDs:(id)a0;
- (id)cacheKey;
- (id)notesForServerIntIdsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned int)maximumServerIntId;
- (id)notesForServerIntIdsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 ascending:(BOOL)a1 limit:(unsigned long long)a2;
- (unsigned long long)minimumSequenceNumberForServerIntIds:(id)a0;
- (id)basicAccountIdentifier;
- (id)notesForServerIds:(id)a0;
- (id)titleForTableViewCell;
- (id)notesForServerIntIds:(id)a0;
- (id)predicateForNotes;
- (id)notesForServerIntIds:(id)a0 ascending:(BOOL)a1 limit:(unsigned long long)a2;
- (id)notesForIntegerIds:(id)a0;
- (id)noteVisibilityTestingForSearchingAccount;
- (id)collectionInfo;
- (id)searchDomainIdentifier;

@end
