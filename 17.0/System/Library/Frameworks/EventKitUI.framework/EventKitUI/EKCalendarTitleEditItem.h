@class NSString, UITableViewCell;

@interface EKCalendarTitleEditItem : EKCalendarEditItem <UITextFieldDelegate> {
    UITableViewCell *_cell;
}

@property (nonatomic) BOOL showHeader;
@property (retain, nonatomic) NSString *prefillTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (id)headerTitle;
- (void)reset;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (void).cxx_destruct;
- (BOOL)becomeFirstResponder;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (BOOL)saveStateToCalendar:(id)a0;

@end
