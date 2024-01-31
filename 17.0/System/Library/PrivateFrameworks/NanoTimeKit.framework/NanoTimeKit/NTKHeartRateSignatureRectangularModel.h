@class HKHeartRateSummary;

@interface NTKHeartRateSignatureRectangularModel : NTKHeartRateModel

@property (retain, nonatomic) HKHeartRateSummary *mostRecentHeartRateSummary;

- (void).cxx_destruct;
- (void)manager:(id)a0 receivedLatestHeartRateSummary:(id)a1;

@end
