@class NSString, CTXPCServiceSubscriptionContext, CoreTelephonyClient, NSArray, NSMutableDictionary, CTDataStatus, NSDictionary, NSMutableArray, NSObject, CTTelephonyNetworkInfo, NSNumber;
@protocol OS_nw_path_monitor;

@interface NPTCellularCollector : NSObject <CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientDataDelegate, NPTMetadataCollection>

@property (retain) CoreTelephonyClient *ctClient;
@property (retain) CTXPCServiceSubscriptionContext *context;
@property (retain) NSNumber *slotID;
@property (retain) CTDataStatus *dataStatus;
@property (retain) NSMutableArray *mutableCellChanges;
@property (retain) NSMutableArray *mutableDataStatusChanges;
@property (retain) NSMutableDictionary *servingCellInfo;
@property (retain) NSMutableDictionary *mutableMetadata;
@property (retain) CTTelephonyNetworkInfo *networkInfo;
@property BOOL stopCollectingMetadata;
@property (retain) NSObject<OS_nw_path_monitor> *pathMonitor;
@property (retain, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) NSArray *cellChanges;
@property (retain, nonatomic) NSArray *dataStatusChanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) id /* block */ metadataDidChangeHandler;
@property (retain) NSMutableDictionary *cachedMetadata;

+ (id)calculateMaxCellularTPutEstimates:(id)a0;
+ (id)getPreferredDataSlot;
+ (id)collectorName;

- (id)init;
- (void)cellChanged:(id)a0 cell:(id)a1;
- (id)getCellInfoForSlot:(id)a0;
- (id)getCellularMNCMCCDE;
- (void)estimateDidChange:(id)a0;
- (id)dualSimStatus;
- (id)signalStrengthMeasurements;
- (void)setUpPathMonitor:(id /* block */)a0;
- (void).cxx_destruct;
- (void)startCollectingWithCompletion:(id /* block */)a0;
- (id)getEstimateFromPath:(id)a0;
- (id)initWithSlotID:(id)a0;
- (id)fetchCellularTPutEstimates;
- (id)wrmBasebandMetrics;
- (void)stopCollecting;
- (void)dataStatus:(id)a0 dataStatusInfo:(id)a1;

@end
