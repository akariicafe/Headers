@class NSString;

@interface PUBrillianceAdjustmentCustomBehavior : NSObject <PUAdjustmentCustomBehavior>

@property BOOL calculatingStatistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dataSource:(id)a0 adjustmentInfo:(id)a1 modifyValue:(double)a2;
- (void)dataSource:(id)a0 adjustmentInfo:(id)a1 setEnabled:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)populateSmartToneStatisticsForDataSource:(id)a0 adjustmentInfo:(id)a1 completionHandler:(id /* block */)a2;

@end
