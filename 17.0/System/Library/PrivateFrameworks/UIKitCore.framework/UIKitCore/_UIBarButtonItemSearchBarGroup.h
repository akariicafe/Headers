@class UISearchBar, UIBarButtonItem;

@interface _UIBarButtonItemSearchBarGroup : UIBarButtonItemGroup {
    BOOL _hadRepresentativeItemBeforeMovingToProvisionalState;
    BOOL _disabledExpansion;
    double _contextualExpandedPadding;
    BOOL _providesRestingMeasurementValues;
    UIBarButtonItem *_searchItem;
    UISearchBar *_searchBar;
    UIBarButtonItem *_searchIconItem;
}

- (BOOL)_isCritical;
- (void)setBarButtonItems:(id)a0;
- (double)_contextualExpandedPadding;
- (id)initWithBarButtonItems:(id)a0 representativeItem:(id)a1;
- (void)setHidden:(BOOL)a0;
- (BOOL)_disabledExpansion;
- (void)setRepresentativeItem:(id)a0;
- (void).cxx_destruct;

@end
