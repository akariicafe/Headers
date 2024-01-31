@class UIButton, UIListContentView, NSArray;

@interface EKUIClearButtonCell : EKUITableViewCell {
    UIListContentView *_listContentView;
    NSArray *_constraints;
}

@property (readonly, nonatomic) UIButton *clearButton;

- (void)_updateConstraints;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)configuration;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)_updateConfigurationNumLines:(id)a0;
- (void)setTitleSubtitleContentConfiguration:(id)a0;

@end
