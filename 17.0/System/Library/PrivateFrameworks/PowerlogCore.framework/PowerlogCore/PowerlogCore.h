@class NSDate, PPSCollectionOperator, PLAccountingOperator, PLCoreStorage, PPSCoreStorage, NSObject, PLCoreService, PLCoreAgent;
@protocol OS_os_transaction, OS_dispatch_source;

@interface PowerlogCore : NSObject {
    NSObject<OS_dispatch_source> *_fVMPressureSource;
}

@property (retain) NSObject<OS_os_transaction> *userRequestTransaction;
@property (readonly) NSDate *launchDate;
@property (readonly) PLCoreStorage *storage;
@property (readonly) PLAccountingOperator *accounting;
@property (readonly) PLCoreAgent *agents;
@property (readonly) PLCoreService *services;
@property (readonly) PPSCoreStorage *coreStorage;
@property (readonly) PPSCollectionOperator *collection;

+ (void)setupCore;
+ (BOOL)sharedCoreStarted;
+ (BOOL)allowRun;
+ (BOOL)isAudioAccessory;
+ (id)sharedCore;
+ (void)deprecateOldFullMode;
+ (BOOL)isDebugEnabled;
+ (BOOL)shouldSetupCore;

- (id)init;
- (void)startCore;
- (void)dealloc;
- (void)startCoreForTest;
- (void)stopCore;
- (void)setupForPreUnlockTelemetry;
- (void).cxx_destruct;
- (void)didRecieveMemoryPressureWarning;

@end
