@class NSString, UIButton;

@interface SUBannerCell : SUTableCell <SUCellConfigurationView> {
    UIButton *_leftButton;
    UIButton *_rightButton;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)setConfiguration:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)_buttonAction:(id)a0;
- (id)_newButton;
- (void)_reloadButtons;
- (void)reloadView;

@end
