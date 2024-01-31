@class NSMutableArray, RMObserverStore;

@interface RMUIPluginViewModelProvider : NSObject

@property (retain, nonatomic) NSMutableArray *pluginSectionViewModels;
@property (retain, nonatomic) NSMutableArray *pluginViewModels;
@property (retain, nonatomic) RMObserverStore *observerStore;

- (id)init;
- (void).cxx_destruct;
- (id)_sectionNameForDeclarationType:(id)a0;
- (void)_addModel:(id)a0 toSection:(id)a1;
- (id)_modelForDeclarationInfo:(id)a0;
- (short)_symbolForDeclarationType:(id)a0;
- (void)_updateViewModelsWithDeclarations:(id)a0;
- (void)loadPluginsFromConfigurationsWithCompletionHandler:(id /* block */)a0;

@end
