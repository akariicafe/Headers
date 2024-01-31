@class UILabel, NSMutableString, NSString;

@interface VPNPrimaryTableCell : PSTableCell

@property (retain, nonatomic) UILabel *specialStatusLabel;
@property (retain) NSMutableString *detailText;
@property (retain) NSString *subtitle;
@property (retain) NSString *vpnPrimaryTableCellStatus;
@property (retain) NSString *alert;
@property BOOL disabled;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateDetail;

@end
