@interface _UIVisualEffectContentView : _UIVisualEffectSubview {
    BOOL _disableGroupFiltering;
    BOOL _currentlyDisplayingRequestedEffects;
}

- (void)setFilters:(id)a0;
- (void)applyRequestedFilterEffects;
- (void)willRemoveSubview:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didAddSubview:(id)a0;
- (id)description;
- (void)applyIdentityFilterEffects;
- (void)setDisableGroupFiltering:(BOOL)a0;
- (BOOL)disableGroupFiltering;

@end
