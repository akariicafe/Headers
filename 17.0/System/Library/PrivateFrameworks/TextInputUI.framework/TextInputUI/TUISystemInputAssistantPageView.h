@class TUIPredictionCellButton, NSString, UIScrollView, UIView;
@protocol TUISystemInputAssistantPageViewDelegate;

@interface TUISystemInputAssistantPageView : UIView <UIScrollViewDelegate> {
    unsigned long long _currentChevronStyle;
    BOOL _secondaryViewInitialized;
    BOOL _layoutIsDirty;
}

@property (retain, nonatomic) UIView *clipView;
@property (retain, nonatomic) UIView *primaryContainerView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *primaryView;
@property (retain, nonatomic) UIView *secondaryView;
@property (nonatomic) BOOL scrollEnabled;
@property (nonatomic) BOOL hidesExpandButton;
@property (readonly, nonatomic) TUIPredictionCellButton *expandButton;
@property (weak, nonatomic) id<TUISystemInputAssistantPageViewDelegate> pageViewDelegate;
@property (nonatomic) BOOL secondaryViewVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setRenderConfig:(id)a0;
- (void)updateScrollEnabled;
- (struct CGSize { double x0; double x1; })_contentSize;
- (unsigned long long)_expandChevronImageStyleForRenderConfig:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_checkOldBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forContentOffsetChangeWithNewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)imageSymbolConfigurationForAssistantItem;
- (void)setNeedsLayout;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_expandButtonVisible;
- (void)_updateExpandButtonChevronImage;
- (void).cxx_destruct;
- (void)setSecondaryViewVisible:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)setSecondaryViewVisible:(BOOL)a0 withAnimationType:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)setSecondaryViewVisible:(BOOL)a0 force:(BOOL)a1 withAnimationType:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)layoutSubviews;
- (id)_createExpandButtonIfNecessary;
- (void)scrollViewDidScroll:(id)a0;
- (void)didMoveToWindow;

@end
