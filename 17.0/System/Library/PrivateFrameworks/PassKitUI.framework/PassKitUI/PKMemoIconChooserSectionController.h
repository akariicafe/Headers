@class NSArray, NSString, PKMemoItem, UICollectionViewCellRegistration, NSMutableArray;
@protocol PKMemoIconChooserSectionControllerDelegate;

@interface PKMemoIconChooserSectionController : NSObject <PKDynamicSectionController, PKMemoIconCellDelegate> {
    id<PKMemoIconChooserSectionControllerDelegate> _delegate;
    NSMutableArray *_items;
    PKMemoItem *_addNewItem;
    PKMemoItem *_selectionItem;
    unsigned long long _mode;
}

@property (nonatomic) unsigned long long style;
@property (readonly, nonatomic) NSArray *identifiers;
@property (retain, nonatomic) UICollectionViewCellRegistration *cellRegistration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)_itemSizeForStyle:(unsigned long long)a0;
+ (double)_minimumWidthForStyle:(unsigned long long)a0;
+ (unsigned long long)suggestedStyleForAvailableWidth:(double)a0;

- (void).cxx_destruct;
- (void)reloadItems;
- (void)didSelectItem:(id)a0;
- (double)_selectionPreviewBottomSpacing;
- (double)_selectionPreviewTopSpacing;
- (void)addMemo:(id)a0;
- (void)cell:(id)a0 didUpdateText:(id)a1;
- (id)cellRegistrationForItem:(id)a0;
- (void)configureSupplementaryRegistration:(id)a0 elementKind:(id)a1 sectionIdentifier:(id)a2;
- (id)contextMenuConfigurationForItem:(id)a0;
- (id)initWithDelegate:(id)a0 mode:(unsigned long long)a1 memo:(id)a2;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (id)selectedMemo;
- (void)setMemoSelection:(id)a0;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;

@end
