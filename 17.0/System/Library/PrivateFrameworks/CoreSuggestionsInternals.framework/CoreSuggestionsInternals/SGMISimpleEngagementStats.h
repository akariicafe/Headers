@class NSNumber;

@interface SGMISimpleEngagementStats : NSObject

@property (readonly, nonatomic) NSNumber *positiveEngagement;
@property (readonly, nonatomic) NSNumber *noEngagement;
@property (readonly, nonatomic) NSNumber *negativeEngagement;

- (void).cxx_destruct;
- (id)initWithPositiveEngagement:(id)a0 noEngagement:(id)a1 negativeEngagement:(id)a2;

@end
