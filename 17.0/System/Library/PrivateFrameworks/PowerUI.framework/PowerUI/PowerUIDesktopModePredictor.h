@class NSString, PowerUITrialManager, MLModel, NSDate, NSObject;
@protocol OS_os_log, _CDLocalContext, _DKKnowledgeQuerying;

@interface PowerUIDesktopModePredictor : NSObject <PowerUIPredictor>

@property (retain, nonatomic) NSString *defaultsDomain;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic) double threshold;
@property (retain, nonatomic) id<_DKKnowledgeQuerying> store;
@property (retain, nonatomic) id<_CDLocalContext> context;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } loadModelLock;
@property (retain, nonatomic) PowerUITrialManager *trialManager;
@property (readonly, retain, nonatomic) MLModel *model;
@property (retain, nonatomic) NSDate *pluginDate;
@property (nonatomic) double pluginBatteryLevel;
@property (nonatomic) double desktopEntryThreshold;

- (unsigned long long)modelVersion;
- (unsigned long long)predictorType;
- (void).cxx_destruct;
- (id)initWithDefaultsDomain:(id)a0 withContextStore:(id)a1 withKnowledgeStore:(id)a2 withTrialManager:(id)a3;
- (id)predictFullChargeDateWithBatteryLevel:(unsigned long long)a0;

@end
