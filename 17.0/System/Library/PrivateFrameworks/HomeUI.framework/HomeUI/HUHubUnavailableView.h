@class HUIconView, NSArray, NSString, UILabel;

@interface HUHubUnavailableView : UIView

@property (retain, nonatomic) HUIconView *networkIconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) NSArray *layoutConstraints;
@property (retain, nonatomic) NSString *accessoryName;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)_setupView;

@end
