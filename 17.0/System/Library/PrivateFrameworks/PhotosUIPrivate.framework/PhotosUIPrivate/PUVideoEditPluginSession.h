@interface PUVideoEditPluginSession : PUEditPluginSession

@property (nonatomic) BOOL allowLoopingVideoExtensions;

- (id)videoDataSource;
- (void)loadItemProviderWithSupportedAdjustmentData:(id)a0 loadHandler:(id /* block */)a1;
- (unsigned long long)pluginManagerMediaType;

@end
