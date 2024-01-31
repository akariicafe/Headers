@class NSMapTable, NSMutableDictionary, NoteContext, ESCalDBHelper;

@interface ESLocalDBWatcher : NSObject {
    void *_abWatcher;
    NoteContext *_noteWatcher;
    NSMapTable *_concernedABPartyToBlockMap;
    NSMapTable *_concernedNotePartyToBlockMap;
    ESCalDBHelper *_calDBHelper;
    NSMutableDictionary *_calDBInfosByPath;
}

@property (nonatomic) int lastSavedABSequenceNumber;

+ (id)_canonicalizePath:(id)a0;
+ (id)sharedDBWatcher;

- (void)setLastSavedCalSequenceNumber:(int)a0 forDatabaseInContainer:(id)a1;
- (void)registerConcernedNoteParty:(id)a0 withChangedBlock:(id /* block */)a1;
- (id)init;
- (void)dealloc;
- (int)lastSavedCalSequenceNumberForDatabaseInContainer:(id)a0;
- (void)registerConcernedCalParty:(id)a0 forAccountID:(id)a1 withChangedBlock:(id /* block */)a2;
- (void)_notesChangedExternally;
- (void)noteCalDBDirChanged;
- (void)removeConcernedCalParty:(id)a0 forAccountID:(id)a1;
- (void)_handleCalChangeNotification;
- (void).cxx_destruct;
- (id)_dbInfoForAccountID:(id)a0 create:(BOOL)a1;
- (void)removeConcernedNoteParty:(id)a0;
- (void)didReceiveDarwinNotification:(id)a0;
- (void)_handleABChangeNotificationWithInfo:(id)a0;
- (void)noteABDBDirChanged;
- (void)registerConcernedABParty:(id)a0 withChangedBlock:(id /* block */)a1;
- (void)removeConcernedABParty:(id)a0;

@end
