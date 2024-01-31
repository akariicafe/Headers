@class NSString, NSFileManager, NSLocale;

@interface CDMDefaultAssetsManager : NSObject {
    NSFileManager *_fileManager;
}

@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSString *assetDirPath;

- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (id)getAbsolutePathForAssetsRootFolder;
- (id)getAbsolutePathForLocalizedAssetsRootFolder;
- (id)getAbsolutePathForServiceAssetFolders:(id)a0;
- (id)initWithLocale:(id)a0 assetDirPath:(id)a1;
- (void)setAssetDirPath:(id)a0;

@end
