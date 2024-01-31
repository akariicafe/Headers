@class NSString, PLBatteryUIResponderService, NSMutableArray, NSDate;

@interface PLBatteryUIResponseTypeRecentUsageInsight : NSObject <PLBatteryUIResponseProtocol>

@property BOOL suggest;
@property (retain) NSDate *end;
@property double firstEntryTimestamp;
@property double lastUpgradeTimestamp;
@property double minTimeValBeforeUpgrade;
@property double maxTimeValBeforeUpgrade;
@property double minTimeValAfterUpgrade;
@property double maxTimeValAfterUpgrade;
@property double minDrainPercentBeforeUpgrade;
@property double energyThresholdForUpgradeInsight;
@property double foregroundTimeThresholdForUpgradeInsight;
@property (retain) NSMutableArray *batteryBreakdown_Last10Days;
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
- (double)getfirstEntryTimestampFromDb;
- (BOOL)didUpgrade;
- (BOOL)shouldShowSuggestionThroughOverrides;

@end
