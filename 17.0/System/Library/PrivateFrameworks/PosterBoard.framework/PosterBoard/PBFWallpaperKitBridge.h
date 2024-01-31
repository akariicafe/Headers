@class NSString;

@interface PBFWallpaperKitBridge : NSObject

@property (readonly, nonatomic) NSString *defaultWallpaperIdentifier;
@property (readonly, nonatomic) BOOL shouldInstallCollectionsPosterAsDefaultLockScreenWallpaper;
@property (readonly, nonatomic) BOOL dataMigratorDeterminedLegacyWallpaperMigrationRequired;
@property (readonly, nonatomic) BOOL shouldDefaultWallpaperDisableModifyingLegibilityBlur;

+ (id)defaultBridge;

- (void)clearLegacyWallpaperMigrationKeys;

@end
