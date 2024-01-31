@class WGWidgetPinningTeachingAnimationView, UISwitch;

@interface WGWidgetListEditViewPinTableViewCell : UITableViewCell {
    WGWidgetPinningTeachingAnimationView *_pinImageView;
}

@property (readonly, nonatomic) UISwitch *pinSwitch;

- (void)stopAnimating;
- (void)startAnimating;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
