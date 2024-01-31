@class FCAssetManager, NSString;
@protocol FCContentContext;

@interface FCPuzzleTypeThumbnailDirectory : NSObject <FCPuzzleTypeThumbnailDirectoryType>

@property (retain, nonatomic) FCAssetManager *assetManager;
@property (copy, nonatomic) NSString *resourceMapId;
@property (retain, nonatomic) id<FCContentContext> context;

- (void).cxx_destruct;
- (id)initWithResourceMapId:(id)a0 assetManager:(id)a1 context:(id)a2;
- (id)smallThumbnailForDate:(id)a0;

@end
