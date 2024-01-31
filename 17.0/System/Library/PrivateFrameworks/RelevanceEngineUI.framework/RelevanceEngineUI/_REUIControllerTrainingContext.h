@protocol _REUIControllerTrainingContextDelegate;

@interface _REUIControllerTrainingContext : REUITrainingContext

@property (nonatomic) double maximumNegativeDwellTime;
@property (nonatomic) double minimumPositiveDwellTime;
@property (nonatomic) unsigned long long onScreenElementCount;
@property (weak, nonatomic) id<_REUIControllerTrainingContextDelegate> delegate;

- (void).cxx_destruct;
- (BOOL)elementIsAvailable:(id)a0;
- (id)elementsOrdered:(unsigned long long)a0 relativeToElement:(id)a1;
- (id)interactionTypeForElement:(id)a0;

@end
