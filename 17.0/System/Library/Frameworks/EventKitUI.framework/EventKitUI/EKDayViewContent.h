@class UIView, NSCalendar, EKEvent, NSString, UITraitCollection, EKCalendarDate, NSMutableArray, NSTimeZone, EKDayGridView, UIColor;
@protocol EKDayViewContentDelegate;

@interface EKDayViewContent : UIView <CUIKSingleDayTimelineLayoutScreenUtils, EKDayOccurrenceViewDelegate, UIGestureRecognizerDelegate> {
    EKDayGridView *_grid;
    UIView *_saturdayDarkeningView;
    UIView *_sundayDarkeningView;
    unsigned long long _daysToDisplay;
    NSMutableArray *_lastLayoutWidthForDay;
    BOOL _loadingOccurrences;
    BOOL _putSelectionOnTop;
    BOOL _hasCustomOccurrencePadding;
    EKEvent *_selectedEvent;
    NSMutableArray *_dayStarts;
    NSMutableArray *_itemsForPreloadByDay;
    NSMutableArray *_itemsForPreloadByDayByEndDate;
    NSMutableArray *_itemsByDay;
    NSMutableArray *_itemsByDayByEndDate;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _latestVisibleRect;
    double *_visiblePinnedStackHeightAbove;
    double *_visiblePinnedStackHeightBelow;
    NSMutableArray *_geometryDelegates;
    NSMutableArray *_reusableViews;
    BOOL _dataLoaded;
    long long _sizeClass;
    BOOL _shouldLayoutInReverse;
    BOOL _shouldAnimateLayout;
    NSMutableArray *_temporaryViewCacheByDay;
    long long _saveTemporaryViewsEntryCount;
}

@property (retain, nonatomic) UITraitCollection *stagedTraitCollection;
@property (readonly, nonatomic) EKCalendarDate *startDate;
@property (readonly, nonatomic) EKCalendarDate *endDate;
@property (copy, nonatomic) NSCalendar *calendar;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (weak, nonatomic) id<EKDayViewContentDelegate> delegate;
@property (nonatomic) BOOL offscreenOccurrencePinningEnabled;
@property (nonatomic) BOOL allowsOccurrenceSelection;
@property (nonatomic) BOOL showsLeftBorder;
@property (nonatomic) BOOL eventsFillGrid;
@property (nonatomic) BOOL usesSmallText;
@property (nonatomic) BOOL darkensWeekends;
@property (nonatomic) BOOL reduceLayoutProcessingForAnimation;
@property (nonatomic) double fixedDayWidth;
@property (retain, nonatomic) UIColor *occurrenceTitleColor;
@property (retain, nonatomic) UIColor *occurrenceTimeColor;
@property (retain, nonatomic) UIColor *occurrenceLocationColor;
@property (retain, nonatomic) UIColor *occurrenceTextBackgroundColor;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } occurrencePadding;
@property (readonly, nonatomic) double firstEventSecond;
@property (retain, nonatomic, setter=selectEvent:) EKEvent *selectedEvent;
@property (retain, nonatomic) EKEvent *dimmedOccurrence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setOccurrences:(id)a0;
- (id)grid;
- (void)applyContentItem:(id)a0 toView:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_dayRangeForEventWithStartDate:(id)a0 endDate:(id)a1;
- (double)_dayWidth;
- (id)selectedEventsForEditMenu;
- (void)setOrientation:(long long)a0;
- (void)dealloc;
- (double)dateForPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })pointForDate:(double)a0;
- (id)occurrenceViews;
- (void)setViewsDimmed:(BOOL)a0 forEvent:(id)a1;
- (unsigned long long)_dayIndexForAllIndex:(unsigned long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 sizeClass:(long long)a1 orientation:(long long)a2;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)_adjustViewsForPinning;
- (void)attemptDisplayReviewPrompt;
- (void)_configureOccurrenceViewMarginAndPadding:(id)a0;
- (id)itemsForPreloadByDay;
- (void)prepareForReuseIsReload:(BOOL)a0;
- (id)presentationControllerForEditMenu;
- (id)selectedCopyViewForDayOccurrenceView:(id)a0;
- (double)RoundToScreenScale:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 sizeClass:(long long)a1 orientation:(long long)a2 backgroundColor:(id)a3 opaque:(BOOL)a4 numberOfDaysToDisplay:(unsigned long long)a5;
- (id)occurrenceViewForEvent:(id)a0;
- (void)rectBecameVisible:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dayOccurrenceViewSelected:(id)a0 source:(unsigned long long)a1;
- (void)setNeedsLayout;
- (void)applyLoadedOccurrencesWithBatching:(BOOL)a0 animated:(BOOL)a1 reverse:(BOOL)a2 completion:(id /* block */)a3;
- (id)dayStarts;
- (void)_computeDayStartsAndEnds;
- (void)loadOccurrences:(id)a0;
- (void)loadAndLayoutOccurrences:(id)a0 reverse:(BOOL)a1;
- (void)_layoutDay:(unsigned long long)a0 isLoadingAsync:(BOOL)a1;
- (id)visibleItemsByDay;
- (void)_layoutDaysIfVisible;
- (void)clearTemporaryViews;
- (BOOL)_doOffscreenOccurrences;
- (void).cxx_destruct;
- (BOOL)_getBottomPinRegion:(double *)a0 dayIndex:(unsigned long long *)a1 forPoint:(struct CGPoint { double x0; double x1; })a2;
- (id)occurrenceViewForEvent:(id)a0 onDate:(double)a1;
- (BOOL)_layoutDayIfNeeded:(long long)a0 isLoadingAsync:(BOOL)a1;
- (void)setHoursToPadTop:(double)a0;
- (BOOL)eventsIntersectRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insetsForInterfaceLayout:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setStartDateWithDateComponents:(id)a0;
- (void)layoutSubviews;
- (id)allVisibleItems;
- (id)lastDisplayedSecond;
- (void)applyLoadedOccurrenceBatchStartingAtIndex:(long long)a0 batchSize:(long long)a1 fromArray:(id)a2 withStartDate:(id)a3 animated:(BOOL)a4 reverse:(BOOL)a5 completion:(id /* block */)a6;
- (void)_tapRecognized:(id)a0;
- (void)configureOccurrenceViewForGestureController:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_dayRangeForEvent:(id)a0 useProposedTime:(BOOL)a1;
- (void)movePreloadedItemsToVisible;
- (void)saveTemporaryViews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
