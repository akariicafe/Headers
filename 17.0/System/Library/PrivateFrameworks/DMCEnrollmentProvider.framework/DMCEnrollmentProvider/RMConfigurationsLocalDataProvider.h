@class RMUIConfigurationInterface;

@interface RMConfigurationsLocalDataProvider : NSObject <RMConfigurationsDataProvider>

@property (retain, nonatomic) RMUIConfigurationInterface *rmuiConfigInterface;

- (void).cxx_destruct;
- (id)passcodeViewModel;
- (id)pluginSectionViewModels;
- (id)pluginViewModels;
- (id)profileViewModels;
- (void)setConfigurationActivated:(BOOL)a0 forViewModel:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithRMUIConfigurationInterface:(id)a0;

@end
