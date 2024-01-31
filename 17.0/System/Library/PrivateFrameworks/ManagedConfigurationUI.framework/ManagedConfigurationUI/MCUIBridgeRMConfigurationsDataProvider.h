@class NSString;

@interface MCUIBridgeRMConfigurationsDataProvider : NSObject <RMConfigurationsDataProvider>

@property (retain, nonatomic) NSString *mdmProfileIdentifier;

- (void).cxx_destruct;
- (id)_rmConfigurationViewModels;
- (id)initWithMDMProfileIdentifier:(id)a0;
- (id)passcodeViewModel;
- (id)pluginSectionViewModels;
- (id)pluginViewModels;
- (id)profileViewModels;
- (void)setConfigurationActivated:(BOOL)a0 forViewModel:(id)a1 completionHandler:(id /* block */)a2;

@end
