@interface MapsSync.MapsSyncHistoryAnalyzer : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ _context;
    void /* unknown type, empty encoding */ _contextsToMerge;
    void /* unknown type, empty encoding */ _historyStartDate;
    void /* unknown type, empty encoding */ _historyToken;
    void /* unknown type, empty encoding */ _notificationContextDidSaveToken;
    void /* unknown type, empty encoding */ _callbackData;
    void /* unknown type, empty encoding */ kMaxHistoryDatabaseSizeMegabytes;
    void /* unknown type, empty encoding */ kHistoryChangesPurgeChunk;
    void /* unknown type, empty encoding */ kMaxHistoryChangesCount;
    void /* unknown type, empty encoding */ kMaxHistoryDatabasePercentage;
    void /* unknown type, empty encoding */ kHistoryExpirationDays;
    void /* unknown type, empty encoding */ kHistoryExpirationSeconds;
    void /* unknown type, empty encoding */ kMaxHistoryDatabaseSizeBytes;
}

- (void)notificationPersistentStoreRemoteChange:(id)a0;

@end
