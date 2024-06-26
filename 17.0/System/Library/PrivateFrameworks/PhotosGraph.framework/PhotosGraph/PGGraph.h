@class PGGraphLocationCountyNodeCollection, PGMessageProfile, NSSet, NSDictionary, PGGraphLocationStateNodeCollection, PGGraphInfoNode, NSDateFormatter, PGGraphLocationCityNodeCollection, NSObject, PGGraphLocationCountryNodeCollection;
@protocol OS_dispatch_queue;

@interface PGGraph : MAGraph {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _supersetLock;
    PGGraphLocationCityNodeCollection *_supersetCityNodes;
    PGGraphLocationCountyNodeCollection *_supersetCountyNodes;
    PGGraphLocationStateNodeCollection *_supersetStateNodes;
    PGGraphLocationCountryNodeCollection *_supersetCountryNodes;
    PGGraphLocationCityNodeCollection *_interestingCityNodes;
    NSDictionary *_zeroKeywordMappingByMeaningLabel;
}

@property (readonly, nonatomic) NSSet *musicSessions;
@property (readonly, nonatomic) NSDictionary *zeroKeywordMappingByMeaningLabel;
@property (readonly, nonatomic) NSSet *supersets;
@property (readonly, nonatomic) PGGraphLocationCityNodeCollection *supersetCityNodes;
@property (readonly, nonatomic) PGGraphLocationCountyNodeCollection *supersetCountyNodes;
@property (readonly, nonatomic) PGGraphLocationStateNodeCollection *supersetStateNodes;
@property (readonly, nonatomic) PGGraphLocationCountryNodeCollection *supersetCountryNodes;
@property (readonly) PGGraphInfoNode *infoNode;
@property (readonly, nonatomic) NSDateFormatter *dateFormatter;
@property (readonly, nonatomic) long long librarySizeRange;
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *graphQueue;
@property (readonly) BOOL isOnGraphQueue;
@property (retain, nonatomic) PGMessageProfile *messageProfile;

+ (id)defaultSpecification;
+ (id)graphWithVisualString:(id)a0 error:(id *)a1;
+ (id)stellarMeanings;
+ (id)_closestRelationshipEdgeLabelForPersonNode:(id)a0 andOtherPersonNode:(id)a1;
+ (id)_findParentMeaningLabelForMeaningLabel:(id)a0 inTree:(id)a1 currentParent:(id)a2;
+ (id)_graphNodePOILabelByPlaceType;
+ (id)_meaningLabelTree;
+ (id)_personClosestToMeBetweenPersonNode:(id)a0 andOtherPersonNode:(id)a1;
+ (void)_traverseMeaningLabelsInTree:(id)a0 usingBlock:(id /* block */)a1;
+ (void)_traverseMeaningLabelsUsingBlock:(id /* block */)a0;
+ (id)allMeaningfulMeanings;
+ (id)assetPropertySetsForIngest;
+ (id)availableInferredMeaningLabels;
+ (id)defaultMatchingSortDescriptors;
+ (id)frequentMeaningLabels;
+ (BOOL)graphExistsAtURL:(id)a0;
+ (BOOL)graphExistsWithName:(id)a0 parentDirectoryURL:(id)a1;
+ (id)graphURLForName:(id)a0 parentDirectoryURL:(id)a1;
+ (id)lessMeaningfulMeanings;
+ (long long)librarySizeRangeForNumberOfAssets:(unsigned long long)a0;
+ (id)matchingBlockedSceneLabels;
+ (id)matchingWeightToDictionary;
+ (unsigned long long)meaningForMeaningLabel:(id)a0;
+ (id)meaningLabelForMeaning:(unsigned long long)a0;
+ (id)mostSignificantMeaningLabels;
+ (id)parentMeaningLabelForMeaningLabel:(id)a0;
+ (id)poiLabelForPOIType:(id)a0;
+ (id)preciseMeaningNodeForMeaningLabel:(id)a0 meaningfulEvent:(id)a1;
+ (id)socialGroupPeopleSortDescriptorForSocialGroupNode:(id)a0;
+ (void)traverseParentMeaningsForMeaningLabel:(id)a0 usingBlock:(id /* block */)a1;
+ (id)veryMeaningfulMeanings;

