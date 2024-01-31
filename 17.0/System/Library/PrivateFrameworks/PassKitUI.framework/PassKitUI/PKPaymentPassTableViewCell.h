@class PKPaymentPass, PKPeerPaymentAccount, UIColor, UILabel, PKTransitBalanceModel, UIView;

@interface PKPaymentPassTableViewCell : PKTableViewCell {
    UILabel *_mainLabel;
    UILabel *_subTextLabel;
    UIView *_cardSnapshotView;
}

@property (retain, nonatomic) PKTransitBalanceModel *transitBalanceModel;
@property (retain, nonatomic) PKPaymentPass *pass;
@property (retain, nonatomic) PKPeerPaymentAccount *peerPaymentAccount;
@property (retain, nonatomic) UIColor *mainLabelColor;
@property (retain, nonatomic) UIColor *subTextLabelColor;
@property (retain, nonatomic) UIColor *disabledMainLabelColor;
@property (retain, nonatomic) UIColor *disabledSubTextLabelColor;

+ (id)titleFont;
+ (id)subTitleFont;
+ (double)heightForCellWithMinimum:(double)a0 hasSubTitle:(BOOL)a1;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setUserInteractionEnabled:(BOOL)a0;
- (void)layoutSubviews;
- (void)_updateLabelText;
- (void)_updateLabelTextColors;
- (void)pk_applyAppearance:(id)a0;

@end
