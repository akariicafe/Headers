@protocol RMConfigurationCombineAdapter;

@interface RMConfigurationCombineApplicator : NSObject

@property (readonly, nonatomic) id<RMConfigurationCombineAdapter> adapter;

- (id)initWithAdapter:(id)a0;
- (void).cxx_destruct;
- (void)applyConfigurations:(id)a0 storesByIdentifier:(id)a1 scope:(long long)a2 completionHandler:(id /* block */)a3;
- (void)configurationUIForConfiguration:(id)a0 scope:(long long)a1 completionHandler:(id /* block */)a2;
- (id)_configurationByDeclarationKeyFromConfigurations:(id)a0;
- (void)_endProcessing:(BOOL)a0 scope:(long long)a1 completionHandler:(id /* block */)a2;
- (void)_processConfigurations:(id)a0 storesByIdentifier:(id)a1 scope:(long long)a2 completionHandler:(id /* block */)a3;
- (void)_processRemovalOfDeclarationKeys:(id)a0 storesByIdentifier:(id)a1 scope:(long long)a2 completionHandler:(id /* block */)a3;

@end
