@class NSString, CalendarNotesCell;

@interface EKConferenceInformationInlineEditItem : EKEventEditItem <EKCalendarItemInlineEditItem> {
    CalendarNotesCell *_cell;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void)reset;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (void).cxx_destruct;
- (BOOL)isInline;
- (BOOL)isSaveable;
- (id)searchStringForEventAutocomplete;
- (BOOL)shouldAppearWithVisibility:(int)a0;

@end
