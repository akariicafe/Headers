@class NSString, UITableViewCell;
@protocol EKCalendarSubscriptionURLEditItemDelegate;

@interface EKCalendarSubscriptionURLEditItem : EKCalendarEditItem <UITextFieldDelegate> {
    UITableViewCell *_cell;
    NSString *_urlString;
    BOOL _inWaitPeriodSinceLastChange;
    NSString *_lastNotifiedURLString;
}

@property (retain, nonatomic) NSString *urlString;
@property (nonatomic) BOOL editable;
@property (weak, nonatomic) id<EKCalendarSubscriptionURLEditItemDelegate> urlEditItemDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (id)headerTitle;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (void)textFieldDidEndEditing:(id)a0;
- (void).cxx_destruct;
- (BOOL)becomeFirstResponder;
- (long long)_cellSelectionStyleForEditable:(BOOL)a0;
- (void)_notifyDelegateThatURLStringChangedIfNeeded;
- (void)_textFieldChanged;
- (id)_textFieldColorForEditable:(BOOL)a0;
- (void)_waitPeriodElapsedSinceLastTextFieldChange;
- (void)calendarEditor:(id)a0 didSelectSubitem:(unsigned long long)a1;
- (BOOL)saveStateToCalendar:(id)a0;

@end
