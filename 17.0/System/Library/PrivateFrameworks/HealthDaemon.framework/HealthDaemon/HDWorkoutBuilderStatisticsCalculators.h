@class NSMutableDictionary;

@interface HDWorkoutBuilderStatisticsCalculators : NSObject <NSSecureCoding> {
    NSMutableDictionary *_calculatorsByTypeAndActivityUUID;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)allQuantityTypes;
- (id)calculatorForQuantityType:(id)a0 activityUUID:(id)a1;
- (void)enumerateCalculatorsForActivityUUID:(id)a0 handler:(id /* block */)a1;
- (void)enumerateCalculatorsForQuantityType:(id)a0 handler:(id /* block */)a1;
- (void)enumerateCalculatorsWithHandler:(id /* block */)a0;
- (void)setCalculator:(id)a0 forQuantityType:(id)a1 activityUUID:(id)a2;

@end
