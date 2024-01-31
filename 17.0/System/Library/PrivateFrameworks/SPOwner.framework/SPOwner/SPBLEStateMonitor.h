@class NSString, CBCentralManager;
@protocol SPBLEStateMonitorDelegate;

@interface SPBLEStateMonitor : NSObject <CBCentralManagerDelegate>

@property (nonatomic) unsigned long long bleState;
@property (retain, nonatomic) CBCentralManager *centralManager;
@property (weak, nonatomic) id<SPBLEStateMonitorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)centralManagerDidUpdateState:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)notifyDelegate:(unsigned long long)a0;
- (void)startMonitoring;

@end
