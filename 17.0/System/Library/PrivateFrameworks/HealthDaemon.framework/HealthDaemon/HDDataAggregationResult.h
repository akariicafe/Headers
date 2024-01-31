@class NSArray, HDDataAggregationState;

@interface HDDataAggregationResult : NSObject

@property (readonly, copy, nonatomic) HDDataAggregationState *aggregationState;
@property (readonly, copy, nonatomic) NSArray *consumedSensorData;
@property (readonly, copy, nonatomic) id /* block */ persistenceHandler;

- (void).cxx_destruct;
- (id)initWithResultingAggregationState:(id)a0 consumedSensorData:(id)a1 persistenceHandler:(id /* block */)a2;

@end
