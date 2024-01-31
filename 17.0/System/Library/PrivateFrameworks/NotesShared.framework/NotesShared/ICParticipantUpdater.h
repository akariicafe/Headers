@class NSManagedObjectContext, NSObject;
@protocol OS_dispatch_queue;

@interface ICParticipantUpdater : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext;

- (void).cxx_destruct;
- (id)initWithManagedObjectContext:(id)a0;
- (void)updateWithCompletion:(id /* block */)a0;
- (void)deleteOrphanedParticipantsWithCompletion:(id /* block */)a0;
- (void)insertMissingParticipantsWithCompletion:(id /* block */)a0;
- (void)insertParticipantsForNoteObjectID:(id)a0;
- (id)missingNoteObjectsIDs;

@end
