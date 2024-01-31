@protocol PFStoryRecipeSongAsset;

@interface PFStoryRecipeSongAssetFactory : NSObject

@property (class, readonly, nonatomic) id<PFStoryRecipeSongAsset> nullAsset;

+ (id)createAssetWithCategory:(long long)a0 subcategory:(long long)a1 catalog:(id)a2 songID:(id)a3 title:(id)a4 subtitle:(id)a5 colorGradeCategory:(id)a6;

@end
