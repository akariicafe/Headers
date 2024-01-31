@class UIButton;

@interface STSingleLineButtonHeaderView : STSingleLineHeaderView

@property (readonly, nonatomic) UIButton *button;

- (void)setSpecifier:(id)a0;
- (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)a0;
- (id)initWithSpecifier:(id)a0 useContentLayoutGuide:(BOOL)a1;
- (void)reloadFromSpecifier;

@end
