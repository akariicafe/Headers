@class FCKeyValueStore, NSMutableDictionary, FCMTWriterLock;
@protocol FCPuzzleTypeSettingsDelegate;

@interface FCPuzzleTypeSettings : NSObject {
    FCMTWriterLock *_entriesLock;
    NSMutableDictionary *_entriesByPuzzleTypeID;
    FCKeyValueStore *_localStore;
    id<FCPuzzleTypeSettingsDelegate> _delegate;
}

+ (id)commandsToMergeLocalDataToCloud:(id)a0;

- (void)loadLocalCachesFromStore;
- (void).cxx_destruct;
- (id)allPuzzleTypeSettingsRecordNames;
- (id)allPuzzleTypeSettingsRecords;
- (void)handleSyncWithDeletedPuzzleTypeSettingsRecordName:(id)a0;
- (void)handleSyncWithPuzzleTypeSettingsRecord:(id)a0;
- (id)initWithStore:(id)a0 delegate:(id)a1;
- (id)lastSeenPuzzleIDsForPuzzleTypeID:(id)a0;
- (void)setLastSeenPuzzleIDs:(id)a0 puzzleTypeID:(id)a1;
- (void)setSettingsData:(id)a0 puzzleTypeID:(id)a1;
- (id)settingsDataForPuzzleTypeID:(id)a0;
- (void)syncForPuzzleTypeID:(id)a0;

@end
