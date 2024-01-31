@interface CPSPointsOfInterestPickerCell : UITableViewCell

@property (nonatomic) BOOL chosen;

+ (id)identifier;

- (BOOL)isSelected;
- (void)setHighlighted:(BOOL)a0;
- (void)prepareForReuse;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)setupViews;

@end
