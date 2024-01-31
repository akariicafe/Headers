@class NSLayoutConstraint, UIImageView, UIAction, UILabel, UIView, UIButton;
@protocol TVRUIDevice, TVRUIStyleProvider;

@interface TVRUIDeviceListCell : UITableViewCell

@property (retain, nonatomic) UIImageView *checkmarkImageView;
@property (retain, nonatomic) UIImageView *modelImageView;
@property (retain, nonatomic) UILabel *deviceLabel;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) UIButton *findMyButton;
@property (retain, nonatomic) NSLayoutConstraint *deviceLabelTrailingContentViewConstraint;
@property (retain, nonatomic) NSLayoutConstraint *deviceLabelTrailingFindMyButtonConstraint;
@property (retain, nonatomic) id<TVRUIDevice> device;
@property (nonatomic) BOOL showSeparator;
@property (retain, nonatomic) id<TVRUIStyleProvider> styleProvider;
@property (retain, nonatomic) UIAction *findButtonTapAction;

- (void)_setupConstraints;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_configureViews;
- (void)_updateConnectionStatus;
- (void)_updateFindMyButton;

@end
