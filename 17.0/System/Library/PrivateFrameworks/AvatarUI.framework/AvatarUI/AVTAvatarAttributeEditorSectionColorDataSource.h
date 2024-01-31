@class AVTAvatarAttributeEditorColorSection;
@protocol AVTAvatarAttributeEditorSectionColorDataSourceDelegate;

@interface AVTAvatarAttributeEditorSectionColorDataSource : NSObject

@property (nonatomic) long long selectedPrimaryColorIndex;
@property (nonatomic) long long selectedExtendedColorIndex;
@property (nonatomic) long long displayMode;
@property (readonly, nonatomic) long long selectedItemIndex;
@property (retain, nonatomic) AVTAvatarAttributeEditorColorSection *colorSection;
@property (readonly, nonatomic) BOOL isShowingSlider;
@property (readonly, nonatomic) BOOL isShowingExtended;
@property (nonatomic) id<AVTAvatarAttributeEditorSectionColorDataSourceDelegate> delegate;

+ (long long)indexOfItem:(id)a0 inItems:(id)a1;
+ (id)selectedItemFromItems:(id)a0;

- (id)init;
- (long long)numberOfItemsInSection:(long long)a0;
- (void).cxx_destruct;
- (id)indexPathOfExtendedIcon;
- (void)resetToDefaultDisplayMode;
- (id)sectionItemAtIndex:(long long)a0;
- (void)selectSectionItemAtIndexPath:(id)a0;
- (void)toggleExtendedMode;
- (void)toggleSliderMode;
- (void)updateSelectedIndexesSelectingItem:(id)a0 fromUserInteraction:(BOOL)a1;

@end
