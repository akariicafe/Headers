@class EKSource, NSString, EKCalendarShareesEditItem, EKCalendarColorEditItem;

@interface EKCalendarEditor : EKAbstractCalendarEditor {
    EKCalendarShareesEditItem *_shareesEditItem;
    EKCalendarColorEditItem *_colorEditItem;
    unsigned long long _entityType;
    EKSource *_limitedToSource;
}

@property (retain, nonatomic) NSString *prefillCalendarTitle;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)traitEnvironment:(id)a0 didChangeTraitCollection:(id)a1;
- (void)contentSizeCategoryDidChangeNotification:(id)a0;
- (BOOL)_shouldShowDeleteButton;
- (void)_deleteClicked:(id)a0;
- (void)_deleteCalendar;
- (void)calendarItemStartedEditing:(id)a0;
- (id)initWithCalendar:(id)a0 eventStore:(id)a1 entityType:(unsigned long long)a2 limitedToSource:(id)a3;
- (id)loadEditItems;

@end
