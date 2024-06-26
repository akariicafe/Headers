@class NSString;

@interface PHAServiceUnavailableClientHandler : NSObject <PLPhotoAnalysisServiceProtocol, PHAServiceOperationHandling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestGenerateQuestionsWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestFlexMusicCurationDebugInformationForSongWithUID:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestInvalidateServicePersistentCachesWithContext:(id)a0 reply:(id /* block */)a1;
- (void)requestPeopleSuggestionLearningWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestUpNextAssetLocalIdentifiersForAssetWithLocalIdentifier:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)reportMetricsWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestHighlightCollectionEnrichmentWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestAssetsForPersonLocalIdentifiers:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestUtilityAssetLocalIdentifiersWithContext:(id)a0 reply:(id /* block */)a1;
- (void)requestRepresentativeAssetsForAssetCollectionWithLocalIdentifier:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestMusicCurationForAssetLocalIdentifiers:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)reloadWallpaperSuggestionsWithSuggestionUUIDs:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestRelatedMomentsForPersonLocalIdentifiers:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestCurationOfLength:(unsigned long long)a0 forMemoryForLocalIdentifier:(id)a1 withOptions:(id)a2 context:(id)a3 reply:(id /* block */)a4;
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenAssetForLocalIdentifier:(id)a0 andRelatedResultsForLocalIdentifiers:(id)a1 relatedType:(unsigned long long)a2 context:(id)a3 reply:(id /* block */)a4;
- (void)requestComposabilityScoresOfAssetsForLocalIdentifiers:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestHighlightEnrichmentWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestFlexMusicCurationDebugInformationForAssetCollectionWithLocalIdentifier:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestOnDemandTasksWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestGeoHashForAssetLocalIdentifiers:(id)a0 geoHashSize:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestHighlightDebugInformationForHighlightWithLocalIdentifier:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestGraphServiceStatisticsWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestPrecachingOfAudioDataForAdamIDs:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)handleOperation:(id)a0;
- (void)requestSongsForAdamIDs:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestMusicCurationForAssetCollectionLocalIdentifier:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)runShadowEvaluationWithRecipe:(id)a0 models:(id)a1 trialDeploymentID:(id)a2 trialExperimentID:(id)a3 trialTreatmentID:(id)a4 context:(id)a5 resultBlock:(id /* block */)a6;
- (void)runCurationWithItems:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)rebuildGraphWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestCuratedAssetsForAssetCollectionWithLocalIdentifier:(id)a0 duration:(unsigned long long)a1 options:(id)a2 context:(id)a3 reply:(id /* block */)a4;
- (void)requestFlexMusicCurationForAssetLocalIdentifiers:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestTrendsByIdentifierWithCadence:(id)a0 forYear:(unsigned long long)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestGraphMomentLocalIdentifiersWithDateInterval:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestRunPFLWithAttachments:(id)a0 recipeUserInfo:(id)a1 context:(id)a2 resultBlock:(id /* block */)a3;
- (void)requestExportGraphServiceForPurpose:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)reloadAlbumWidgetTimelineWithContext:(id)a0 reply:(id /* block */)a1;
- (void)requestRevGeocodingSyndicationLibraryWithContext:(id)a0 reply:(id /* block */)a1;
- (void)requestCurationScoreByAssetUUIDForAssetUUIDs:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestSetDefaultsObject:(id)a0 forKey:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestPeopleForWallpaperSuggestionsWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)reloadForYouWidgetTimelineWithContext:(id)a0 reply:(id /* block */)a1;
- (void)requestRelatedDebugInformationBetweenReferenceAssetCollectionForLocalIdentifier:(id)a0 andRelatedAssetCollectionForLocalIdentifier:(id)a1 options:(id)a2 relatedType:(unsigned long long)a3 context:(id)a4 reply:(id /* block */)a5;
- (void)requestRelatedDebugInformationBetweenAssetForLocalIdentifier:(id)a0 andRelatedAssetCollectionForLocalIdentifier:(id)a1 options:(id)a2 relatedType:(unsigned long long)a3 context:(id)a4 reply:(id /* block */)a5;
- (void)requestCuratedAssetForAssetCollectionWithLocalIdentifier:(id)a0 referenceAssetLocalIdentifier:(id)a1 options:(id)a2 context:(id)a3 reply:(id /* block */)a4;
- (void)requestSnapshotServiceForRelatedWithMomentLocalIdentifier:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestUpdateFeaturedContentBasedOnUserFeedbackWithPersonUUIDs:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestClearMusicCacheWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)cacheCPAnalyticsPropertiesWithContext:(id)a0 reply:(id /* block */)a1;
- (void)requestSuggestedMomentLocalIdentifiersForPersonLocalIdentifiers:(id)a0 withOptions:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestSignalModelInfosWithContext:(id)a0 reply:(id /* block */)a1;
- (void)recordFeatureUsageFromCounts:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestCameraSmartSharingProcessingForLibraryScopeWithUUID:(id)a0 withOptions:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestTextFeaturesForMomentLocalIdentifiers:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)writeQALog:(id)a0;
- (void)requestSnapshotServiceForPeopleCurationResultsWithGraphOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestInvalidateServiceTransientCachesWithContext:(id)a0 reply:(id /* block */)a1;
- (void)requestSuggestedContributionsForAssetsMetadata:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestUpNextMemoriesWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestBatchSuggestedRecipientsForMomentUUIDByAssetUUID:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestCurationDebugInformationForAssetCollectionWithLocalIdentifier:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestExternalAssetRelevanceProcessingWithContext:(id)a0 reply:(id /* block */)a1;
- (void)requestAssetCollectionsRelatedToMomentWithLocalIdentifier:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestAssetLocalIdentifiersWithinLocationRadiusOfAssetLocalIdentifier:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestNightlySuggestionsForPosterConfiguration:(id)a0 atDate:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)cancelOperationsWithIdentifiers:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestGraphInferencesSummaryWithMomentLocalIdentifiers:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestIconicSceneScoreForAssetLocalIdentifiers:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestHighlightEstimatesWithContext:(id)a0 reply:(id /* block */)a1;
- (void)requestEnrichmentWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestAssetCollectionsForPersonLocalIdentifiers:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestAvailableSuggestionTypeInfosWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestMusicCurationDebugInformationForSongWithAdamID:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestStartSharedLibrarySuggestionResultWithContext:(id)a0 reply:(id /* block */)a1;
- (void)requestAssetCollectionsRelatedToAssetCollectionWithLocalIdentifier:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestRelationshipInferencesForPersonLocalIdentifiers:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestWallpaperPropertiesForAssets:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)generateSuggestionsWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestOnDemandFaceCropsForFaceLocalIdentifiers:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestAssetRevGeocodingWithContext:(id)a0 reply:(id /* block */)a1;
- (void)runPerformanceTest:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestGraphInferencesSummaryWithDateInterval:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestConfidenceByMomentLocalIdentifierForMeaning:(id)a0 useAlternativeMeaningEdge:(BOOL)a1 onlyHighPrecision:(BOOL)a2 context:(id)a3 reply:(id /* block */)a4;
- (void)dumpAnalysisStatusWithContext:(id)a0 reply:(id /* block */)a1;
- (void)requestEnergyStatusWithContext:(id)a0 reply:(id /* block */)a1;
- (void)requestTitleForCollectionMomentListWithLocalIdentifier:(id)a0 format:(long long)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestSuggestionInfosWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestUtilityAssetInformationWithContext:(id)a0 reply:(id /* block */)a1;
- (void)requestSuggestedRecipientsForAssetLocalIdentifiers:(id)a0 momentLocalIdentifiers:(id)a1 options:(id)a2 context:(id)a3 reply:(id /* block */)a4;
- (void)requestAssetLocalIdentifiersWithSceneOverlapFromAssetLocalIdentifier:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestAssetRevGeocodingForAssetLocalIdentifiers:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestFlexMusicCurationForAssetCollectionLocalIdentifier:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (BOOL)validateOperation:(id)a0 forConnection:(id)a1;
- (void)simulateMemoriesNotificationWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)notifyWhenGraphReadyWithCoalescingIdentifier:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestDiscoveryFeedItemsWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestGraphServiceStatusWithContext:(id)a0 reply:(id /* block */)a1;
- (void)requestAssetLocalIdentifiersByCityNameWithContext:(id)a0 reply:(id /* block */)a1;
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenMomentForLocalIdentifier:(id)a0 andRelatedResultsForLocalIdentifiers:(id)a1 relatedType:(unsigned long long)a2 additionalSnapshotSummaryInfo:(id)a3 context:(id)a4 reply:(id /* block */)a5;
- (void)requestCurationDebugInformationForAsset:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)runModelInferenceForFingerprintVersion:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestGraphModelResultWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestGenerateDefaultRulesForLibraryScopeWithLocalIdentifier:(id)a0 withOptions:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestSharingMessageSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestGraphRebuildFractionCompletedWithContext:(id)a0 reply:(id /* block */)a1;
- (void)requestCacheSongSourceWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)forceBackgroundAnalysisTasksWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestMusicCurationDebugInformationForAssetCollectionWithLocalIdentifier:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestSnapshotServiceForRelatedWithAssetLocalIdentifier:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestAssetCollectionsRelatedToPersonLocalIdentifiers:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestKeyAssetLocalIdentifierForPrototypeCategory:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestMusicCacheStatusWithContext:(id)a0 reply:(id /* block */)a1;
- (void)requestSummaryCurationForHighlightLocalIdentifier:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)generateMemoriesWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestSuggestedPersonsWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)exportWallpaperForAssets:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestSortedArrayOfPersonLocalIdentifiers:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestSocialGroupsOverlappingPersonLocalIdentifiers:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestGraphServicePerformsQueryWithContext:(id)a0 query:(id)a1 reply:(id /* block */)a2;
- (void)requestSharingSuggestionDebugInformationForAssetCollectionLocalIdentifier:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestTitleForPersonLocalIdentifiers:(id)a0 format:(long long)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestSnapshotServiceForRelatedResultsWithGraphOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestMemoryDebugInformationForMemoryWithLocalIdentifier:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (id)error;
- (void)requestReprocessSuggestionsOnLibraryScopeRulesChangeWithContext:(id)a0 reply:(id /* block */)a1;
- (void)requestDefaultsObjectForKey:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestMusicCatalogAdamIDsForPurchasedSongID:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestAllSocialGroupsForPersonLocalIdentifier:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestUpdatePetIdentitiesWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestMeaningScoreDebugDescriptionForMomentLocalIdentifier:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestTitleForAssetCollectionWithLocalIdentifier:(id)a0 format:(long long)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)requestSyndicationProcessingWithOptions:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)requestAssetCollectionsRelatedToAssetWithLocalIdentifier:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)notifyLibraryAvailableAtURL:(id)a0;
- (void)requestInferredMePersonLocalIdentifierWithErrorForContext:(id)a0 reply:(id /* block */)a1;
- (void)faceCandidatesforKeyFaceForPersonsWithLocalIdentifiers:(id)a0 context:(id)a1 reply:(id /* block */)a2;
- (void)personPromoterStatusWithContext:(id)a0 reply:(id /* block */)a1;
- (void)processPersonsWithContext:(id)a0 reply:(id /* block */)a1;
- (void)rebuildPersonsWithContext:(id)a0 reply:(id /* block */)a1;
- (void)reclusterFacesWithContext:(id)a0 reply:(id /* block */)a1;
- (void)requestSuggestedMePersonIdentifierWithContext:(id)a0 reply:(id /* block */)a1;
- (void)resetFaceClassificationModelWithContext:(id)a0 reply:(id /* block */)a1;
- (void)suggestPersonsForPersonWithLocalIdentifier:(id)a0 toBeConfirmedPersonSuggestions:(id)a1 toBeRejectedPersonSuggestions:(id)a2 context:(id)a3 reply:(id /* block */)a4;
- (void)updateKeyFacesOfPersonsWithLocalIdentifiers:(id)a0 forceUpdate:(BOOL)a1 context:(id)a2 reply:(id /* block */)a3;
- (void)validateClusterCacheWithContext:(id)a0 reply:(id /* block */)a1;
- (void)upgradePosterConfigurationWithAssetDirectory:(id)a0 options:(id)a1 context:(id)a2 reply:(id /* block */)a3;

@end
