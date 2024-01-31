@class UIView, NSString, EKEvent, NSSet, _TtC10EventKitUI24EKCalendarChooserOOPImpl, EKAbstractCalendarEditor, EKEventStore, EKSource, UIBarButtonItem, EKCalendar;
@protocol EKStyleProvider, EKCalendarChooserDelegate, EKUIViewControllerNavigationDelegate;

@interface EKCalendarChooserOOPWrapperImpl : UIViewController <EKCalendarEditorDelegate, EKCalendarChooserImpl> {
    EKEvent *_event;
    UIBarButtonItem *_addCalendarButton;
    id<EKUIViewControllerNavigationDelegate> _navigationDelegate;
}

@property (retain, nonatomic) _TtC10EventKitUI24EKCalendarChooserOOPImpl *vc;
@property (retain, nonatomic) UIBarButtonItem *showAllButton;
@property (weak, nonatomic) id<EKStyleProvider> styleProvider;
@property (retain, nonatomic) EKAbstractCalendarEditor *presentedEditor;
@property (nonatomic) BOOL allSelected;
@property (retain, nonatomic) UIView *safeAreaCaulk;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long selectionStyle;
@property (weak, nonatomic) id<EKCalendarChooserDelegate> delegate;
@property (nonatomic) BOOL showsDoneButton;
@property (nonatomic) BOOL showsCancelButton;
@property (copy, nonatomic) NSSet *selectedCalendars;
@property (weak, nonatomic) id<EKUIViewControllerNavigationDelegate> navigationDelegate;
@property (retain, nonatomic) EKSource *limitedToSource;
@property (nonatomic) BOOL showDetailAccessories;
@property (nonatomic) BOOL allowsRotation;
@property (nonatomic) long long chooserMode;
@property (nonatomic) BOOL disableCalendarsUnselectedByFocus;
@property (nonatomic) BOOL allowsPullToRefresh;
@property (retain, nonatomic) EKCalendar *selectedCalendar;
@property (nonatomic) BOOL showsDeclinedEventsSetting;
@property (nonatomic) int explanatoryTextMode;
@property (nonatomic) BOOL showAccountStatus;
@property (nonatomic) BOOL onlyShowUnmanagedAccounts;
@property (readonly, nonatomic) EKEventStore *eventStore;
@property (nonatomic) BOOL showsRefreshButton;
@property (nonatomic) BOOL disableCalendarEditing;

+ (id)hideAllString;
+ (id)showAllString;

- (void)done:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)setToolbarItems:(id)a0;
- (void)viewDidLoad;
- (id)toolbarItems;
- (unsigned long long)entityType;
- (id)navigationController;
- (void).cxx_destruct;
- (long long)displayStyle;
- (void)cancel:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)navigationItem;
- (void)setToolbarItems:(id)a0 animated:(BOOL)a1;
- (id)displayedEditor;
- (void)_commonAddCalendarButtonPressed:(id)a0;
- (id)_ekCalendarChooser;
- (void)_layoutNavToolbarControls;
- (void)_selectAllCalendarsAndNotify:(BOOL)a0;
- (void)addCalendarButtonPressed:(id)a0;
- (void)calendarEditor:(id)a0 didCompleteWithAction:(int)a1;
- (void)centerOnCalendar:(id)a0;
- (void)centerOnCalendar:(id)a0 animated:(BOOL)a1;
- (id)centeredCalendar;
- (void)focusModeConfigurationChanged;
- (void)groupHeaderChangedHeight:(id)a0;
- (void)groupShowAllTapped:(id)a0;
- (BOOL)hasAccountThatCanCreateCalendars;
- (BOOL)hasInProcessNavBar;
- (void)identityChanged:(id)a0;
- (id)initWithSelectionStyle:(long long)a0 displayStyle:(long long)a1 entityType:(unsigned long long)a2 eventStore:(id)a3;
- (id)initWithSelectionStyle:(long long)a0 displayStyle:(long long)a1 entityType:(unsigned long long)a2 forEvent:(id)a3 eventStore:(id)a4 limitedToSource:(id)a5 showIdentityChooser:(BOOL)a6 showDelegateSetupCell:(BOOL)a7 showAccountStatus:(BOOL)a8;
- (id)initWithSelectionStyle:(long long)a0 displayStyle:(long long)a1 eventStore:(id)a2;
- (void)openAddRegularCalendarWithTitle:(id)a0;
- (void)redisplayEditor:(id)a0 completion:(id /* block */)a1;
- (void)remoteCalendarChooserSelectionChanged:(id)a0 allSelected:(BOOL)a1;
- (void)selectAllCalendars;
- (void)setShouldOverrideAuthorizationStatus:(BOOL)a0 withRemoteUIStatus:(long long)a1 displayStyle:(long long)a2;
- (void)setShowAll:(BOOL)a0;
- (void)showAddSubscribedCalendarWithURL:(id)a0;
- (void)showAllButtonPressed;
- (id)sourceForSelectedIdentity;

@end
