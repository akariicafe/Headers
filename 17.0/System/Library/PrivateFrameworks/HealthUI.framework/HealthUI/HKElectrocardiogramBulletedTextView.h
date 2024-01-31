@class UILabel, NSMutableArray, NSString;

@interface HKElectrocardiogramBulletedTextView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) NSMutableArray *bodyFirstBaselineConstraints;
@property (retain, nonatomic) NSString *titleText;
@property (readonly, nonatomic) NSString *detailText;

- (id)init;
- (void)_setupConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)_setUpUI;
- (void)_updateLeadingDetailAttributedTextSize;
- (void)setDetailTextWithBullets:(id)a0;

@end
