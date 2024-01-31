@class PHAssetCollection;

@interface PXNavigationListAssetCollectionItem : PXNavigationListDisplayAssetCollectionItem

@property (readonly, nonatomic) PHAssetCollection *collection;

- (BOOL)isDraggable;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)accessoryGlyphImageName;
- (id)accessoryTitle;
- (id)cpAnalyticsEventName;
- (id)initWithAssetCollection:(id)a0 itemCount:(long long)a1;
- (id)viewControllerForCollectionWithGridPresentation:(id)a0 existingAssetsFetchResult:(id)a1;

@end
