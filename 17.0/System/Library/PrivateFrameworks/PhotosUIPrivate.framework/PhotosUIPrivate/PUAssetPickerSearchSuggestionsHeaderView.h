@class NSString, UICollectionView;
@protocol PUAssetPickerSearchSuggestionsSelectionDelegate;

@interface PUAssetPickerSearchSuggestionsHeaderView : UIView <UICollectionViewDelegate>

@property (weak, nonatomic) id<PUAssetPickerSearchSuggestionsSelectionDelegate> suggestionsSelectionDelegate;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
