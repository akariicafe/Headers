@class UIView;
@protocol TVRUIDevice, TVRUIStyleProvider;

@interface TVRUIOldDeviceListCell : UITableViewCell

@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) id<TVRUIDevice> device;
@property (nonatomic) BOOL showSeparator;
@property (retain, nonatomic) id<TVRUIStyleProvider> styleProvider;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)_applyFilterForDevice:(id)a0;

@end
