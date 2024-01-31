@class NSString, NSMutableDictionary, NSDate, EKCalendar;
@protocol CUIKPasteboardManagerEventStoreProvider, CUIKPasteboard, CUIKPasteboardManagerCalendarProvider;

@interface CUIKPasteboardManager : NSObject <EKAutocompleteSearchPasteboardItemProvider> {
    id<CUIKPasteboardManagerEventStoreProvider> _eventStoreProvider;
    id<CUIKPasteboard> _pasteboard;
    id<CUIKPasteboardManagerCalendarProvider> _calendarProvider;
    NSMutableDictionary *_copiedEvents;
    EKCalendar *_calendarForPaste;
    NSDate *_dateForPaste;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_pasteboardItemForEvent:(id)a0;

- (void).cxx_destruct;
- (struct CGColor { } *)colorOfCalendarToPasteTo;
- (id)eventsFromPasteboard;
- (BOOL)canPerformPaste;
- (id)calendarToPasteTo;
- (void)copyEvents:(id)a0 delegate:(id)a1;
- (void)cutEvents:(id)a0 delegate:(id)a1;
- (void)duplicateEvents:(id)a0 withDateMode:(unsigned long long)a1 delegate:(id)a2;
- (unsigned long long)numberOfEventsToPaste;
- (void)pasteEventsWithDateMode:(unsigned long long)a0 delegate:(id)a1;
- (void)setCalendarForPaste:(id)a0;
- (void)setDateForPaste:(id)a0;
- (BOOL)_calendarIsPasteableTo:(id)a0 allCalendars:(id)a1;
- (void)_copyEvents:(id)a0 toDict:(id)a1;
- (void)_cutEvents:(id)a0 editor:(id)a1;
- (id)_eventsFromPasteboard:(id)a0;
- (void)_pasteEvents:(id)a0 atDate:(id)a1 dateMode:(unsigned long long)a2 pasteDelegate:(id)a3 duplicate:(BOOL)a4;
- (void)_saveNewEventsOrOpenEditor:(id)a0 pasteDelegate:(id)a1 duplicate:(BOOL)a2;
- (void)_validateAction:(unsigned long long)a0 forEvents:(id)a1 delegate:(id)a2 completion:(id /* block */)a3;
- (id)calendarToPasteToWithEvents:(id)a0;
- (id)initWithEventStoreProvider:(id)a0 pasteboard:(id)a1 calendarProvider:(id)a2;

@end
