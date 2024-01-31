@class NSDictionary, NSString;
@protocol MLFeatureProvider;

@interface MLProgramContext : NSObject

@property (retain, nonatomic) NSDictionary *functionNameToInputLayersNames;
@property (retain, nonatomic) NSDictionary *functionNameToOutputLayersNames;
@property (retain, nonatomic) id<MLFeatureProvider> executionState;
@property (retain, nonatomic) NSString *trainFunctionLossName;
@property (retain, nonatomic) NSString *forwardFunctionLossName;
@property (retain, nonatomic) NSDictionary *functionNameToStateMap;

- (void).cxx_destruct;
- (id)initWithExecutionState:(id)a0 functionNameToStateMap:(id)a1;

@end
