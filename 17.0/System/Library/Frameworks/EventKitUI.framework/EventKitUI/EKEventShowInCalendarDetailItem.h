@class EKDayPreviewController, CUIKCalendarModel, EKUITableViewCell, NSDate;

@interface EKEventShowInCalendarDetailItem : EKEventDetailItem {
    EKUITableViewCell *_cell;
    EKDayPreviewController *_containedDayViewController;
    CUIKCalendarModel *_model;
}

@property (retain, nonatomic) NSDate *proposedTime;

- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (id)initWithModel:(id)a0;
- (void)reset;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (void)_datesForPreviewViewControllerWithStartDate:(id *)a0 endDate:(id *)a1;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forSubitemAtIndex:(unsigned long long)a1;
- (void)_reloadContainedViewControllerIfNeeded;
- (void).cxx_destruct;
- (id)_dayPreviewViewController;
- (BOOL)configureWithCalendar:(id)a0 preview:(BOOL)a1;

@end