- (BOOL)copyToURL:(id)a0;
- (id)meaningfulMomentNodesSortedByDate;
- (id)highlightForHighlightNode:(id)a0 inPhotoLibrary:(id)a1;
- (id)children;
- (id)musicGenreDistributionUsingTaggedGenres:(BOOL)a0;
- (id)commonSocialGroupNodesForPersonNodes:(id)a0 withThreshold:(double)a1;
- (id)longTripNodes;
- (unsigned long long)numberOfSocialGroupNodes;
- (id)seasonNodeForLocalDate:(id)a0;
- (id)dateNodesForLocalDateInterval:(id)a0;
- (id)allSocialGroupsForPersonLocalIdentifier:(id)a0 options:(id)a1;
- (id)_momentNodesForDateComponents:(id)a0 error:(id *)a1;
- (id)socialGroupsIdentifiersFromSocialGroupNodesWithPersonNodesBySocialGroupNode:(id)a0 shouldIncludeMeNode:(BOOL)a1 simulateMeNodeNotSet:(BOOL)a2;
- (id)friends;
- (id)_socialGroupNodeForPersonNodes:(id)a0 searchWithTolerance:(BOOL)a1;
- (BOOL)isBestPairSocialGroup:(id)a0;
- (unsigned long long)_peopleCountWithoutMe:(id)a0 focusOnNodes:(id)a1;
- (id)matchEvent:(id)a0 withEvent:(id)a1 options:(id)a2;
- (BOOL)isPairSocialGroup:(id)a0;
- (BOOL)singlePersonBelongsToSocialGroupOfMaxSize:(id)a0 groups:(id)a1 maxSize:(unsigned long long)a2;
- (void)enumeratePersonNodesIncludingMe:(BOOL)a0 withBlock:(id /* block */)a1;
- (id)meaningNodes;
- (id)dayOfWeekNodeForDayOfWeek:(long long)a0;
- (void)enumerateMusicSessionNodesUsingBlock:(id /* block */)a0;
- (unsigned long long)numberOfMomentNodes;
- (BOOL)singlePersonGroupIsInSocialGroups:(id)a0 groups:(id)a1;
- (id)_commonAreaNodesBetweenAddressNode:(id)a0 andAddressNode:(id)a1;
- (void)invalidateSupersetCaches;
- (id)_commonAreaNodesBetweenAddressAreaNodes:(id)a0 andAddressNode:(id)a1;
- (id)_timeMatchingIdsToScoresFromEvent:(id)a0 options:(id)a1;
- (id)bestSocialGroupNodes;
- (void)enumerateHighlightGroupNodesWithBlock:(id /* block */)a0;
- (BOOL)_enumerateMomentNodesForAssetCollection:(id)a0 paddingTime:(double)a1 error:(id *)a2 enumerationBlock:(id /* block */)a3;
- (float)normalizeFeatureValue:(float)a0 average:(float)a1 featureValues:(id)a2 factor:(float)a3;
- (id)bestFittingAreaNodeFromAreaNodes:(id)a0;
- (id)personLocalIdentifiersBySocialGroupUUIDWithPersonNodesBySocialGroupNode:(id)a0 shouldIncludeMeNode:(BOOL)a1 simulateMeNodeNotSet:(BOOL)a2;
- (id)nodeLabelForHighlightType:(unsigned short)a0;
- (id)socialGroupNodesSortedByImportance;
- (id)interestingCityNodes;
- (id)_peopleMatchingResultFromEvent:(id)a0 matchedEvent:(id)a1 presentPeopleCountForEvent:(unsigned long long)a2 presentPeopleCountForMatchedEvent:(unsigned long long)a3 commonPeople:(id)a4 relationshipScoreCache:(id)a5 needsKeywords:(BOOL)a6;
- (id)_peopleWithoutMe:(id)a0 focusOnNodes:(id)a1;
- (BOOL)eventIsVeryMeaningful:(id)a0;
- (void)enumerateSocialGroupsIncludingMeNode:(BOOL)a0 validGroupsBlock:(id /* block */)a1 invalidGroupsBlock:(id /* block */)a2 averageWeight:(out float *)a3;
- (id)_fuzzyMomentLookupForMomentNode:(id)a0 inPhotoLibrary:(id)a1 error:(id *)a2;
- (id)sortedSocialGroupNodesWithMomentNodes:(id)a0;
- (id)relevantMomentNodesForSocialGroupProcessing;
- (id)_peopleMatchingIdsToResultsFromEvent:(id)a0 options:(id)a1;
- (id)momentForMomentNode:(id)a0 inPhotoLibrary:(id)a1;
- (id)matchPersonNodes:(id)a0 sortDescriptors:(id)a1;
- (id)_sceneMatchingIdsToScoresFromEvent:(id)a0 options:(id)a1;
- (unsigned long long)numberOfPersonNodesIncludingMe:(BOOL)a0;
- (id)dateNodesForWeekOfYear:(long long)a0;
- (id)defaultHighlightNodes;
- (void)reportMetricsLogsWithAnalytics:(id)a0 photoLibrary:(id)a1;
- (id)_placeMatchingFromEvent:(id)a0 toEvent:(id)a1 options:(id)a2;
- (void)enumeratePublicEventNodesUsingBlock:(id /* block */)a0;
- (id)_peopleMatchingFromEvent:(id)a0 toEvent:(id)a1 options:(id)a2;
- (id)poiNodes;
- (id)_strictMomentNodeLookupForAssetCollection:(id)a0 error:(id *)a1;
- (double)libraryDuration;
- (id)momentsForMomentNodes:(id)a0 inPhotoLibrary:(id)a1 sortChronologically:(BOOL)a2;
- (void)_reportLibraryWithAnalytics:(id)a0;
- (id)bestMeaningLabelForMeaningfulEvent:(id)a0;
- (double)peopleDistance:(id)a0 withSecondBaseGroup:(id)a1 threshold:(double)a2 factor:(double)a3;
- (id)closestMomentNodeForLocalDate:(id)a0;
- (id)_coreSceneMatchingFromEvent:(id)a0 toEvent:(id)a1 options:(id)a2;
- (id)momentNodesOverlappingLocalDateInterval:(id)a0;
- (void)_reportDisambiguatedLocationsWithAnalytics:(id)a0;
- (id)_previousSeasonForSeason:(id)a0;
- (id)momentNodesWithMeaning:(unsigned long long)a0;
- (id)coworkers;
- (id)_eventsFromEvents:(id)a0 withTargetDomain:(unsigned short)a1;
- (double)relationshipScoreForPersonNode:(id)a0;
- (id)_locationMatchingIdsToScoresFromEvent:(id)a0 options:(id)a1;
- (id)_eventMatchingIdsToScoresFromEvent:(id)a0 options:(id)a1;
- (id)_eventMatchingFromEvent:(id)a0 toEvent:(id)a1 options:(id)a2;
- (id)previousSeasonNodeForSeasonNode:(id)a0;
- (id)momentNodeForMoment:(id)a0;
- (id)trips;
- (id)staticGraphSchema;
- (id)dateNodeFilterForLocalDateInterval:(id)a0;
- (BOOL)isSocialGroupEligible:(unsigned long long)a0 longevity:(float)a1;
- (id)_strictMomentLookupForMomentNode:(id)a0 inPhotoLibrary:(id)a1;
- (id)businessNodes;
- (void)_checkCanRead;
- (void)_reportMobilityWithAnalytics:(id)a0;
- (void)enumerateCelebratedHolidayNodesUsingBlock:(id /* block */)a0;
- (id)allTripNodes;
- (id)dateNodeNameWithLocalDate:(id)a0;
- (id)socialGroupNodeForPersonNodes:(id)a0;
- (id)aggregationHighlightTypeNode;
- (void)enumerateBusinessNodesUsingBlock:(id /* block */)a0;
- (void)enumerateAreaNodesUsingBlock:(id /* block */)a0;
- (id)allTimeYearsNodes;
- (id)celebratedHolidays;
- (id)personNodesForPersonLocalIdentifiers:(id)a0;
- (id)dateNodeForLocalDate:(id)a0;
- (id)celebratedHolidayNodes;
- (id)dateNodesForWeekOfMonth:(long long)a0;
- (void)invalidateProcessingCaches;
- (id)personNodeForPersonLocalIdentifier:(id)a0;
- (id)highlightGroupNodes;
- (id)_firstLocationNodeFromAddressNode:(id)a0 inLocationNodes:(id)a1;
- (id)dayNodeForDay:(long long)a0;
- (id)yearNodeForYear:(long long)a0;
- (void)_enumerateMeaningfulEventsWithMeaningLabel:(id)a0 visitedMeaningfulEvents:(id)a1 usingBlock:(id /* block */)a2;
- (id)_momentNodeForAssetCollection:(id)a0 error:(id *)a1;
- (id)highlightGroupNodesSortedByDate;
- (BOOL)hasSocialGroups;
- (id)dateNodesForLocalDate:(id)a0;
- (float)recencyFeature:(double)a0;
- (void)_reportDeviceOwnerWithAnalytics:(id)a0 photoLibrary:(id)a1;
- (id)_corePlaceMatchingIdsToScoresFromEvent:(id)a0 toEvent:(id)a1 options:(id)a2;
- (id)dateNodesForYear:(long long)a0;
- (id)_sceneMatchingFromEvent:(id)a0 toEvent:(id)a1 options:(id)a2;
- (void).cxx_destruct;
- (id)momentNodesForPersonNodes:(id)a0;
- (void)enumeratePeopleClustersWithLinkage:(unsigned long long)a0 threshold:(double)a1 includingMeNode:(BOOL)a2 socialGroupsVersion:(unsigned long long)a3 singlePersonGroups:(out id *)a4 withBlock:(id /* block */)a5;
- (id)momentNodesSortedByDateFromMomentNodes:(id)a0;
- (id)inferredUserLocales;
- (id)publicEventNodes;
- (id)_timeMatchingFromEvent:(id)a0 toEvent:(id)a1 options:(id)a2;
- (long long)libraryAge;
- (id)_createZeroKeywordMappingByMeaningLabel;
- (id)momentNodes;
- (id)onGoingTripHighlightTypeNode;
- (unsigned long long)_cluePeopleForRelationships:(id)a0;
- (id)meNodeCollection;
- (BOOL)saveToURL:(id)a0;
- (id)socialGroupsOverlappingPersonLocalIdentifiers:(id)a0;
- (id)dayHighlightNodes;
- (id)_coreEventMatchingFromEvent:(id)a0 toEvent:(id)a1 options:(id)a2;
- (void)enumerateMeaningfulEventsWithMeaning:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)_enumerateMomentForMomentNode:(id)a0 inPhotoLibrary:(id)a1 paddingTime:(double)a2 enumerationBlock:(id /* block */)a3;
- (void)enumeratePeopleClustersIncludingMeNode:(BOOL)a0 socialGroupsVersion:(unsigned long long)a1 singlePersonGroups:(out id *)a2 withBlock:(id /* block */)a3;
- (id)defaultHighlightTypeNode;
- (id)matchEvent:(id)a0 options:(id)a1;
- (id)dayOfWeekNodes;
- (id)sceneNodeForSceneName:(id)a0;
- (double)longevity:(id)a0;
- (id)familyMembers;
- (id)highlightNodeForHighlight:(id)a0;
- (id)dayHighlightNodesSortedByDate;
- (id)aggregationNodes;
- (void)invalidateMemoryCaches;
- (id)commonSocialGroupNodesForPersonNodes:(id)a0;
- (id)_personNodeIntersectingSocialGroups:(id)a0;
- (double)_scoreForPlaceSubDomain:(unsigned short)a0;
- (double)averageTopMomentTimes:(id)a0 numberOfMoments:(unsigned long long)a1;
- (id)dateNodesIgnoringYearForLocalDate:(id)a0;
- (id)favoritedPersonNodesIncludingMe:(BOOL)a0;
- (id)weekends;
- (id)onGoingTripNodes;
- (void)enumerateDayHighlightNodesWithBlock:(id /* block */)a0;
- (id)mainUrbanCityNodes;
- (id)_closestLocationNodeFromAddressNode:(id)a0 toAddressNode:(id)a1;
- (id)partners;
- (id)meaningfulEventNodeForUUID:(id)a0;
- (id)longTripHighlightTypeNode;
- (id)_fuzzyMomentNodeLookupForAssetCollection:(id)a0 error:(id *)a1;
- (void)enumerateMomentNodesWithMeaning:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (BOOL)isSharedLibraryEnabled;
- (id)fetchPersonNodesBySocialGroupNodeForSocialGroups:(id)a0;
- (id)personNodesIncludingMe:(BOOL)a0;
- (id)localDatesForMomentNode:(id)a0;
- (id)initWithSpecification:(id)a0;
- (unsigned long long)_countOfDistinctSocialGroups:(id)a0;
- (double)momentsCountDistance:(id)a0 withSecondBaseGroup:(id)a1 withSubsetBias:(double)a2 withDistanceThreshold:(double)a3 withIntersectionBias:(double)a4 withKey:(id)a5;
- (id)maximalSocialGroupsOverlappingPersonLocalIdentifiers:(id)a0;
- (void)enumerateSocialGroupsWithBlock:(id /* block */)a0;
- (id)inferMeNodeFromSocialGroups;
- (id)fetchPersonNodesBySocialGroupNodeForSocialGroupNodes:(id)a0;
- (id)momentNodesSortedByDate;
- (double)_distanceForLocationLabel:(id)a0;
- (id)meaningsFromMeaningfulEvent:(id)a0;
- (id)_coreLocationMatchingFromEvent:(id)a0 toEvent:(id)a1 options:(id)a2;
- (id)monthNodeForMonth:(long long)a0;
- (id)dateNodesForMonth:(long long)a0;
- (void)_reportBusinessItemsWithAnalytics:(id)a0;
- (id)interestingAreaNodes;
- (void)enumerateMeaningsFromMeaningfulEvent:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)eventIsStellar:(id)a0;
- (void)enumerateSocialGroupsIncludingMeNode:(BOOL)a0 socialGroupsVersion:(unsigned long long)a1 simulateMeNodeNotSet:(BOOL)a2 validGroupsBlock:(id /* block */)a3 invalidGroupsBlock:(id /* block */)a4 averageWeight:(out float *)a5;
- (id)_locationMatchingFromEvent:(id)a0 toEvent:(id)a1 options:(id)a2;
- (id)_placeMatchingIdsToScoresFromEvent:(id)a0 options:(id)a1;
- (id)sceneNodesForSceneNames:(id)a0;
- (id)shortTripHighlightTypeNode;
- (BOOL)exportMatchMomentEventResults:(id)a0 relatedType:(unsigned long long)a1 focusOnNodes:(id)a2 toFileURL:(id)a3 error:(id *)a4;
- (id)meNode;
- (id)socialGroupsIdentifiersFromSocialGroupNodes:(id)a0 shouldIncludeMeNode:(BOOL)a1;
- (id)meNodeWithFallbackInferredMeNode;
- (id)initWithURL:(id)a0 persistenceOptions:(long long)a1 error:(id *)a2;
- (id)eventNodeForAssetCollection:(id)a0;
- (id)momentNodeForAsset:(id)a0;
- (id)shortTripNodes;
- (id)largeFrequentLocationNodes;
- (id)momentsResultForMomentNodes:(id)a0 inPhotoLibrary:(id)a1 sortChronologically:(BOOL)a2;
- (id)meaningfulEvents;
- (BOOL)isEmpty;
- (id)parents;
- (void)unloadMessageProfile;

@end
