@class NSString, NSObject;
@protocol ENRegionMonitorSourceDelegate;

@interface ENRegionTestDataSource : NSObject <ENRegionMonitorDataSource>

@property (weak, nonatomic) NSObject<ENRegionMonitorSourceDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopMonitoring;
- (void)dealloc;
- (void).cxx_destruct;
- (id)currentRegionVisit;
- (id)initWithDelegate:(id)a0;
- (void)startMonitoring;
- (void)regionChanged;

@end
