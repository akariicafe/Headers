@class NSNumber, NSNumberFormatter, NSString;

@interface HKInteractiveChartNumberData : NSObject <HKGraphSeriesChartData>

@property (retain, nonatomic) NSNumber *value;
@property (retain, nonatomic) NSNumberFormatter *numberFormatter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
