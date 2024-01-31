@class HUQuickControlCollectionViewControllerLayoutOptions, HFItemManager, UICollectionView, NSArray, NSMutableArray;
@protocol HUQuickControlCollectionItemManaging;

@interface HUQuickControlGridLayoutManager : NSObject

@property (weak, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) HFItemManager<HUQuickControlCollectionItemManaging> *itemManager;
@property (readonly, nonatomic) long long viewSizeSubclass;
@property (retain, nonatomic) NSMutableArray *sectionSettingsArray;
@property (retain, nonatomic) HUQuickControlCollectionViewControllerLayoutOptions *layoutOptions;
@property (readonly, nonatomic) NSArray *collectionSectionSettings;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)_mostImportantItemTypeForSection:(unsigned long long)a0;
- (id)_settingsForSectionNumber:(unsigned long long)a0 sectionIdentifier:(id)a1 layoutOptions:(id)a2;
- (id)_viewProfileClassesForSection:(unsigned long long)a0;
- (void)generateSectionSettings;
- (id)initWithCollectionView:(id)a0 itemManager:(id)a1 layoutOptions:(id)a2;
- (double)interItemSpacingForItemSize:(unsigned long long)a0 layoutOptions:(id)a1;
- (unsigned long long)itemSizeForSection:(unsigned long long)a0;
- (unsigned long long)numberOfColumnsInSection:(unsigned long long)a0;
- (double)sectionTopPaddingInSection:(unsigned long long)a0 withLayoutOptions:(id)a1;
- (unsigned long long)titlePositionForSection:(unsigned long long)a0;

@end
