@class EKUIPopupTableViewCell, UIMenu, EKUITableViewCell, EKCalendar;

@interface EKEventCalendarDetailItem : EKEventDetailItem {
    EKCalendar *_calendar;
    EKUIPopupTableViewCell *_popupCell;
    EKUITableViewCell *_displayCell;
    UIMenu *_popupMenu;
}

- (id)cellForSubitemAtIndex:(unsigned long long)a0 withTraitCollection:(id)a1;
- (id)init;
- (void)reset;
- (void)dealloc;
- (BOOL)_shouldAllowViewingDetailsForCalendar:(id)a0;
- (id)eligibleCalendars;
- (void)_contentSizeCategoryChanged:(id)a0;
- (id)popupMenu:(id)a0;
- (BOOL)eventViewController:(id)a0 shouldSelectSubitem:(unsigned long long)a1;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSubitemAtIndex:(unsigned long long)a1;
- (BOOL)hasDetailViewControllerAtIndex:(unsigned long long)a0;
- (BOOL)_calendarCanBeChanged;
- (BOOL)editItemViewControllerSave:(id)a0;
- (void).cxx_destruct;
- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;
- (BOOL)minimalMode;

@end
