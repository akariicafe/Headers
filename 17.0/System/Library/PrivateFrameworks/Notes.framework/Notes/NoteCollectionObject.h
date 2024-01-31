@class NSString;

@interface NoteCollectionObject : NSManagedObject <ICNoteVisibilityTesting>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isAllNotesContainer;

- (id)cacheKey;
- (id)basicAccountIdentifier;
- (id)titleForTableViewCell;
- (id)predicateForSearchableAttachments;
- (id)predicateForNotes;
- (id)noteVisibilityTestingForSearchingAccount;
- (BOOL)supportsVisibilityTestingType:(long long)a0;
- (id)collectionInfo;
- (BOOL)isTitleValid:(id)a0 error:(id *)a1;
- (id)predicateForSearchableNotes;
- (id)searchDomainIdentifier;

@end
