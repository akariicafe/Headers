@class UIButton, UIListContentView, NSArray;
@protocol EKUIFocusBannerTableViewCellDelegate;

@interface EKUIFocusBannerTableViewCell : UITableViewCell {
    UIButton *_focusFilterToggleButton;
    UIListContentView *_listContentView;
    NSArray *_constraints;
}

@property (nonatomic) BOOL on;
@property (weak, nonatomic) id<EKUIFocusBannerTableViewCellDelegate> delegate;

- (void)traitCollectionDidChange:(id)a0;
- (id)_configuration;
- (void)_updateView;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)_tapped;
- (id)_focusFilterButtonConfiguration;

@end
