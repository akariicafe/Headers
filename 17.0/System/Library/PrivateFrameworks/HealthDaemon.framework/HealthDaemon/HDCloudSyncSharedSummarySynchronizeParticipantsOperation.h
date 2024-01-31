@class NSMutableArray, NSMutableSet, HDCloudSyncCachedZone;

@interface HDCloudSyncSharedSummarySynchronizeParticipantsOperation : HDCloudSyncOperation {
    HDCloudSyncCachedZone *_privateMetadataZone;
    NSMutableSet *_updatedParticipantRecordIDs;
    NSMutableArray *_updatedAutorizationRecords;
    NSMutableArray *_updatedLocalEntries;
}

- (void)main;
- (void).cxx_destruct;
- (id)_authorizationRecordForParticipant:(id)a0 error:(id *)a1;
- (BOOL)_createProfileIfNecessaryForParticipant:(id)a0 error:(id *)a1;
- (BOOL)_createProfileIfNecessaryForSharingEntry:(id)a0 error:(id *)a1;
- (BOOL)_createProfileWithUUID:(id)a0 contactIdentifier:(id)a1 firstName:(id)a2 lastName:(id)a3 ownerParticipant:(id)a4 error:(id *)a5;
- (BOOL)_deleteLocalProfileIfNecessaryForParticipant:(id)a0 error:(id *)a1;
- (BOOL)_deleteProfilesForInactiveParticipants:(id)a0 error:(id *)a1;
- (id)_filterEntries:(id)a0 active:(BOOL)a1;
- (BOOL)_mergeLocalAndCloudParticipant:(id)a0 error:(id *)a1;
- (BOOL)_mergeLocalAndCloudParticipants:(id)a0 error:(id *)a1;

@end
