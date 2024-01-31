@class NSMutableDictionary, NSMutableSet;

@interface ML3ITunesSyncImportOperation : ML3ImportOperation {
    BOOL _sagaIsEnabled;
    BOOL _resetSync;
    NSMutableDictionary *_cachedPIDToFilePathMap;
    NSMutableDictionary *_cachedPIDToLocationPropertyMap;
    NSMutableDictionary *_cachedSyncIDsToPIDsMap;
    NSMutableSet *_importedPlaylists;
    long long _devicePrimaryContainer;
}

- (void)main;
- (void).cxx_destruct;
- (unsigned long long)importSource;
- (void)_archiveSyncPlistFiles;
- (id)_dbInfoValuesForStep:(id)a0;
- (BOOL)_performImportFromPlistFiles:(id)a0 withTransaction:(id)a1;
- (BOOL)_performImportOfTrackData:(id)a0 WithTransaction:(id)a1;
- (BOOL)_performImportWithTransaction:(id)a0;
- (BOOL)_processDeletePlaylistOperation:(id)a0 withImportSession:(void *)a1;
- (BOOL)_processDeleteTrackOperation:(id)a0 withImportSession:(void *)a1;
- (void)_processGeniusConfigPlist:(id)a0;
- (BOOL)_processInsertPlaylistOperation:(id)a0 withImportSession:(void *)a1;
- (BOOL)_processInsertTrackOperation:(id)a0 withImportSession:(void *)a1;
- (BOOL)_processSyncOperation:(id)a0 withImportSession:(void *)a1;
- (BOOL)_processUpdateDBInfoOperation:(id)a0 withImportSession:(void *)a1;
- (BOOL)_processUpdatePlaylistOperation:(id)a0 withImportSession:(void *)a1;
- (BOOL)_processUpdateTrackOperation:(id)a0 withImportSession:(void *)a1;
- (void)_recoverExistingAsset:(id)a0 forTrackId:(long long)a1;
- (id)_syncOperationsFromPlistFile:(id)a0;
- (id)_syncPlistFilesFromDirectory:(id)a0;

@end
