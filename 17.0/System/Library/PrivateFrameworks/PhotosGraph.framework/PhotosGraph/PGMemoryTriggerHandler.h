@class NSString, NSArray, PHPhotoLibrary, CLSHolidayCalendarEventService, NSObject;
@protocol OS_os_log;

@interface PGMemoryTriggerHandler : NSObject <PGMemoryPlannerFutureSource> {
    NSArray *_allMemoryTriggers;
    NSObject<OS_os_log> *_loggingConnection;
    PHPhotoLibrary *_photoLibrary;
}

@property (readonly, nonatomic) CLSHolidayCalendarEventService *holidayService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)triggerScoreForTriggeredMemory:(id)a0;
+ (id)creationDateWithContext:(id)a0;
+ (id)fallbackTriggeredMemoriesWithContext:(id)a0 excludingTriggeredMemories:(id)a1 inGraph:(id)a2 holidayService:(id)a3;
+ (unsigned long long)maximumValidityPeriodForValidityIntervalByTriggerType:(id)a0 context:(id)a1;
+ (id)memoryNodesAllowedToBeFallbackFromMemoryNodes:(id)a0 withContext:(id)a1 inGraph:(id)a2 holidayService:(id)a3;
+ (id)personMemoryNodesFeaturingMeNodeInGraph:(id)a0;
+ (double)scoreForTriggerType:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)allTriggeredMemoriesWithContext:(id)a0 forTriggerType:(unsigned long long)a1 inGraph:(id)a2 progressReporter:(id)a3;
- (id)allTriggeredMemoriesWithContext:(id)a0 inGraph:(id)a1 progressReporter:(id)a2;
- (id)futureMemoriesForConfiguration:(id)a0 withGraph:(id)a1 progressReporter:(id)a2;
- (id)initWithLoggingConnection:(id)a0 photoLibrary:(id)a1 momentNodesWithBlockedFeatureCache:(id)a2;
- (id)relevantFeatureNodesInFeatureNodes:(id)a0 forTriggerType:(unsigned long long)a1;

@end
