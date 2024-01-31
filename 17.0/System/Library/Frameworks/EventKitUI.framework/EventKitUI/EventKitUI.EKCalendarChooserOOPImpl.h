@class NSSet, EKCalendar;

@interface EventKitUI.EKCalendarChooserOOPImpl : UIViewController {
    void /* unknown type, empty encoding */ hostingController;
    void /* unknown type, empty encoding */ hostView;
    void /* unknown type, empty encoding */ hostViewModel;
    void /* unknown type, empty encoding */ _selectedCalendars;
}

@property (nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;
@property (nonatomic) void /* unknown type, empty encoding */ selectionStyle;
@property (nonatomic) void /* unknown type, empty encoding */ displayStyle;
@property (nonatomic) void /* unknown type, empty encoding */ entityType;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ eventStore;
@property (nonatomic) void /* unknown type, empty encoding */ showIdentityChooser;
@property (nonatomic) void /* unknown type, empty encoding */ showDelegateSetupCell;
@property (nonatomic, retain) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, copy) NSSet *selectedCalendars;
@property (nonatomic) void /* unknown type, empty encoding */ showDetailAccessories;
@property (nonatomic) void /* unknown type, empty encoding */ allowsRotation;
@property (nonatomic) void /* unknown type, empty encoding */ chooserMode;
@property (nonatomic) void /* unknown type, empty encoding */ disableCalendarsUnselectedByFocus;
@property (nonatomic) void /* unknown type, empty encoding */ allowsPullToRefresh;
@property (nonatomic, retain) EKCalendar *selectedCalendar;
@property (nonatomic) void /* unknown type, empty encoding */ showsDeclinedEventsSetting;
@property (nonatomic) void /* unknown type, empty encoding */ explanatoryTextMode;
@property (nonatomic) void /* unknown type, empty encoding */ showAccountStatus;
@property (nonatomic) void /* unknown type, empty encoding */ onlyShowUnmanagedAccounts;

- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithEventStore:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)toggleAllCalendars;

@end
