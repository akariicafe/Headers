@protocol PLPhotoAnalysisServiceProvider;

@interface PLPhotoAnalysisWallpaperService : NSObject {
    id<PLPhotoAnalysisServiceProvider> _serviceProvider;
}

- (id)initWithServiceProvider:(id)a0;
- (void).cxx_destruct;
- (void)upgradePosterConfigurationWithAssetDirectory:(id)a0 options:(id)a1 reply:(id /* block */)a2;

@end
