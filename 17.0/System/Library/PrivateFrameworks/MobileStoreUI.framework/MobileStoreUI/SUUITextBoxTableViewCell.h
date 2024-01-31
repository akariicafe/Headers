@class SUUITextBoxView;

@interface SUUITextBoxTableViewCell : SUUITableViewCell

@property (readonly, nonatomic) SUUITextBoxView *textBoxView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } textBoxInsets;

- (void)setBackgroundColor:(id)a0;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;

@end
