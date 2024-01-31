@class NSArray, CoreTelephonyClient, NSObject;
@protocol OS_dispatch_queue;

@interface WFCellularPlansManager : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) CoreTelephonyClient *client;
@property (readonly, nonatomic) NSArray *allPlans;

+ (id)dataRateToRadioAccessTechnologyModeMapping;
+ (id)modesFromDataRate:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)contexts;
- (BOOL)setDefaultDataLineToPlan:(id)a0 error:(id *)a1;
- (BOOL)resetCellularDataStatisticsWithError:(id *)a0;
- (BOOL)setAutomaticDataLineSwitching:(BOOL)a0 error:(id *)a1;
- (BOOL)setDefaultVoiceLineToPlan:(id)a0 error:(id *)a1;
- (BOOL)setPlanStatus:(BOOL)a0 forPlan:(id)a1 error:(id *)a2;

@end
