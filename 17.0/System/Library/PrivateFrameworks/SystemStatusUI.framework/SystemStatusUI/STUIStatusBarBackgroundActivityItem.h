@class NSString, STUIStatusBarPillView, STUIStatusBarActivityIconView, STUIStatusBarIdentifier, STUIStatusBarImageView;

@interface STUIStatusBarBackgroundActivityItem : STUIStatusBarIndicatorItem

@property (class, readonly) STUIStatusBarIdentifier *backgroundDisplayIdentifier;
@property (class, readonly) STUIStatusBarIdentifier *secondaryIconDisplayIdentifier;

@property (retain, nonatomic) STUIStatusBarPillView *backgroundView;
@property (retain, nonatomic) STUIStatusBarActivityIconView *iconView;
@property (retain, nonatomic) STUIStatusBarImageView *secondaryIconView;
@property (retain, nonatomic) NSString *previousBackgroundActivityIdentifier;

+ (BOOL)_identifierContainsSecondaryItemImage:(id)a0;
+ (BOOL)_identifierContainsItemImage:(id)a0;
+ (double)_fontSizeAdjustmentForActivityWithIdentifier:(id)a0;
+ (double)_verticalOffsetForActivityWithIdentifier:(id)a0;

- (id)additionAnimationForDisplayItemWithIdentifier:(id)a0;
- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (BOOL)canEnableDisplayItem:(id)a0 fromData:(id)a1;
- (id)_backgroundActivityViewForIdentifier:(id)a0;
- (void)applyStyleAttributes:(id)a0 toDisplayItem:(id)a1;
- (id)imageNameForUpdate:(id)a0;
- (id)indicatorEntryKey;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)imageForUpdate:(id)a0;
- (id)viewForIdentifier:(id)a0;
- (id)systemImageNameForUpdate:(id)a0;
- (id)createDisplayItemForIdentifier:(id)a0;
- (id)imageView;
- (void)_create_backgroundView;
- (void)_create_iconView;
- (void)_create_secondaryIconView;
- (BOOL)crossfadeForUpdate:(id)a0;
- (id)secondaryImageForUpdate:(id)a0;
- (void)updatedDisplayItemsWithData:(id)a0;
- (id)_backgroundColorForActivityWithIdentifier:(id)a0;
- (id)_imageNameForActivityWithIdentifier:(id)a0;
- (id)_secondarySystemImageNameForActivityWithIdentifier:(id)a0;
- (BOOL)_shouldPulseBackgroundForActivityWithIdentifier:(id)a0 traitCollection:(id)a1;
- (BOOL)_shouldPulseSymbolForActivityWithIdentifier:(id)a0 traitCollection:(id)a1;
- (BOOL)_shouldRingForActivityWithIdentifier:(id)a0 traitCollection:(id)a1;
- (id)_systemImageNameForActivityWithIdentifier:(id)a0;
- (id)_textLabelForActivityWithIdentifier:(id)a0;
- (id)_visualEffectForActivityWithIdentifier:(id)a0 traitCollection:(id)a1;

@end
