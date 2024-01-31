@class UIView, NSString, NSArray, EKSubscribedCalendarEditor, NSSet, CUIKSubscribedHolidayCalendar, UISearchController, EKSource, UILabel, UIActivityIndicatorView;

@interface EKAddHolidayCalendarEditor : EKAbstractCalendarEditor <EKCalendarEditorDelegate, UISearchResultsUpdating> {
    NSArray *_calendarData;
    NSArray *_filteredCalendarData;
    NSSet *_alreadySubscribedCalendarURLStrings;
    CUIKSubscribedHolidayCalendar *_selectedCalendarDatum;
    EKSubscribedCalendarEditor *_subscriptionEditor;
    UISearchController *_searchController;
    UIView *_standbyScreen;
    UILabel *_standbyMessageLabel;
    UIActivityIndicatorView *_spinner;
    EKSource *_limitedToSource;
    unsigned long long _entityType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)rightButton;
- (void)updateSearchResultsForSearchController:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (BOOL)_alreadySubscribedToCalendar:(id)a0;
- (void)_beginLoadingHolidayCalendars;
- (void)_displayCalendarListScreen;
- (void)_displayErrorScreen;
- (void)_displayLoadingScreen;
- (void)_holidayCalendarsLoadCompletedWithCalendarData:(id)a0;
- (void)_holidayCalendarsLoadFailed;
- (void)_populatedAlreadySubscribedCalendarURLs;
- (struct CGSize { double x0; double x1; })calculatePreferredContentSize;
- (void)calendarEditor:(id)a0 didCompleteWithAction:(int)a1;
- (id)editItems;
- (id)initWithCalendar:(id)a0 eventStore:(id)a1 entityType:(unsigned long long)a2 limitedToSource:(id)a3;

@end
