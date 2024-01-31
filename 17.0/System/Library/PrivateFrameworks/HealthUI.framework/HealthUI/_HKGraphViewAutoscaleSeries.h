@class HKAxis, NSMutableArray;

@interface _HKGraphViewAutoscaleSeries : NSObject

@property (readonly, nonatomic) long long autoscaleGroupRow;
@property (readonly, nonatomic) HKAxis *autoscaleYAxis;
@property (readonly, nonatomic) NSMutableArray *autoscaleSeries;

- (void).cxx_destruct;
- (void)addAutoscaleSeries:(id)a0;
- (id)initWithAutoscaleGroupRow:(long long)a0 autoscaleYAxis:(id)a1;

@end
