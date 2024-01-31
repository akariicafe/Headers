@class UIView;

@interface HUAddPeopleTableHeaderFooterView : UITableViewHeaderFooterView

@property (retain, nonatomic) UIView *topBorder;
@property (retain, nonatomic) UIView *bottomBorder;
@property (nonatomic) BOOL needsTopBorder;
@property (nonatomic) BOOL needsBottomBorder;

+ (id)identifier;
+ (double)preferredHeight;

- (void)setBackgroundColor:(id)a0;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)layoutSubviews;

@end
