@interface VoiceShortcuts.CloudKitSyncEngineDataSource : NSObject <CKSyncEngineDataSource> {
    void /* unknown type, empty encoding */ _eventStream;
    void /* unknown type, empty encoding */ recordSource;
}

- (id)init;
- (void)syncEngine:(id)a0 zoneWithIDWasDeleted:(id)a1;
- (void)syncEngine:(id)a0 didDeleteRecordWithID:(id)a1;
- (void)syncEngine:(id)a0 recordWithIDWasDeleted:(id)a1 recordType:(id)a2;
- (void)syncEngine:(id)a0 didFetchRecord:(id)a1;
- (id)syncEngine:(id)a0 recordToSaveForRecordID:(id)a1;
- (void)syncEngine:(id)a0 didSaveRecord:(id)a1;
- (void)syncEngine:(id)a0 zoneWithIDWasPurged:(id)a1;
- (void).cxx_destruct;
- (void)syncEngine:(id)a0 didUpdateMetadata:(id)a1;
- (void)syncEngine:(id)a0 zoneWithIDChanged:(id)a1;
- (void)syncEngine:(id)a0 failedToSaveRecord:(id)a1 error:(id)a2;
- (void)syncEngine:(id)a0 failedToDeleteRecordWithID:(id)a1 error:(id)a2;
- (void)syncEngine:(id)a0 didDeleteRecordZoneWithID:(id)a1;
- (void)syncEngine:(id)a0 didSaveRecordZone:(id)a1;
- (void)syncEngine:(id)a0 failedToDeleteRecordZoneWithID:(id)a1 error:(id)a2;
- (void)syncEngine:(id)a0 failedToSaveRecordZone:(id)a1 error:(id)a2;

@end
