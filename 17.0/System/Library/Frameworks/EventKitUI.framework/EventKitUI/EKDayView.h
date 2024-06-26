@class NSDateComponents, UIVisualEffect, NSObject, UIPinchGestureRecognizer, UITapGestureRecognizer, UIColor, NSCalendar, EKEvent, NSString, UIView, EKDayViewContent, EKDayTimeView, UIScrollView, NSArray, NSTimer, EKDayAllDayView, UIImageView;
@protocol EKDayViewDataSource, OS_dispatch_queue, EKDayViewDelegate;

@interface EKDayView : UIView <UIScrollViewDelegate, EKDayAllDayViewDelegate, EKDayViewContentDelegate, EKDayTimeViewDelegate> {
    double _nextDSTTransition;
    BOOL _scrollbarShowsInside;
    BOOL _scrollingToOccurrence;
    BOOL _settingDate;
    BOOL _userScrolling;
    BOOL _scrollToOccurrencesOnNextReload;
    UIImageView *_topVerticalGridExtension;
    UIImageView *_bottomVerticalGridExtension;
    UIView *_bottomLine;
    NSArray *_existingTimedOcurrences;
    struct CGSize { double width; double height; } _scrolledToFirstVisibleSecondForSize;
    EKDayAllDayView *_allDayView;
    EKDayViewContent *_dayContent;
    EKDayTimeView *_timeView;
    UIScrollView *_scroller;
    NSTimer *_timeMarkerTimer;
    struct CGPoint { double x; double y; } _lastPinchDistance;
    struct CGPoint { double x; double y; } _lastPinchPoint1;
    double _lastPinchScale;
    BOOL _pinching;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    long long _targetSizeClass;
    BOOL _layoutWhenJoiningViewHierarchy;
    NSObject<OS_dispatch_queue> *_reloadQueue;
}

