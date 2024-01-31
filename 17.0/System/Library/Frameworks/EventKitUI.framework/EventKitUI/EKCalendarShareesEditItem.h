@class NSString, NSMutableArray, UILabel;

@interface EKCalendarShareesEditItem : EKCalendarEditItem <EKShareeViewControllerDelegate, EKShareePickerViewControllerDelegate> {
    UILabel *_descriptionLabel;
}

@property (retain, nonatomic) NSMutableArray *shareeCells;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (id)headerTitle;
- (void)reset;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (unsigned long long)numberOfSubitems;
- (void).cxx_destruct;
- (id)footerTitle;
- (id)_addPersonCell;
- (void)_dismissShareePicker;
- (void)_popBackToCalendarEditor:(BOOL)a0;
- (id)_shareeCellForName:(id)a0 detailText:(id)a1 additionalDetailText:(id)a2;
- (id)_stringForShareeAccessLevel:(unsigned long long)a0;
- (id)_stringForShareeStatus:(unsigned long long)a0;
- (void)calendarEditor:(id)a0 didSelectSubitem:(unsigned long long)a1;
- (BOOL)configureWithCalendar:(id)a0;
- (id)eventStoreForShareePickerViewController:(id)a0;
- (BOOL)saveStateToCalendar:(id)a0;
- (void)shareePickerViewController:(id)a0 didCompleteWithAction:(int)a1;
- (void)shareeViewController:(id)a0 didCompleteWithAction:(int)a1;
- (void)shareeViewControllerDidChangeAccessLevel:(id)a0;

@end
