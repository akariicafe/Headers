@class UILabel, NSAttributedString, UIView;

@interface WDMedicalRecordMultilineTextCell : UITableViewCell

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIView *background;
@property (retain, nonatomic) NSAttributedString *text;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_setupSubviews;

@end
