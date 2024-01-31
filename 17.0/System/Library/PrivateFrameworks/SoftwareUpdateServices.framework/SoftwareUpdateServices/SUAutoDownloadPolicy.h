@interface SUAutoDownloadPolicy : SUDefaultDownloadPolicy

- (id)initWithDescriptor:(id)a0;
- (BOOL)isPowerRequired;
- (BOOL)allowExpensiveNetwork;
- (BOOL)batteryPolicySatisfied;
- (id)computAutoDownloadEndDateFromDate:(id)a0;
- (id)computeTimeOfWifiOnlyPeriodEndFromDate:(id)a0;
- (id)createSpaceOptions;
- (BOOL)is5GDownloadAllowed;
- (BOOL)isDownloadAllowableForCellular;
- (id)minimumPowerRequirement;
- (unsigned long long)wifiOnlyPeriodInDays;

@end
