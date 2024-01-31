@class NSString, NSSet, ATXSuggestedPagesTunableConstants;

@interface ATXModeFaceComplicationHeuristicDataSource : NSObject <ATXModeFaceComplicationDataSource> {
    NSSet *_allComplicationDescriptors;
    NSSet *_allWidgetDescriptors;
    ATXSuggestedPagesTunableConstants *_suggestedPagesTunableConstants;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_addSystemSmallWidgetWithExtension:(id)a0 kind:(id)a1 container:(id)a2 score:(double)a3 to:(id)a4;
- (id)init;
- (id)_landscapeComplicationsForWorkMode;
- (void)_addComplicationWithFamily:(long long)a0 extension:(id)a1 kind:(id)a2 container:(id)a3 score:(double)a4 to:(id)a5;
- (BOOL)_hasTVInterest;
- (id)_complicationsForMindfulnessMode;
- (id)provideLandscapeComplicationsForSuggestedFaceType:(long long)a0 environment:(id)a1;
- (id)_complicationsForWorkMode;
- (id)_landscapeComplicationsForGamingMode;
- (void).cxx_destruct;
- (id)_complicationsForReadingMode;
- (id)provideComplicationsForSuggestedFaceType:(long long)a0 environment:(id)a1;
- (id)_landscapeComplicationsForReadingMode;
- (id)_landscapeComplicationsForExerciseMode;
- (id)_complicationsForPersonalMode;
- (id)_landscapeComplicationsForSleepMode;
- (id)_complicationsForGamingMode;
- (id)_complicationsForSleepMode;
- (id)_complicationsForDrivingMode;
- (id)_landscapeComplicationsForPersonalMode;
- (BOOL)_hasSignificantHomeAccessoryEvents;
- (BOOL)_hasSignificantStocksEvents;
- (id)_landscapeComplicationsForMindfulnessMode;
- (id)_landscapeComplicationsForDrivingMode;
- (BOOL)_hasSignificantRemindersEvents;
- (id)_complicationsForExerciseMode;

@end
