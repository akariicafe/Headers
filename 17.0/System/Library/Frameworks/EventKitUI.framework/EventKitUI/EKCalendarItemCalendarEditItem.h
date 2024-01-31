@interface EKCalendarItemCalendarEditItem : EKCalendarItemEditItem {
    unsigned long long _entityType;
}

- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (id)init;
- (id)eligibleCalendars;
- (id)popupMenu:(id)a0;
- (BOOL)canBeConfiguredForCalendarConstraints:(id)a0;
- (id)initWithEntityType:(unsigned long long)a0;
- (BOOL)requiresReconfigurationOnSave;
- (BOOL)shouldAppearWithVisibility:(int)a0;

@end
