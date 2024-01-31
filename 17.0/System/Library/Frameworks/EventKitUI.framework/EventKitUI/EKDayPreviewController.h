@class CUIKCalendarModel, NSString, NSArray, UIView, NSDate, EKEvent, EKDayView, UIViewController;
@protocol EKEditItemViewControllerDelegate;

@interface EKDayPreviewController : UIViewController <EKDayViewDataSource, EKEditItemViewControllerProtocol> {
    BOOL _firstshow;
    BOOL _userHasTappedToExpand;
    BOOL _isAnimating;
    NSArray *_cachedTimedEvents;
    UIView *_roundedView;
    EKDayView *_dayView;
    NSDate *_date;
    NSDate *_originalEventStartDate;
    NSDate *_originalEventEndDate;
    BOOL _hasOverriddenEventDates;
    NSDate *_overriddenEventStartDate;
    NSDate *_overriddenEventEndDate;
    CUIKCalendarModel *_model;
    EKEvent *_event;
    BOOL _hasOverriddenStatus;
    BOOL _requireScrollPositionCorrection;
}

@property (nonatomic) unsigned long long style;
@property (weak, nonatomic) UIViewController *hostingViewController;
@property (nonatomic) BOOL hidesAllDayEvents;
@property (nonatomic) BOOL respectsSelectedCalendarsFilter;
@property (nonatomic) long long overriddenParticipantStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<EKEditItemViewControllerDelegate> editDelegate;
@property (nonatomic) BOOL presentModally;
@property (nonatomic) BOOL editItemShouldBeAskedForInjectableViewController;
@property (nonatomic) BOOL useCustomBackButton;

- (void)reload;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_displayedHoursRange;
- (void)viewWillAppear:(BOOL)a0;
- (void)_setupDayView;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLayoutSubviews;
- (id)dayView:(id)a0 eventsForStartDate:(id)a1 endDate:(id)a2;
- (void)viewDidLoad;
- (void)_setupAutoLayout;
- (void)_setNewVisibleHourLabels;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (id)_hourMaskForEvents:(id)a0;
- (id)_anchorEvent;
- (void)_scrollDayViewToCorrectOffsetAnimated:(BOOL)a0;
- (void)_updateIvarsWithDate:(id)a0 event:(id)a1 overriddenEventStartDate:(id)a2 overriddenEventEndDate:(id)a3;
- (id)_dateForFirstHourMarker;
- (BOOL)_eventOccursOnThisDay:(id)a0;
- (void).cxx_destruct;
- (id)initWithDate:(id)a0 event:(id)a1 overriddenEventStartDate:(id)a2 overriddenEventEndDate:(id)a3;
- (id)_eventsForStartDate:(id)a0 endDate:(id)a1;
- (BOOL)_shouldShowAllVisibleEvents;
- (double)_dayViewHeight;
- (id)_selectedCalendars;
- (void)toggleExpandedState;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)reloadWithNewDate:(id)a0 event:(id)a1 overriddenEventStartDate:(id)a2 overriddenEventEndDate:(id)a3;
- (id)initWithDate:(id)a0 event:(id)a1 overriddenEventStartDate:(id)a2 overriddenEventEndDate:(id)a3 model:(id)a4;

@end
