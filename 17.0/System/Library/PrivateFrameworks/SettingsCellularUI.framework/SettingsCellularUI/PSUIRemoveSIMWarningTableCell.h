@class UIImageView, UILabel;

@interface PSUIRemoveSIMWarningTableCell : PSTableCell

@property (retain) UIImageView *icon;
@property (retain) UILabel *title;
@property (retain) UILabel *label;

- (id)textLabel;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (id)detailTextLabel;
- (void)_setupView:(id)a0;

@end
