@class CKShare, NSPersistentContainer, NSMutableDictionary;

@interface PFCKRecordConflictResolver : NSObject {
    CKShare *_ancestorRecord;
    CKShare *_serverRecord;
    CKShare *_clientRecord;
    CKShare *_resolvedRecord;
    NSPersistentContainer *_container;
    NSMutableDictionary *_allParticipantsByID;
    NSMutableDictionary *_participantObjectIDsByParticipantID;
    NSMutableDictionary *_recordIDToObjectID;
}

- (void)dealloc;
- (id)initWithAncestorRecord:(id)a0 serverRecord:(id)a1 clientRecord:(id)a2;

@end
