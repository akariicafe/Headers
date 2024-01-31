@class NSArray, NSMutableArray;
@protocol UICalendarSelectionMultiDateDelegate;

@interface UICalendarSelectionMultiDate : UICalendarSelection {
    NSMutableArray *_selectedDates;
    struct { unsigned char canSelect : 1; unsigned char canDeselect : 1; unsigned char didSelect : 1; unsigned char didDeselect : 1; } _delegateImplements;
}

@property (copy, nonatomic) NSArray *selectedDates;
@property (readonly, weak, nonatomic) id<UICalendarSelectionMultiDateDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (BOOL)highlightsToday;
- (id)_removeSelectedDatesSatisfyingPredicate:(id /* block */)a0;
- (id)_sanitizeDateComponents:(id)a0 calendar:(id)a1;
- (BOOL)canSelectDate:(id)a0;
- (void)didChangeAvailableDateRange:(id)a0;
- (void)didChangeCalendar:(id)a0;
- (void)didChangeVisibleMonth:(id)a0;
- (void)didDeselectDate:(id)a0;
- (void)didMoveToCalendarView;
- (void)didSelectDate:(id)a0;
- (void)selectAllDatesAnimated:(BOOL)a0;
- (void)setSelectedDates:(id)a0 animated:(BOOL)a1;
- (BOOL)shouldDeselectDate:(id)a0;
- (void)willMoveToCalendarView:(id)a0;

@end
