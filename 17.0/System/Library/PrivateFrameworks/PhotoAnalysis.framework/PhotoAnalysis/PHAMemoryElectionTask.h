@class NSString, PGFeature, CLLocation, NSDate;

@interface PHAMemoryElectionTask : NSObject <PHATask>

@property (retain, nonatomic) NSDate *universalDate;
@property (retain, nonatomic) CLLocation *location;
@property (nonatomic) BOOL userInitiated;
@property (nonatomic) BOOL createTransientMemories;
@property (nonatomic) BOOL forceNotification;
@property (nonatomic) unsigned long long requestedCategory;
@property (nonatomic) unsigned long long requestedTriggerType;
@property (retain, nonatomic) PGFeature *requestedFeature;
@property (retain, nonatomic) NSString *requestedUniqueMemoryIdentifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) double period;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) BOOL didProduceContent;
@property (readonly, nonatomic) double incrementalWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_filterMemoriesWithAcceptableUserFeedback:(id)a0 allMemoriesFetchResult:(id)a1 photoLibrary:(id)a2;
+ (id)_filterSuggestionsToFeatureBasedOnUserFeedbackForSuggestionsToFeature:(id)a0 sugestionsFetchResult:(id)a1 photoLibrary:(id)a2;
+ (id)_userFeedbackCalculatorWithPhotoLibrary:(id)a0;
+ (void)findAndSetFeaturedStateForMemoriesAndSuggestionsIfNeededInPhotoLibrary:(id)a0 loggingConnection:(id)a1;
+ (void)findMemoriesAndSetFeaturedStateIfNeededInPhotoLibrary:(id)a0 loggingConnection:(id)a1;
+ (void)findMemoriesAndSetNeverFeatureStateIfNeededInPhotoLibrary:(id)a0 loggingConnection:(id)a1;
+ (void)findSuggestionsAndSetFeaturedStateIfNeededInPhotoLibrary:(id)a0 loggingConnection:(id)a1;
+ (BOOL)reloadAlbumWidgetTimelineWithLoggingConnection:(id)a0 error:(id *)a1;
+ (BOOL)reloadForYouWidgetTimelineWithLoggingConnection:(id)a0 error:(id *)a1;
+ (void)sendElectedMemoriesPipelineAnalyticsEventWithCountsOfMemories:(id)a0 loggingConnection:(id)a1 analytics:(id)a2;
+ (void)sendGeneratedMemoriesPipelineAnalyticsEventWithCountsOfMemories:(id)a0 loggingConnection:(id)a1 analytics:(id)a2;
+ (void)sendMemoryTriggersAnalyticsEventWithElectedMemoryType:(id)a0 triggerType:(id)a1 loggingConnection:(id)a2 analytics:(id)a3;
+ (void)sendNotifiedMemoriesPipelineAnalyticsEventWithMemoryType:(id)a0 loggingConnection:(id)a1 analytics:(id)a2;
+ (void)sendTriggeredMemoriesPipelineAnalyticsEventWithCountsOfMemories:(id)a0 loggingConnection:(id)a1 analytics:(id)a2;

- (id)init;
- (int)priority;
- (void)timeoutFatal:(BOOL)a0;
- (id)incrementalKey;
- (void).cxx_destruct;
- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;
- (BOOL)currentPlatformIsSupported;
- (id)taskClassDependencies;
- (BOOL)shouldRunWithGraphManager:(id)a0;
- (id)_electorConfigurationForExistingMemories:(id)a0 graphManager:(id)a1 loggingConnection:(id)a2;
- (id)_recentlySuggestedMoodsFromExistingMemoriesSortedByCreationDate:(id)a0;
- (void)collectMetricsOnElectedEnrichedMemories:(id)a0 loggingConnection:(id)a1 analytics:(id)a2;
- (void)collectMetricsOnExistingMemories:(id)a0 loggingConnection:(id)a1 analytics:(id)a2;
- (void)collectMetricsOnMemoriesInGraphWithWorkingContext:(id)a0 loggingConnection:(id)a1 analytics:(id)a2;
- (void)handleNotificationsForMemories:(id)a0 graphManager:(id)a1 userFeedbackCalculator:(id)a2 loggingConnection:(id)a3;
- (void)runWithGraphManager:(id)a0 progressReporter:(id)a1 reply:(id /* block */)a2;

@end
