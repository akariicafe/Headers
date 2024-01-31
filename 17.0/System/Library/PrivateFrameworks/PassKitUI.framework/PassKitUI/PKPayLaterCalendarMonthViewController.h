@class UIGestureRecognizer, NSString, PKPayLaterInstallmentsMonthPresenter, NSCalendar, PKDashboardTitleHeaderView, PKHorizontalScrollingChildLayout, PKPayLaterPaymentIntentController, NSDateFormatter, PKPayLaterInstallmentPresenter, PKPayLaterInstallmentsMonth;
@protocol PKHorizontalScrollingViewControllerDelegate;

@interface PKPayLaterCalendarMonthViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout, PKCalendarMonthDataSource, PKHorizontalScrollingChildLayoutDataSource, PKCalendarMonthAppearance, PKHorizontalScrollingChildViewControllerProtocol> {
    PKPayLaterInstallmentsMonthPresenter *_installmentsMonthPresenter;
    PKPayLaterInstallmentPresenter *_installmentPresenter;
    PKPayLaterPaymentIntentController *_paymentIntentController;
    PKHorizontalScrollingChildLayout *_layout;
    BOOL _isLowEndDevice;
    PKPayLaterInstallmentsMonth *_installmentsMonth;
    NSDateFormatter *_weekdayFormatter;
    NSDateFormatter *_dayFormatter;
    NSDateFormatter *_monthYearFormatter;
    NSCalendar *_calendar;
    PKDashboardTitleHeaderView *_sampleHeaderView;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentInset;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PKHorizontalScrollingViewControllerDelegate> scrollingDelegate;
@property (retain, nonatomic) UIGestureRecognizer *gestureRecognizerRequiredToFail;
@property (nonatomic) long long contentInsetAdjustmentBehavior;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (nonatomic) BOOL visible;
@property (nonatomic) double alphaTransition;

- (id)footer;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)calendar;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)viewDidLoad;
- (id)data;
- (void).cxx_destruct;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)canSelectDate:(id)a0;
- (void)_configureHeaderView:(id)a0 inSection:(long long)a1;
- (id)_installmentItemForInstallment:(id)a0;
- (BOOL)isDateSelected:(id)a0;
- (BOOL)shouldShowDate:(id)a0;
- (void)_applyMaskToCell:(id)a0 section:(long long)a1 firstInSection:(BOOL)a2 lastInSection:(BOOL)a3;
- (BOOL)_hasHeaderForSection:(long long)a0;
- (double)alphaForIndexPath:(id)a0 visible:(BOOL)a1 transition:(double)a2;
- (id)calendarMonthStartDate;
- (id)decorationViewForDayView:(id)a0 date:(id)a1;
- (unsigned int)horizontalAlignmentForSection:(long long)a0;
- (id)indexPathForCalendar;
- (id)initWithInstallmentsMonthPresenter:(id)a0 installmentPresenter:(id)a1 paymentIntentController:(id)a2;
- (double)lineSpacingForSection:(long long)a0;
- (unsigned long long)numberOfDaysInWeek;
- (unsigned long long)numberOfWeeks;
- (void)setData:(id)a0 swap:(BOOL)a1;
- (void)setInstallmentsMonth:(id)a0 swap:(BOOL)a1;
- (id)stringForDay:(id)a0;
- (id)stringForWeekday:(id)a0;

@end
