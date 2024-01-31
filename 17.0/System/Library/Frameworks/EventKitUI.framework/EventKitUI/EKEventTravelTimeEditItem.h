@interface EKEventTravelTimeEditItem : EKEventEditItem {
    BOOL _isHidden;
}

- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (unsigned long long)numberOfSubitems;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSubitemAtIndex:(unsigned long long)a1;
- (id)generatePopupMenu;
- (BOOL)editItemViewControllerSave:(id)a0;
- (BOOL)isInline;
- (void)_updateHiddenState;
- (BOOL)forceRefreshStartAndEndDatesOnSave;

@end
