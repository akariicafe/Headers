@class STUIStatusBarRadarView;

@interface STUIStatusBarRadarItem : STUIStatusBarIndicatorItem

@property (retain, nonatomic) STUIStatusBarRadarView *radarItemView;

- (id)indicatorEntryKey;
- (void).cxx_destruct;
- (id)imageForUpdate:(id)a0;
- (id)viewForIdentifier:(id)a0;
- (id)imageView;
- (void)_create_radarItemView;

@end
