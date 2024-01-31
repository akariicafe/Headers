@class _UIStatusBarPillView, _UIStatusBarIdentifier, _UIStatusBarImageView, _UIStatusBarActivityIconView;

@interface _UIStatusBarBackgroundActivityItem : _UIStatusBarIndicatorItem

@property (class, readonly) _UIStatusBarIdentifier *backgroundDisplayIdentifier;
@property (class, readonly) _UIStatusBarIdentifier *secondaryIconDisplayIdentifier;

@property (retain, nonatomic) _UIStatusBarPillView *backgroundView;
@property (retain, nonatomic) _UIStatusBarActivityIconView *iconView;
@property (retain, nonatomic) _UIStatusBarImageView *secondaryIconView;
@property (nonatomic) long long previousType;

+ (BOOL)_identifierContainsSecondaryItemImage:(id)a0;
+ (BOOL)_identifierContainsItemImage:(id)a0;
+ (double)_verticalOffsetForActivityType:(long long)a0;
+ (double)_fontSizeAdjustmentForActivityType:(long long)a0;

- (id)additionAnimationForDisplayItemWithIdentifier:(id)a0;
- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (BOOL)canEnableDisplayItem:(id)a0 fromData:(id)a1;
- (id)_textLabelForActivityType:(long long)a0;
- (id)_backgroundActivityViewForIdentifier:(id)a0;
- (void)applyStyleAttributes:(id)a0 toDisplayItem:(id)a1;
- (id)_backgroundColorForActivityType:(long long)a0;
- (id)imageNameForUpdate:(id)a0;
- (id)indicatorEntryKey;
- (id)initWithIdentifier:(id)a0 statusBar:(id)a1;
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
- (id)_imageNameForActivityType:(long long)a0;
- (id)_secondarySystemImageNameForActivityType:(long long)a0;
- (BOOL)_shouldPulseForActivityType:(long long)a0 traitCollection:(id)a1;
- (BOOL)_shouldRingForActivityType:(long long)a0 traitCollection:(id)a1;
- (id)_systemImageNameForActivityType:(long long)a0;
- (id)_visualEffectForActivityType:(long long)a0 traitCollection:(id)a1;
- (BOOL)crossfadeForUpdate:(id)a0;
- (id)secondaryImageForUpdate:(id)a0;
- (void)updatedDisplayItemsWithData:(id)a0;

@end
