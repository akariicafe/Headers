@class PLBatteryUIResponderService, NSString;

@interface PLBatteryUIResponseTypeNoteworthyInformation : NSObject <PLBatteryUIResponseProtocol>

@property BOOL hasNoteworthyInformation;
@property (retain) PLBatteryUIResponderService *responderService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configure:(id)a0;
- (void)run;
- (id)result;
- (void).cxx_destruct;
- (id)dependencies;
- (void)coalesce;
- (BOOL)getBUIVisitDefaultValue;
- (double)getDailyPercentDrainThresholdValue;
- (unsigned long long)getNumDaysAboveDrainThreshold:(double)a0;
- (unsigned long long)getNumDaysAboveDrainThresholdValue;
- (unsigned long long)getNumDaysBelowUISOCLevel:(double)a0 forLastNDays:(unsigned long long)a1;
- (unsigned long long)getNumDaysBelowUISOCLevelThresholdValue;
- (id)getResultFromCacheForSuggestionResponseType:(long long)a0;
- (id)getResultFromCacheForUISOCDrainResponseType;
- (unsigned long long)getUISOCLevelPercentThresholdValue;
- (BOOL)hasNoterworthyInformationThroughOverrides;
- (BOOL)hasRelevantSuggestion;

@end
