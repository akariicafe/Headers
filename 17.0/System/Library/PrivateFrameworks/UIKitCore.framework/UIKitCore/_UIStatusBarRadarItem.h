@class _UIStatusBarRadarView;

@interface _UIStatusBarRadarItem : _UIStatusBarIndicatorItem

@property (retain, nonatomic) _UIStatusBarRadarView *radarItemView;

- (id)indicatorEntryKey;
- (void).cxx_destruct;
- (id)imageForUpdate:(id)a0;
- (id)viewForIdentifier:(id)a0;
- (id)imageView;
- (void)_create_radarItemView;

@end
