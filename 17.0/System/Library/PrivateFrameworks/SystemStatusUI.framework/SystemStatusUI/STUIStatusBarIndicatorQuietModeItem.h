@class NSString, STUIStatusBarIdentifier, STUIStatusBarImageView;

@interface STUIStatusBarIndicatorQuietModeItem : STUIStatusBarIndicatorItem

@property (class, readonly) STUIStatusBarIdentifier *emphasizedQuietModeIdentifier;

@property (retain, nonatomic) STUIStatusBarImageView *emphasizedImageView;
@property (retain, nonatomic) NSString *focusName;

- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (id)imageViewForIdentifier:(id)a0;
- (BOOL)shouldUpdateIndicatorForIdentifier:(id)a0;
- (id)indicatorEntryKey;
- (void).cxx_destruct;
- (id)viewForIdentifier:(id)a0;
- (id)systemImageNameForUpdate:(id)a0;
- (void)_create_emphasizedImageView;

@end
