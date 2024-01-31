@class NSURL, NSDictionary, NSError;

@interface PhotoAnalysis.WallpaperService : _TtCs12_SwiftObject <PLPhotoAnalysisGenericServiceProtocol, PLPhotoAnalysisWallpaperServiceProtocol> {
    void /* unknown type, empty encoding */ wallpaperUpgradeSession;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ stateHolder;
    void /* unknown type, empty encoding */ operationManager;
}

- (void)cancelOperationsWithIdentifiers:(id)a0 reply:(id /* block */)a1;
- (void)upgradePosterConfigurationWithAssetDirectory:(NSURL *)a0 options:(NSDictionary *)a1 reply:(void (^)(BOOL, NSError *))a2;

@end
