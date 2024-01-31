@class EKEventPrivacyLevelInlineEditItem, EKEventEditItem, EKEventAvailabilityEditItem;

@interface EKEventVisibilityEditItem : EKEventEditItem {
    EKEventAvailabilityEditItem *_availabilityEditItem;
    EKEventPrivacyLevelInlineEditItem *_privacyLevelEditItem;
    EKEventEditItem *_subitemOfLastDetailViewControllerRequested;
    unsigned long long _lastKnownNumberOfSubitems;
}

- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (id)init;
- (void)reset;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (unsigned long long)numberOfSubitems;
- (id)footerView;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSubitemAtIndex:(unsigned long long)a1;
- (BOOL)editItemViewControllerSave:(id)a0;
- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (id)footerTitle;
- (id)_lowestEditItem;
- (id)_editItemForIndex:(unsigned long long)a0;
- (BOOL)canBeConfiguredForCalendarConstraints:(id)a0;
- (BOOL)editor:(id)a0 canSelectSubitem:(unsigned long long)a1;
- (double)footerHeightForWidth:(double)a0;
- (BOOL)forceTableReloadOnSave;
- (BOOL)requiresReconfigurationOnSave;
- (BOOL)saveAndDismissWithForce:(BOOL)a0;
- (void)setCalendarItem:(id)a0 store:(id)a1;
- (BOOL)shouldAppearWithVisibility:(int)a0;
- (BOOL)usesDetailViewControllerForSubitem:(unsigned long long)a0;

@end