@property (weak, nonatomic) id<EKDayViewDelegate> delegate;
@property (weak, nonatomic) id<EKDayViewDataSource> dataSource;
@property (copy, nonatomic) NSDateComponents *displayDate;
@property (copy, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) double dayStart;
@property (readonly, nonatomic) double dayEnd;
@property (nonatomic) int firstVisibleSecond;
@property (nonatomic) BOOL allowsOccurrenceSelection;
@property (nonatomic) BOOL alignsMidnightToTop;
@property (nonatomic) BOOL showOnlyAllDayArea;
@property (nonatomic) double additionalLeftPadding;
@property (readonly, nonatomic) double scrollBarOffset;
@property (readonly, nonatomic) NSArray *occurrenceViews;
@property (nonatomic) double topYBoundaryForOccurrenceText;
@property (readonly, nonatomic) NSArray *allOccurrenceViews;
@property (retain, nonatomic) EKEvent *dimmedOccurrence;
@property (readonly, nonatomic) EKDayAllDayView *allDayView;
@property (readonly, nonatomic) EKDayViewContent *dayContent;
@property (readonly, nonatomic) EKDayTimeView *timeView;
@property (readonly, nonatomic) double leftContentInset;
@property (nonatomic) double topContentInset;
@property (nonatomic) double bottomContentInset;
@property (nonatomic) BOOL isNowVisible;
@property (nonatomic) BOOL scrollEventsInToViewIgnoresVisibility;
@property (nonatomic) BOOL shouldEverShowTimeIndicators;
@property (nonatomic) BOOL animatesTimeMarker;
@property (nonatomic) BOOL showsTimeLine;
@property (nonatomic) BOOL showsTimeMarker;
@property (nonatomic) BOOL showsTimeLabel;
@property (nonatomic) BOOL eventsFillGrid;
@property (nonatomic) BOOL showsLeftBorder;
@property (nonatomic) BOOL allowsScrolling;
@property (nonatomic) BOOL sizeTimeViewUsingOnlyHourText;
@property (nonatomic) int outlineStyle;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } hoursToRender;
@property (retain, nonatomic) UIColor *timeViewTextColor;
@property (retain, nonatomic) UIColor *gridLineColor;
@property (retain, nonatomic) UIColor *occurrenceTitleColor;
@property (retain, nonatomic) UIColor *occurrenceTimeColor;
@property (retain, nonatomic) UIColor *occurrenceLocationColor;
@property (retain, nonatomic) UIColor *occurrenceTextBackgroundColor;
@property (nonatomic) BOOL usesVibrantGridDrawing;
@property (nonatomic) BOOL allowPinchingHourHeights;
@property (nonatomic) double todayScrollSecondBuffer;
@property (retain, nonatomic) UIVisualEffect *gridVisualEffect;
@property (retain, nonatomic) UIVisualEffect *timeViewVisualEffect;
@property (nonatomic) long long orientation;
@property (nonatomic) double scrollAnimationDurationOverride;
@property (nonatomic) double hourScale;
@property (readonly, nonatomic) double scrollOffset;
@property (nonatomic) struct CGPoint { double x0; double x1; } normalizedContentOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willMoveToSuperview:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)_localeChanged;
- (id)selectedEvent;
- (BOOL)scrollTowardPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_scrollToSecond:(int)a0 offset:(double)a1 animated:(BOOL)a2 whenFinished:(id /* block */)a3;
- (double)_positionOfSecond:(int)a0;
- (void)selectEvent:(id)a0;
- (void)setBackgroundColor:(id)a0;
- (long long)_sizeClass;
- (struct CGPoint { double x0; double x1; })pointAtDate:(double)a0 isAllDay:(BOOL)a1;
- (void)willMoveToWindow:(id)a0;
- (id)selectedEventsForEditMenu;
- (void)dealloc;
- (void)setOpaque:(BOOL)a0;
- (void)reloadDataSynchronously;
- (void)dayViewContent:(id)a0 didTapInEmptySpaceOnDay:(double)a1;
- (void)reloadData;
- (void)_scrollViewWillBeginDragging:(id)a0;
- (BOOL)containsOccurrences;
- (double)_scrollRate;
- (void)scrollToNowAnimated:(BOOL)a0 whenFinished:(id /* block */)a1;
- (void)updateMarkerPosition;
- (id)allDayViewRequestsCurrentDisplayDate:(id)a0;
- (void)dayViewContent:(id)a0 didSelectEvent:(id)a1 userInitiated:(BOOL)a2;
- (void)scrollToDate:(id)a0 animated:(BOOL)a1 whenFinished:(id /* block */)a2;
- (double)highlightedHour;
- (void)attemptDisplayReviewPrompt;
- (id)occurrenceViewAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_clearVerticalGridExtensionImageCache;
- (void)scrollEventsIntoViewAnimated:(BOOL)a0;
- (double)dateAtPoint:(struct CGPoint { double x0; double x1; })a0 isAllDay:(BOOL *)a1;
- (void)allDayViewDidLayoutSubviews:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentTimeRectInView:(id)a0 requireThumb:(BOOL)a1;
- (void)_dayViewPinched:(id)a0;
- (void)adjustForSignificantTimeChange;
- (void)dayViewContentDidCompleteAsyncLoadAndLayout:(id)a0;
- (void)highlightHour:(double)a0;
- (void)_doubleTap:(id)a0;
- (id)presentationControllerForEditMenu;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (BOOL)_isTimeMarkerFullyUnobstructed;
- (void)removeFromSuperview;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (double)dateAtPoint:(struct CGPoint { double x0; double x1; })a0 isAllDay:(BOOL *)a1 requireAllDayRegionInsistence:(BOOL)a2;
- (void)resetOccurrenceViewColors;
- (void)dayContentView:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)occurrenceViewForEvent:(id)a0;
- (void)relayoutExistingTimedOccurrences;
- (BOOL)_showingAllDaySection;
- (void)stopScrolling;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentTimeRectInView:(id)a0;
- (void)bringEventToFront:(id)a0;
- (int)_secondAtPosition:(double)a0;
- (double)_verticalOffset;
- (id)_generateVerticalGridExtensionImage;
- (BOOL)eventOccursOnThisDay:(id)a0;
- (void)loadData:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)dayViewContent:(id)a0 didCreateOccurrenceViews:(id)a1;
- (void)insertViewForEvent:(id)a0 belowViewForOtherEvent:(id)a1;
- (double)_adjustSecondBackwardForDSTHole:(double)a0;
- (id)verticalScrollView;
- (double)yPositionPerhapsMatchingAllDayOccurrence:(id)a0;
- (id)dayViewContent:(id)a0 selectedCopyViewForOccurrenceView:(id)a1;
- (struct CGPoint { double x0; double x1; })_pinchDistanceForGestureRecognizer:(id)a0;
- (void)dayViewContent:(id)a0 didTapPinnedOccurrence:(id)a1;
- (void)_startMarkerTimer;
- (void)_scrollToSecond:(int)a0 animated:(BOOL)a1 whenFinished:(id /* block */)a2;
- (void)adjustFrameToSpanToMidnightFromStartDate:(id)a0;
- (void)addViewToScroller:(id)a0 isAllDay:(BOOL)a1;
- (void)_notifyDelegateOfFinishedScrollingToOccurrence;
- (double)_adjustSecondForwardForDSTHole:(double)a0;
- (void)_disposeAllDayView;
- (void).cxx_destruct;
- (void)_timeViewTapped:(id)a0;
- (BOOL)isAllDayLabelHighlighted;
- (void)_invalidateMarkerTimer;
- (void)firstVisibleSecondChanged;
- (void)_createAllDayViewWithSizeClass:(long long)a0 rightClickDelegate:(id)a1;
- (BOOL)_viewContentShouldDrawSynchronously;
- (void)setAllDayLabelHighlighted:(BOOL)a0;
- (double)allDayRegionHeight;
- (BOOL)allDayViewContentShouldDrawSynchronously:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForEvent:(id)a0;
- (double)scaledHourHeight;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 sizeClass:(long long)a1 orientation:(long long)a2 displayDate:(id)a3 backgroundColor:(id)a4 opaque:(BOOL)a5 scrollbarShowsInside:(BOOL)a6 rightClickDelegate:(id)a7;
- (void)scrollToEvent:(id)a0 animated:(BOOL)a1 completionBlock:(id /* block */)a2;
- (void)_adjustForDateOrCalendarChange;
- (void)allDayView:(id)a0 didSelectEvent:(id)a1 userInitiated:(BOOL)a2;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_scrollerRect;
- (void)scrollToDate:(id)a0 offset:(double)a1 animated:(BOOL)a2 whenFinished:(id /* block */)a3;
- (void)setTimeZone:(id)a0;
- (void)_updateContentForSizeCategoryChange:(id)a0;
- (BOOL)dayViewContentShouldDrawSynchronously:(id)a0;
- (void)configureOccurrenceViewForGestureController:(id)a0;
- (double)maximumHourScale;
- (void)scrollViewDidScroll:(id)a0;
- (double)_scrollZoneTop;
- (void)scrollViewWillBeginDragging:(id)a0;
- (double)minimumHourScale;
- (void)setScrollerYInset:(double)a0 keepingYPointVisible:(double)a1;

@end
