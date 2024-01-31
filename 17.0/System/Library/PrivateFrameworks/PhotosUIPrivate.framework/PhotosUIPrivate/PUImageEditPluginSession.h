@interface PUImageEditPluginSession : PUEditPluginSession

@property (nonatomic) BOOL allowLivePhotoExtensions;

- (id)imageDataSource;
- (void)loadItemProviderWithSupportedAdjustmentData:(id)a0 loadHandler:(id /* block */)a1;
- (unsigned long long)pluginManagerMediaType;
- (void)shouldLaunchPlugin:(id)a0 completion:(id /* block */)a1;

@end
