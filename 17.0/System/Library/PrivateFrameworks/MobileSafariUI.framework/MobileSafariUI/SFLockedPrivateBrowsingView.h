@class UIContentUnavailableView, TabOverviewToolbar, UIAction;

@interface SFLockedPrivateBrowsingView : UIView {
    UIContentUnavailableView *_contentUnavailableView;
    TabOverviewToolbar *_toolbar;
}

@property (copy, nonatomic) UIAction *unlockAction;
@property (copy, nonatomic) UIAction *tabGroupPickerAction;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;

@end
