@class NSArray, PLBatteryUIResponderService, NSString;

@interface PLBatteryUIResponseTypeAutoBrightnessSuggestion : NSObject <PLBatteryUIResponseProtocol>

@property BOOL suggest;
@property double energyPercent;
@property BOOL isALSEnabled;
@property BOOL hasALSPowerSaved;
@property (retain) NSArray *alsPowerSavedEntries;
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
- (BOOL)shouldShowSuggestionThroughOverrides;

@end
