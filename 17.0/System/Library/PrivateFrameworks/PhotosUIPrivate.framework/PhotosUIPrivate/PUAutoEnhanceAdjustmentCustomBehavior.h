@class PUAdjustmentsDataSource, NSString;

@interface PUAutoEnhanceAdjustmentCustomBehavior : NSObject <PUAdjustmentCustomBehavior>

@property (weak, nonatomic) PUAdjustmentsDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dataSource:(id)a0 adjustmentInfo:(id)a1 setEnabled:(BOOL)a2 completionHandler:(id /* block */)a3;

@end
