@class UIImageView, UILabel, UIView;

@interface UIKeyboardEmojiSplitCategoryCell : UITableViewCell

@property (retain, nonatomic) UIImageView *symbol;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UIView *selectedCircle;

- (id)titleFont;
- (void)setTitleText:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setPressIndicatorHidden:(BOOL)a0;
- (void)setSelectedCircleBlendMode:(BOOL)a0;
- (id)symbolFont;

@end
