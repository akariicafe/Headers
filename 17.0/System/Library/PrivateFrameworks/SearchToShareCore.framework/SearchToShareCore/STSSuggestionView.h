@class UIView, STSSuggestionFooter, UITableView;
@protocol STSSuggestionViewDelegate;

@interface STSSuggestionView : UIView {
    STSSuggestionFooter *_footerView;
}

@property (readonly, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *overlayView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (nonatomic) struct CGPoint { double x; double y; } footerOffset;
@property (nonatomic, getter=isShowingFooter) BOOL showingFooter;
@property (weak, nonatomic) id<STSSuggestionViewDelegate> delegate;

- (id)init;
- (void)_updateContentInsets;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })footerSize;
- (void)_handleLogoTap:(id)a0;
- (void)_updateFooterOrigin;
- (void)setOverlayView:(id)a0 animated:(BOOL)a1;
- (void)updateFooterImage:(id)a0;

@end
