@class UIView, NSString, UIImage, UIScrollView, BFFPaneHeaderView, NSMutableArray, UIVisualEffectView, UIColor;

@interface BFFSplashController : UIViewController <UIScrollViewDelegate> {
    BFFPaneHeaderView *_headerView;
    UIScrollView *_scrollView;
    NSMutableArray *_buttons;
    UIView *_bleedView;
}

@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UIImage *icon;
@property (copy, nonatomic) NSString *detailText;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) long long contentViewPosition;
@property (readonly, nonatomic) UIView *buttonTray;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } additionalInsets;
@property (retain, nonatomic) UIColor *tint;
@property (nonatomic) BOOL disableIconTint;
@property (nonatomic, getter=isScrollingDisabled) BOOL scrollingDisabled;
@property (nonatomic) BOOL fullWidthContent;
@property (retain, nonatomic) UIColor *bleedColor;
@property (readonly, nonatomic) BFFPaneHeaderView *headerView;
@property (nonatomic) BOOL usesTwoButtonLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLayoutSubviews;
- (id)contentScrollView;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)setTitle:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)_buttonPressed:(id)a0;
- (id)buttonAtIndex:(unsigned long long)a0;
- (void)_updateTrayVisibility;
- (void)removeAllButtons;
- (void)setButtonsEnabled:(BOOL)a0;
- (id)_createButtonWithTitle:(id)a0 style:(long long)a1;
- (void)_updateButtonFonts;
- (void)addButtonWithTitle:(id)a0 style:(long long)a1 action:(id /* block */)a2;
- (void)setLinkText:(id)a0 action:(id /* block */)a1;
- (void)setTitle:(id)a0 forButtonAtIndex:(unsigned long long)a1 action:(id /* block */)a2;
- (void)updateBleedColor;
- (void)updateBleedViewLayout;

@end
