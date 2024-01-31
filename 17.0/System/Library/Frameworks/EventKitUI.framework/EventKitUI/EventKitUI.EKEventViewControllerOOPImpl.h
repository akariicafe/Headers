@interface EventKitUI.EKEventViewControllerOOPImpl : UIViewController {
    void /* unknown type, empty encoding */ hostingController;
    void /* unknown type, empty encoding */ hostView;
    void /* unknown type, empty encoding */ hostViewModel;
}

@property (nonatomic) void /* unknown type, empty encoding */ hasInProcessNavBar;
@property (nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;
@property (nonatomic, retain) void /* unknown type, empty encoding */ event;
@property (nonatomic) void /* unknown type, empty encoding */ allowsEditing;
@property (nonatomic, retain) void /* unknown type, empty encoding */ delegate;
@property (nonatomic) void /* unknown type, empty encoding */ allowsCalendarPreview;
@property (nonatomic) void /* unknown type, empty encoding */ showsDoneButton;
@property (nonatomic) void /* unknown type, empty encoding */ calendarPreviewIsInlineDayView;
@property (nonatomic) void /* unknown type, empty encoding */ inlineDayViewRespectsSelectedCalendarsFilter;
@property (nonatomic) void /* unknown type, empty encoding */ ICSPreview;
@property (nonatomic) void /* unknown type, empty encoding */ allowsInviteResponses;
@property (nonatomic) void /* unknown type, empty encoding */ showsAddToCalendarForICSPreview;
@property (nonatomic) void /* unknown type, empty encoding */ showsUpdateCalendarForICSPreview;
@property (nonatomic) void /* unknown type, empty encoding */ showsDeleteForICSPreview;
@property (nonatomic) void /* unknown type, empty encoding */ allowsSubitems;
@property (nonatomic) void /* unknown type, empty encoding */ showsOutOfDateMessage;
@property (nonatomic) void /* unknown type, empty encoding */ showsDelegatorMessage;
@property (nonatomic) void /* unknown type, empty encoding */ showsDelegateMessage;
@property (nonatomic) void /* unknown type, empty encoding */ showsDetectedConferenceItem;
@property (nonatomic) void /* unknown type, empty encoding */ minimalMode;
@property (nonatomic) void /* unknown type, empty encoding */ noninteractivePlatterMode;
@property (nonatomic) void /* unknown type, empty encoding */ isLargeDayView;

- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)doneButtonTapped;
- (id)initWithCoder:(id)a0;
- (void)eventEditViewCompletedWith:(long long)a0 eventID:(id)a1 waitUntil:(id)a2;
- (void)eventEditViewPresented:(BOOL)a0;

@end
