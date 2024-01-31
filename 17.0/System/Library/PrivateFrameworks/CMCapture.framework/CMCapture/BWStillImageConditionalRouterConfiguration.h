@interface BWStillImageConditionalRouterConfiguration : NSObject

@property (readonly, nonatomic) unsigned int numberOfInputs;
@property (readonly, nonatomic) unsigned int numberOfOutputs;
@property (copy, nonatomic) id /* block */ shouldEmitSampleBufferDecisionProvider;
@property (copy, nonatomic) id /* block */ shouldEmitNodeErrorDecisionProvider;

- (void)dealloc;
- (id)initWithNumberOfOutputs:(unsigned int)a0;

@end
