@class NSManagedObjectID;

@interface ICNoteFolderSectionIdentifier : ICNoteSectionIdentifier

@property (readonly, nonatomic) NSManagedObjectID *noteContainerObjectID;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithNoteContainerObjectID:(id)a0;

@end
