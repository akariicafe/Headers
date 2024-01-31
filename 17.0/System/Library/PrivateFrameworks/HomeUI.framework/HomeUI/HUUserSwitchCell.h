@class NSString, UISwitch, UIActivityIndicatorView;
@protocol HUUserSwitchCellDelegate;

@interface HUUserSwitchCell : HUAvatarTableViewCell <HUDisableableCellProtocol>

@property (retain, nonatomic) UISwitch *switchView;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, getter=isLoading) BOOL loading;
@property (nonatomic, getter=isOn) BOOL on;
@property (weak, nonatomic) id<HUUserSwitchCellDelegate> delegate;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHighlighted:(BOOL)a0;
- (void)prepareForReuse;
- (void)updateConfigurationUsingState:(id)a0;
- (void)setOn:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setSelected:(BOOL)a0;
- (id)configurationState;
- (id)defaultContentConfiguration;
- (void)_toggleOn:(id)a0;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
