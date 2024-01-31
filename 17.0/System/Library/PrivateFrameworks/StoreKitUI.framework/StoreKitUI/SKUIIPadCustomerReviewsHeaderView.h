@class UIView, NSString, NSArray, SKUIColorScheme, SKUIClientContext, UIButton, UIPopoverController, UILabel;

@interface SKUIIPadCustomerReviewsHeaderView : UIControl <SKUIMenuViewControllerDelegate, UIPopoverControllerDelegate> {
    SKUIClientContext *_clientContext;
    UIPopoverController *_sortPopoverController;
    UIView *_separatorView;
    UIButton *_sortButton;
    UILabel *_sortLabel;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) SKUIColorScheme *colorScheme;
@property (readonly, nonatomic) UIButton *appSupportButton;
@property (readonly, nonatomic) UIButton *writeAReviewButton;
@property (nonatomic) long long selectedSortIndex;
@property (copy, nonatomic) NSArray *sortTitles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setBackgroundColor:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)popoverControllerDidDismissPopover:(id)a0;
- (void)_destroySortPopoverController;
- (void)_reloadSortButton;
- (void)_sortButtonAction:(id)a0;
- (id)initWithClientContext:(id)a0;
- (void)menuViewController:(id)a0 didSelectItemAtIndex:(long long)a1;

@end
