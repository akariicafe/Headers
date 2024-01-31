@class NSString, NSArray, NSObject;
@protocol OS_dispatch_queue, DNDSLifetimeMonitorDataSource, DNDSLifetimeMonitorDelegate;

@interface DNDSBaseLifetimeMonitor : NSObject <DNDSSysdiagnoseDataProvider, DNDSLifetimeMonitor>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *activeLifetimeAssertionUUIDs;
@property (weak, nonatomic) id<DNDSLifetimeMonitorDataSource> dataSource;
@property (weak, nonatomic) id<DNDSLifetimeMonitorDelegate> delegate;

+ (Class)lifetimeClass;

- (id)init;
- (void)dealloc;
- (void)refreshMonitorForDate:(id)a0;
- (id)updateForModeAssertions:(id)a0 date:(id)a1;
- (id)sysdiagnoseDataForDate:(id)a0 redacted:(BOOL)a1;
- (void).cxx_destruct;
- (id)sysdiagnoseDataIdentifier;
- (void)refreshMonitorFromQueueForDate:(id)a0;

@end
