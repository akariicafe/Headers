@class HDCodableSummarySharingEntry;

@interface HDCloudSyncSharedSummaryRevokeParticipantOperation : HDCloudSyncOperation {
    HDCodableSummarySharingEntry *_codableEntry;
}

- (void)main;
- (void).cxx_destruct;
- (id)_deleteZonesOperationForParticipant:(id)a0 error:(id *)a1;
- (id)_updatedParticipantRecordInZone:(id)a0 entry:(id)a1 error:(id *)a2;
- (id)initWithConfiguration:(id)a0 codableEntry:(id)a1;

@end
