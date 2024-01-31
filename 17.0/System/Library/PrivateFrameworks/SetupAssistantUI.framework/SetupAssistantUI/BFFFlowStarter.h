@protocol BFFFlowDiverter;

@interface BFFFlowStarter : NSObject

@property (retain, nonatomic) id<BFFFlowDiverter> diverter;

- (void).cxx_destruct;
- (void)prepareWithCompletion:(id /* block */)a0;
- (BOOL)controllerNeedsToRunForClass:(Class)a0;
- (BOOL)controllerNeedsToRunForFlowItem:(id)a0;
- (id)initWithFlowDiverter:(id)a0;

@end
