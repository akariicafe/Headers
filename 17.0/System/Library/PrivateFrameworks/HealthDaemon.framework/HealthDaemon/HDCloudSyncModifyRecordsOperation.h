@class CKDatabase, NSArray, NSString, HDSynchronousTaskGroup, NSMutableArray, CKContainer;

@interface HDCloudSyncModifyRecordsOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {
    CKContainer *_container;
    CKDatabase *_database;
    NSMutableArray *_savedRecords;
    NSMutableArray *_deletedRecordIDs;
    HDSynchronousTaskGroup *_taskGroup;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (copy, nonatomic) NSArray *recordsToSave;
@property (copy, nonatomic) NSArray *recordIDsToDelete;
@property (nonatomic) BOOL markAsParticipantNeedsNewInvitationToken;
@property (nonatomic) long long savePolicy;
@property (nonatomic) BOOL permitNonAtomicZoneSaves;
@property (nonatomic) BOOL treatAnyErrorAsFatal;
@property (readonly, copy, nonatomic) NSArray *savedRecords;
@property (readonly, copy, nonatomic) NSArray *deletedRecordIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldLogAtOperationStart;

- (void)main;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 container:(id)a1 recordsToSave:(id)a2 recordIDsToDelete:(id)a3;
- (id)initWithConfiguration:(id)a0 container:(id)a1 scope:(long long)a2 recordsToSave:(id)a3 recordIDsToDelete:(id)a4;
- (void)synchronousTaskGroup:(id)a0 didFinishWithSuccess:(BOOL)a1 errors:(id)a2;

@end
