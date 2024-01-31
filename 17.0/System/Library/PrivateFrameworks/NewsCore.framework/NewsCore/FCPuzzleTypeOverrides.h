@class FCColor, FCAssetHandle;

@interface FCPuzzleTypeOverrides : NSObject

@property (retain, nonatomic) FCColor *themeColor;
@property (retain, nonatomic) FCColor *darkStyleThemeColor;
@property (retain, nonatomic) FCAssetHandle *exploreTileImageAssetHandle;

- (void).cxx_destruct;
- (id)initWithThemeColor:(id)a0 darkStyleThemeColor:(id)a1 exploreTileImageAssetHandle:(id)a2;

@end
