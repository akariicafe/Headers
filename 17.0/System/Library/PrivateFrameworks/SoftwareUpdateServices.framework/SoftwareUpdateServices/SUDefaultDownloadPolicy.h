@class NSString, SUCarrierDownloadPolicyProperties, SUDescriptor, SUNetworkMonitor;

@interface SUDefaultDownloadPolicy : NSObject <SUDownloadPolicy>

@property (retain, nonatomic) SUCarrierDownloadPolicyProperties *carrierPolicy;
@property (nonatomic, getter=isCellularCapable) BOOL cellularCapable;
@property (retain, nonatomic) SUNetworkMonitor *networkMonitor;
@property (retain, nonatomic) SUDescriptor *descriptor;
@property (nonatomic) int cellularFeeAgreementStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDescriptor:(id)a0;
- (BOOL)isDownloadable;
- (void)dealloc;
- (BOOL)_inexpensiveHDM;
- (id)_stringForBool:(BOOL)a0;
- (BOOL)isPowerRequired;
- (BOOL)_isCellularCapable;
- (BOOL)_isDownloadableForNetworkType:(int)a0 error:(long long *)a1 cellularFeesApply:(BOOL *)a2 powerRequired:(BOOL *)a3;
- (BOOL)allowExpensiveNetwork;
- (BOOL)batteryPolicySatisfied;
- (BOOL)cellularDownloadFeesApply;
- (id)createSpaceOptions;
- (BOOL)hasEnoughDiskSpace;
- (BOOL)is5GDownloadAllowed;
- (BOOL)isDownloadAllowableForCellular;
- (BOOL)isDownloadAllowableForCellular2G;
- (BOOL)isDownloadAllowableForCellularIncludingInexpensiveHDM:(BOOL)a0;
- (BOOL)isDownloadAllowableForCellularRoaming;
- (BOOL)isDownloadAllowableForWiFi;
- (BOOL)isDownloadFreeForCellular;
- (BOOL)isDownloadableForCurrentNetworkConditions:(long long *)a0 cellularFeesApply:(BOOL *)a1;
- (BOOL)isDownloadableForCurrentNetworkConditions:(long long *)a0 cellularFeesApply:(BOOL *)a1 powerRequired:(BOOL *)a2;
- (BOOL)isSamePolicy:(id)a0;
- (id)minimumPowerRequirement;
- (unsigned long long)wifiOnlyPeriodInDays;

@end
