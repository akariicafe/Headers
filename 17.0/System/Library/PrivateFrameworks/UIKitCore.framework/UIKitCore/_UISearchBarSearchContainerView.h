@class _UISearchBarSearchContainerLayout;

@interface _UISearchBarSearchContainerView : UIView {
    BOOL _needsLayoutWhenThawed;
}

@property (retain, nonatomic) _UISearchBarSearchContainerLayout *layout;
@property (nonatomic) BOOL frozenLayout;

- (void)setNeedsLayout;
- (BOOL)_isKnownUISearchBarComponentContainer;
- (id)description;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
