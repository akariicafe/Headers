@class NSArray, APOdmlXpcLifecycleHandler, NSOperationQueue, NSObject, NSMutableArray;
@protocol OS_xpc_object;

@interface APOdmlFeatureCalculatorManager : NSObject

@property (retain, nonatomic) NSObject<OS_xpc_object> *xpc_activity;
@property (retain, nonatomic) APOdmlXpcLifecycleHandler *lifeCycleHandler;
@property (retain, nonatomic) NSArray *placementTypes;
@property (retain, nonatomic) NSArray *assetManagerTypes;
@property (retain, nonatomic) NSMutableArray *calculatorErrors;
@property (retain, nonatomic) NSMutableArray *validFeatureCalculators;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;

- (void).cxx_destruct;
- (id)initWithActivity:(id)a0;
- (void)calculateAllFeatures:(id /* block */)a0;
- (void)iterateThroughCalculators:(id /* block */)a0;
- (id)parseErrorInfo:(id)a0 calculator:(id)a1;
- (void)runFeatureCalculator:(id)a0;
- (id)taskDeferred;

@end
