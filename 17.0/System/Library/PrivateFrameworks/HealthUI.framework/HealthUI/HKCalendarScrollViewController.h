@class NSMutableArray, NSString, NSCalendar, HKDateCache, UIScrollView, HKMonthDayCell, NSDate;
@protocol HKCalendarScrollViewControllerDelegate;

@interface HKCalendarScrollViewController : HKViewController <UIScrollViewDelegate, HKCalendarWeekViewDelegate, HKDateCacheObserver> {
    unsigned long long _numberOfRows;
    NSCalendar *_calendar;
    HKDateCache *_dateCache;
    HKMonthDayCell *_selectedCell;
    NSDate *_initiallyCenteredDate;
    NSMutableArray *_weekViews;
    BOOL _needsInitialOffset;
}

@property (readonly, nonatomic) UIScrollView *scrollView;
@property (nonatomic) double topInset;
@property (weak, nonatomic) id<HKCalendarScrollViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_visibleContentRect;
- (void)scrollToDate:(id)a0 animateIfPossible:(BOOL)a1;
- (struct CGPoint { double x0; double x1; })_centerPointToCenterDate:(id)a0;
- (void)_createWeekViews;
- (id)_currentlyCenteredVisibleWeek;
- (void)_findCenteredWeekAndUpdateTitleIfNecessary;
- (unsigned long long)_firstVisibleWeekIndex;
- (double)_heightOfAllWeekCells;
- (void)_pulseCircle;
- (void)_refreshViewsAndUpdateToday;
- (void)_selectCellForDate:(id)a0;
- (void)_selectTodayCell;
- (struct CGPoint { double x0; double x1; })_setWeekViewsToCenterDate:(id)a0 forceUpdate:(BOOL)a1;
- (id)_startDateToTileWeekViews:(id)a0;
- (id)_weekForDate:(id)a0;
- (id)_weekViewContainingTitleForThisMonth;
- (id)_weekViewForToday;
- (void)dateCacheDidUpdate:(id)a0 onNotification:(id)a1;
- (id)initWithSelectedDate:(id)a0;
- (void)setSelectedCell:(id)a0;
- (void)updateVisibleAccessoryViews;
- (void)week:(id)a0 cellSelected:(id)a1;

@end
