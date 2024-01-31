@class NSString, NSObject;
@protocol OS_os_log, OS_dispatch_source, OS_dispatch_queue, PowerUISignalMonitorDelegate;

@interface PowerUIWalletSignalMonitor : NSObject <PowerUISignalMonitor>

@property (retain, nonatomic) id<PowerUISignalMonitorDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *waitForFinalChangeTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)monitorWithDelegate:(id)a0;
+ (id)wallet;

- (unsigned long long)signalID;
- (id)requiredFullChargeDate;
- (void)stopMonitoring;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)startMonitoring;
- (void)sourceInformationChangedNotification:(id)a0;
- (id)detectedSignals;

@end
