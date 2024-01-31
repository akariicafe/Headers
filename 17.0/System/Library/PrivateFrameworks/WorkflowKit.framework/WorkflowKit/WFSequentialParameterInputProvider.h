@class NSMutableDictionary, NSDictionary, NSMutableOrderedSet, WFAction;
@protocol WFSequentialParameterInputProviderDelegate;

@interface WFSequentialParameterInputProvider : NSObject

@property (retain, nonatomic) WFAction *fakeAction;
@property (retain, nonatomic) NSMutableOrderedSet *queuedParameters;
@property (retain, nonatomic) NSDictionary *defaultStates;
@property (retain, nonatomic) NSDictionary *prompts;
@property (retain, nonatomic) NSMutableDictionary *inputtedStates;
@property (weak, nonatomic) id<WFSequentialParameterInputProviderDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)askForParameterIfAvailable;
- (void)persistInFlightParameters;
- (void)startWithAction:(id)a0 parameters:(id)a1 defaultStates:(id)a2 prompts:(id)a3;

@end
