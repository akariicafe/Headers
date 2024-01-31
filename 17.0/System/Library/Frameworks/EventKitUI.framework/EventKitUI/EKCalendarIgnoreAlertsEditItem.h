@interface EKCalendarIgnoreAlertsEditItem : EKCalendarAbstractSwitchEditItem

- (id)headerTitle;
- (id)cellText;
- (BOOL)cellWrapsLongText;
- (id)descriptionLabelText;
- (void)setUnderlyingCalendarState:(BOOL)a0;
- (BOOL)underlyingCalendarState;

@end
