@class ICNotesCrossProcessChangeCoordinator, NSManagedObjectID, NSPersistentStoreCoordinator, ICNoteContext, NoteContext, NSManagedObjectContext;
@protocol ICLegacyAccount;

@interface ICUnifiedNoteContext : NSObject {
    ICNoteContext *_modernNoteContext;
    NoteContext *_htmlNoteContext;
}

@property (readonly, nonatomic) ICNoteContext *modernNoteContext;
@property (readonly, nonatomic) NoteContext *htmlNoteContext;
@property (readonly, nonatomic) NSPersistentStoreCoordinator *modernStoreCoordinator;
@property (readonly, nonatomic) NSPersistentStoreCoordinator *htmlStoreCoordinator;
@property (nonatomic, readonly) NSManagedObjectContext *modernManagedObjectContext;
@property (nonatomic, readonly) ICNotesCrossProcessChangeCoordinator *modernCrossProcessChangeCoordinator;
@property (nonatomic, readonly) NSManagedObjectContext *htmlManagedObjectContext;
@property (nonatomic, readonly) BOOL resolvedPrefersViewContext;
@property (nonatomic, readonly) NSManagedObjectID *defaultAccountObjectID;
@property (nonatomic, readonly) id<ICLegacyAccount> legacyAccountForLocalAccount;
@property (readonly, nonatomic) unsigned long long options;

- (void).cxx_destruct;
- (id)managedObjectIDForURIRepresentation:(id)a0;
- (void)enableHTMLContextChangeLogging;
- (id)initWithModernNoteContext:(id)a0 htmlNoteContext:(id)a1;
- (id)initWithModernNoteContext:(id)a0 htmlNoteContext:(id)a1 options:(unsigned long long)a2;
- (id)legacyAccountForEmailAddress:(id)a0;
- (id)legacyFolderWithIdentifier:(id)a0;
- (id)legacyNoteWithIdentifier:(id)a0;
- (id)managedObjectContextForObject:(id)a0 error:(id *)a1;
- (id)managedObjectContextForObjectID:(id)a0;
- (id)managedObjectIDForURIString:(id)a0;

@end
