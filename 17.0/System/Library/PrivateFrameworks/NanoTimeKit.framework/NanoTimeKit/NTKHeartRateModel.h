@class HKQuantitySample;
@protocol NTKHeartRateModelDelegate;

@interface NTKHeartRateModel : NSObject <NTKHeartRateQueryObserver>

@property (retain, nonatomic) HKQuantitySample *mostRecentHeartRate;
@property (readonly, weak, nonatomic) id<NTKHeartRateModelDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)manager:(id)a0 receivedLatestHeartRateSample:(id)a1;

@end
