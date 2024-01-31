@class NSArray, HFImageIconDescriptor, UIColor;
@protocol HUSymbolIconPickerDelegate;

@interface HUSymbolIconPickerViewController : UICollectionViewController

@property (class, readonly, nonatomic) NSArray *sceneIconDescriptors;

@property (readonly, nonatomic) NSArray *iconDescriptors;
@property (retain, nonatomic) HFImageIconDescriptor *selectedIconDescriptor;
@property (retain, nonatomic) UIColor *selectedTintColor;
@property (weak, nonatomic) id<HUSymbolIconPickerDelegate> delegate;

+ (long long)indexOfIconDescriptor:(id)a0 inArray:(id)a1;
+ (id)tintColors;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)_done:(id)a0;
- (void)_cancel:(id)a0;
- (id)_buildColorTintSectionWithEnvironment:(id)a0;
- (id)_buildHeaderSectionWithEnvironment:(id)a0;
- (id)_buildIconPickerSectionWithEnvironment:(id)a0;
- (id)_layoutSectionForSection:(long long)a0 layoutEnvironment:(id)a1;
- (void)applyTintColor;
- (id)initWithIconDescriptors:(id)a0 selectedIconDescriptor:(id)a1 selectedTintColor:(id)a2 delegate:(id)a3;

@end
