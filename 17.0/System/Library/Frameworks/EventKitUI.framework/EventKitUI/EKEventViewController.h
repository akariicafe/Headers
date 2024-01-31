@class EKEvent, NSString, UIScrollView, UIViewController;
@protocol EKEventViewControllerImpl, EKEventViewDelegate, EKUIViewControllerNavigationDelegate;

@interface EKEventViewController : UIViewController <EKUIManagedViewController> {
    UIViewController<EKEventViewControllerImpl> *_impl;
}

@property (nonatomic) BOOL eventEditViewPresented;
@property (nonatomic) BOOL calendarPreviewIsInlineDayView;
@property (nonatomic) BOOL inlineDayViewRespectsSelectedCalendarsFilter;
@property (nonatomic, getter=isICSPreview) BOOL ICSPreview;
@property (nonatomic) BOOL allowsInviteResponses;
@property (nonatomic) BOOL showsAddToCalendarForICSPreview;
@property (nonatomic) BOOL showsUpdateCalendarForICSPreview;
@property (nonatomic) BOOL showsDeleteForICSPreview;
@property (nonatomic) BOOL allowsSubitems;
@property (nonatomic) BOOL showsDoneButton;
@property (nonatomic) BOOL showsOutOfDateMessage;
@property (nonatomic) BOOL showsDelegatorMessage;
@property (nonatomic) BOOL showsDelegateMessage;
@property (nonatomic) BOOL showsDetectedConferenceItem;
@property (nonatomic) BOOL minimalMode;
@property (nonatomic) BOOL noninteractivePlatterMode;
@property (nonatomic) BOOL isLargeDayView;
@property (weak, nonatomic) id<EKUIViewControllerNavigationDelegate> navigationDelegate;
@property (nonatomic) int editorShowTransition;
@property (nonatomic) int editorHideTransition;
@property (readonly, nonatomic) UIScrollView *eventDetailsScrollView;
@property (readonly, nonatomic) UIViewController *eventDetailsViewController;
@property (weak, nonatomic) id<EKEventViewDelegate> delegate;
@property (retain, nonatomic) EKEvent *event;
@property (nonatomic) BOOL allowsEditing;
@property (nonatomic) BOOL allowsCalendarPreview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)commonInit;
- (BOOL)wantsManagement;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)setNeedsReload;
- (void)viewDidLoad;
- (id)context;
- (BOOL)canManagePresentationStyle;
- (void)setShouldOverrideAuthorizationStatus:(BOOL)a0 withRemoteUIStatus:(long long)a1;
- (void)loadView;
- (void)openAttendeesDetailItem;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_performEditKeyCommand;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)setContext:(id)a0;
- (void)editButtonTapped;
- (void).cxx_destruct;
- (void)doneButtonTapped;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithRemoteUI:(BOOL)a0;
- (void)fullReloadWithNewEvent:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;

@end
