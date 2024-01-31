@class NWStatisticsManager, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface KernelStatisticsHandler : NSObject <NWStatisticsManagerDelegate, ConfigurableObjectProtocol>

@property (retain) NWStatisticsManager *nwStatManager;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property unsigned int coalescedReportPending;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)configureClass:(id)a0;

- (id)init;
- (int)configureInstance:(id)a0;
- (int)read:(id)a0 returnedValues:(id)a1;
- (void).cxx_destruct;
- (void)statisticsManager:(id)a0 didReceiveDirectSystemInformation:(id)a1;

@end
