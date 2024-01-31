@class UILabel, FMFLocation, NSLayoutConstraint;

@interface FMFTitleView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) NSLayoutConstraint *titleBottomConstraint;
@property (retain, nonatomic) FMFLocation *location;

- (void)updateLocation:(id)a0;
- (void).cxx_destruct;
- (void)_updateLabels:(id)a0;
- (id)initFromNib;

@end
