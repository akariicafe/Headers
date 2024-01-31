@interface EKCalendarRemoveExtraInfoEditItem : EKCalendarEditItem

- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (id)headerTitle;
- (unsigned long long)numberOfSubitems;
- (id)footerTitle;
- (void)_stripAlertsChanged:(id)a0;
- (void)_stripAttachmentsChanged:(id)a0;

@end
