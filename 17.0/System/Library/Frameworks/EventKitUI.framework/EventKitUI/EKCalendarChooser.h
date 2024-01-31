@class UIViewController, NSSet, EKEventStore, EKCalendar;
@protocol EKCalendarChooserDelegate, EKCalendarChooserImpl;

@interface EKCalendarChooser : UIViewController {
    UIViewController<EKCalendarChooserImpl> *_impl;
}

@property (readonly, nonatomic) BOOL allSelected;
@property (nonatomic) BOOL allowsRotation;
@property (retain, nonatomic) EKCalendar *selectedCalendar;
@property (nonatomic) long long chooserMode;
@property (nonatomic) BOOL disableCalendarEditing;
@property (nonatomic) BOOL disableCalendarsUnselectedByFocus;
@property (nonatomic) BOOL showsRefreshButton;
@property (nonatomic) BOOL allowsPullToRefresh;
@property (nonatomic) BOOL showsDeclinedEventsSetting;
@property (retain, nonatomic) EKEventStore *eventStore;
@property (nonatomic) int explanatoryTextMode;
@property (nonatomic) BOOL showAccountStatus;
@property (nonatomic) BOOL onlyShowUnmanagedAccounts;
@property (nonatomic) BOOL showDetailAccessories;
@property (nonatomic) BOOL allowsEdit;
@property (readonly, nonatomic) long long selectionStyle;
@property (weak, nonatomic) id<EKCalendarChooserDelegate> delegate;
@property (nonatomic) BOOL showsDoneButton;
@property (nonatomic) BOOL showsCancelButton;
@property (copy, nonatomic) NSSet *selectedCalendars;

- (void)commonInit;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)setStyleProvider:(id)a0;
- (id)displayedEditor;
- (void)centerOnCalendar:(id)a0;
- (void)centerOnCalendar:(id)a0 animated:(BOOL)a1;
- (id)centeredCalendar;
- (void)focusModeConfigurationChanged;
- (void)groupHeaderChangedHeight:(id)a0;
- (void)groupShowAllTapped:(id)a0;
- (void)identityChanged:(id)a0;
- (id)initWithRemoteUI:(BOOL)a0 selectionStyle:(long long)a1 displayStyle:(long long)a2 entityType:(unsigned long long)a3 forEvent:(id)a4 eventStore:(id)a5 limitedToSource:(id)a6 showIdentityChooser:(BOOL)a7 showDelegateSetupCell:(BOOL)a8 showAccountStatus:(BOOL)a9;
- (id)initWithSelectionStyle:(long long)a0 displayStyle:(long long)a1 entityType:(unsigned long long)a2 eventStore:(id)a3;
- (id)initWithSelectionStyle:(long long)a0 displayStyle:(long long)a1 entityType:(unsigned long long)a2 forEvent:(id)a3 eventStore:(id)a4 limitedToSource:(id)a5 showIdentityChooser:(BOOL)a6 showDelegateSetupCell:(BOOL)a7 showAccountStatus:(BOOL)a8;
- (id)initWithSelectionStyle:(long long)a0 displayStyle:(long long)a1 eventStore:(id)a2;
- (void)openAddRegularCalendarWithTitle:(id)a0;
- (void)redisplayEditor:(id)a0 completion:(id /* block */)a1;
- (void)selectAllCalendars;
- (void)setShouldOverrideAuthorizationStatus:(BOOL)a0 withRemoteUIStatus:(long long)a1 displayStyle:(long long)a2;
- (void)setShowAll:(BOOL)a0;
- (void)showAddSubscribedCalendarWithURL:(id)a0;
- (void)showAllButtonPressed;
- (id)sourceForSelectedIdentity;

@end
