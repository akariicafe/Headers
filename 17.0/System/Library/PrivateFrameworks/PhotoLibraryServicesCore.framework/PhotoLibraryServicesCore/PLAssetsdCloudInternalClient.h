@interface PLAssetsdCloudInternalClient : PLAssetsdBaseClient

- (BOOL)isReadyForAnalysis;
- (void)getNotUploadedCount:(id /* block */)a0;
- (void)sharedLibraryRampCheckWithCompletionHandler:(id /* block */)a0;
- (void)requestDeviceLibraryConfigurationChange:(long long)a0 completionHandler:(id /* block */)a1;
- (void)forceParticipantAssetTrashNotificationCompletionHandler:(id /* block */)a0;
- (void)confirmAllRemainingOnboardingPreviewAssetsOnLibraryScope:(id)a0 completionHandler:(id /* block */)a1;
- (void)publishShare:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchShareFromShareURL:(id)a0 ignoreExistingShare:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)queryParticipantsWithEmails:(id)a0 phoneNumbers:(id)a1 completionHandler:(id /* block */)a2;
- (id)personInfoDictionaryForPersonID:(id)a0 error:(id *)a1;
- (void)deactivateLibraryScope:(id)a0 completionHandler:(id /* block */)a1;
- (void)rampingRequestForResourceType:(unsigned long long)a0 numRequested:(unsigned long long)a1 reply:(id /* block */)a2;
- (unsigned long long)cloudSharingSpaceManagementRequestWithType:(unsigned long long)a0 optionalBytesToPurge:(unsigned long long)a1 error:(id *)a2;
- (void)getLibraryScopeStatusCountsForScopeWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)markOnboardingPreviewAssetsByProcessingRulesOnLibraryScope:(id)a0 excludePersonUUIDs:(id)a1 completionHandler:(id /* block */)a2;
- (void)createPhotostreamAlbumWithStreamID:(id)a0;
- (void)markResourcesPurgeableWithUrgency:(long long)a0 assetUuids:(id)a1 completionHandler:(id /* block */)a2;
- (void)getCurrentTransferProgress:(id /* block */)a0;
- (void)setPersonInfoDictionary:(id)a0 forPersonID:(id)a1;
- (unsigned long long)getResetSyncStatusWithError:(id *)a0;
- (void)updateSharedAlbumsCachedServerConfigurationLimits;
- (void)userViewedSharedLibraryParticipantAssetTrashNotificationWithCompletionHandler:(id /* block */)a0;
- (BOOL)isReadyForCloudPhotoLibrary;
- (void)getCPLConfigrationValueForKey:(id)a0 completionHandler:(id /* block */)a1;
- (void)overrideSystemBudgetsForSyncSession:(BOOL)a0 pauseReason:(id)a1 systemBudgets:(unsigned long long)a2 reply:(id /* block */)a3;
- (long long)keyForEmailAddress:(id)a0 error:(id *)a1;
- (void)startExitFromLibraryScopeWithIdentifier:(id)a0 retentionPolicy:(long long)a1 exitSource:(long long)a2 completionHandler:(id /* block */)a3;
- (void)setCloudPhotoLibraryEnabledState:(BOOL)a0;
- (void)forceSyncMomentShare:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)shouldAutoEnableiCPLOnOSXWithError:(id *)a0;
- (void)resetLocalOnlyLibraryScopesAndAllLibraryScopeAssetStatesWithCompletionHandler:(id /* block */)a0;
- (BOOL)isReadyForAnalysisQuickCheck;
- (void)syncCloudPhotoLibrary;
- (void)removeParticipantsWithParticipantUUIDs:(id)a0 fromLibraryScopeWithIdentifier:(id)a1 retentionPolicy:(long long)a2 exitSource:(long long)a3 completionHandler:(id /* block */)a4;
- (void)synchronouslySetCloudPhotoLibraryPauseState:(BOOL)a0 reason:(short)a1;
- (id)emailAddressForKey:(long long)a0 error:(id *)a1;
- (void)acceptShare:(id)a0 completionHandler:(id /* block */)a1;
- (void)setCloudPhotoLibraryEnabledStateSync:(BOOL)a0;
- (void)getSystemBudgetsWithReply:(id /* block */)a0;
- (void)setCloudPhotoLibraryPauseState:(BOOL)a0 reason:(short)a1;
- (void)unsharePendingAssetsSharedToScopeWithIdentifier:(id)a0;
- (void)enablePhotostreamsWithStreamID:(id)a0;
- (id)activateLibraryScope:(id)a0 completionHandler:(id /* block */)a1;
- (void)refreshLibraryScopeWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end
