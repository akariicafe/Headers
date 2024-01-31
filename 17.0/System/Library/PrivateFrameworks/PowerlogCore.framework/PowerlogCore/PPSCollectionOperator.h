@class PLXPCListenerOperatorComposition, PLXPCResponderOperatorComposition;

@interface PPSCollectionOperator : PLOperator

@property (retain) PLXPCListenerOperatorComposition *metricListener;
@property (retain) PLXPCResponderOperatorComposition *allowlistResponder;

- (id)init;
- (void)initOperatorDependancies;
- (void).cxx_destruct;
- (void)startCollection;

@end
