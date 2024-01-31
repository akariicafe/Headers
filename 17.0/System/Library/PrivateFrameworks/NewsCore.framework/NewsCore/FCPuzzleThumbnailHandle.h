@class FCAssetManager, NSString, FCAssetHandle;
@protocol FCContentContext;

@interface FCPuzzleThumbnailHandle : NSObject

@property (retain, nonatomic) id<FCContentContext> context;
@property (retain, nonatomic) FCAssetManager *assetManager;
@property (readonly, nonatomic) long long dayOfWeek;
@property (readonly, nonatomic) NSString *resourceMapId;
@property (retain, nonatomic) FCAssetHandle *assetHandle;

+ (id)imageUrlFromResourceMap:(id)a0 dayOfWeek:(long long)a1;

- (void)downloadIfNeededWithGroup:(id)a0;
- (void).cxx_destruct;
- (id)initWithPublishDate:(id)a0 imageResourceMapId:(id)a1 context:(id)a2 assetManager:(id)a3;

@end
