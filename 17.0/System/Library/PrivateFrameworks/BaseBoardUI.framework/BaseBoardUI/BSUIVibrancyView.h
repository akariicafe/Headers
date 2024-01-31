@class BSUIVibrancyConfiguration;

@interface BSUIVibrancyView : UIView {
    struct { BOOL resolvedEffectType; BOOL effectFilterViews; } _needsUpdate;
}

@property (class, readonly, nonatomic) BOOL isDisabled;

@property (copy, nonatomic) BSUIVibrancyConfiguration *configuration;

- (void)_update;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidateSubviews;
- (void).cxx_destruct;
- (void)updateFilters;
- (void)layoutSubviews;
- (void)_invalidateFilters;
- (void)_updateFilterViewsIfNeeded;

@end
