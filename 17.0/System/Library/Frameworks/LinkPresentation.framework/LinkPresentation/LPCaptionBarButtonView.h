@class LPCaptionButtonPresentationProperties, LPButtonStyle, UISegmentedControl, LPCircularProgressIndicator, UIButton;

@interface LPCaptionBarButtonView : LPComponentView {
    LPCaptionButtonPresentationProperties *_properties;
    LPButtonStyle *_style;
    UIButton *_button;
    UIButton *_collapsedButton;
    UISegmentedControl *_segmentedControl;
    LPCircularProgressIndicator *_progressIndicator;
}

@property (nonatomic, getter=isCollapsed) BOOL collapsed;

- (void)removeTarget:(id)a0 action:(SEL)a1;
- (void).cxx_destruct;
- (id)initWithHost:(id)a0;
- (void)addTarget:(id)a0 action:(SEL)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })collapsedSizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)createMenu;
- (BOOL)_menuButtonShowsChevron;
- (BOOL)_menuButtonShowsImages;
- (BOOL)_menuButtonShowsIndicator;
- (BOOL)_menuButtonShowsSingleImage;
- (void)configureMenuButton:(id)a0;
- (void)configurePillButton:(id)a0;
- (void)configureSegmentedControl:(id)a0;
- (id)createButton;
- (id)createCollapsedButton;
- (void)createProgressIndicator;
- (id)createSegmentedControl;
- (id)createUIActionsFromLPActionsWithHandler:(id /* block */)a0;
- (id)initWithHost:(id)a0 properties:(id)a1 style:(id)a2;
- (void)layoutComponentView;
- (void)selectAndPerformAction:(id)a0;
- (BOOL)shouldShowDownloadingIndicator;
- (void)updateProgressIndicator;

@end
