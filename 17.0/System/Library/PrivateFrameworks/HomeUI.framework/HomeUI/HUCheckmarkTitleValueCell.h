@class UIImageView;

@interface HUCheckmarkTitleValueCell : HUTitleValueCell

@property (retain, nonatomic) UIImageView *checkmarkImageView;
@property (nonatomic, getter=isChecked) BOOL checked;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_updateCheckmark;

@end
