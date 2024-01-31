@interface SUSearchDisplayController : UISearchDisplayController {
    BOOL _store_navigationBarHidingEnabled;
}

- (void)_updateSearchBarMaskIfNecessary;
- (id)_createPopoverController;
- (BOOL)isNavigationBarHidingEnabled;
- (void)setActive:(BOOL)a0 animated:(BOOL)a1;
- (void)setNavigationBarHidingEnabled:(BOOL)a0;
- (void)_noEventSetSearchFieldText:(id)a0;

@end
