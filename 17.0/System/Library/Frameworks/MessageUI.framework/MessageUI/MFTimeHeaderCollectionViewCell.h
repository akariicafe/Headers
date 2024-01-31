@class NSString, UISwitch;
@protocol MFTimeHeaderCollectionViewCellDelegate;

@interface MFTimeHeaderCollectionViewCell : UICollectionViewListCell

@property (class, readonly, nonatomic) NSString *reusableIdentifier;

@property (weak, nonatomic) UISwitch *switchView;
@property (weak, nonatomic) id<MFTimeHeaderCollectionViewCellDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)showTimeWheelCell:(id)a0;
- (void)updateSecondaryTextWithTime:(id)a0 timeSwitchEnabled:(BOOL)a1;

@end
