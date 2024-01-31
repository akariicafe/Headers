@class UILabel, NSString;

@interface CPSPointsOfInterestPickerExtendedCell : CPSPointsOfInterestPickerCell

@property (retain, nonatomic) UILabel *extendedTitleLabel;
@property (retain, nonatomic) UILabel *extendedSubtitleLabel;
@property (retain, nonatomic) UILabel *extendedInformativeLabel;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *text;

+ (id)identifier;

- (void)setHighlighted:(BOOL)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setupViews;

@end
