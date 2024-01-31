@protocol RMConfigurationMultipleAdapter;

@interface RMConfigurationMultipleApplicator : NSObject

@property (nonatomic) BOOL doKeychainUnassign;
@property (readonly, nonatomic) id<RMConfigurationMultipleAdapter> adapter;
@property (nonatomic) BOOL inPlaceUpdates;

- (void).cxx_destruct;
- (void)applyConfigurations:(id)a0 storesByIdentifier:(id)a1 scope:(long long)a2 completionHandler:(id /* block */)a3;
- (id)initWithAdapter:(id)a0 inPlaceUpdates:(BOOL)a1;
- (void)configurationUIForConfiguration:(id)a0 scope:(long long)a1 completionHandler:(id /* block */)a2;
- (id)_configurationByDeclarationKeyFromConfigurations:(id)a0;
- (void)_endProcessing:(BOOL)a0 scope:(long long)a1 completionHandler:(id /* block */)a2;
- (BOOL)_supportedConfigurationType:(id)a0;
- (BOOL)_unassignAssetReference:(id)a0 scope:(long long)a1 error:(id *)a2;
- (BOOL)_usesKeychain;

@end
