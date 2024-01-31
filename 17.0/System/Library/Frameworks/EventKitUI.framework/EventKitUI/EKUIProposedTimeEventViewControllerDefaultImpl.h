@class EKEvent, EKUIEmailCompositionManager, EKUIRecurrenceAlertController, NSString, EKCalendarEventInvitationNotificationAttendee;
@protocol EKEventViewDelegate;

@interface EKUIProposedTimeEventViewControllerDefaultImpl : EKEventViewControllerDefaultImpl <EKUIProposedTimeEventViewControllerImpl>

@property (retain) EKUIRecurrenceAlertController *recurrenceAlertController;
@property (retain) EKUIEmailCompositionManager *messageSendingManager;
@property (weak, nonatomic) id<EKEventViewDelegate> delegate;
@property (retain, nonatomic) EKEvent *event;
@property (nonatomic) BOOL calendarPreviewIsInlineDayView;
@property (nonatomic) BOOL allowsEditing;
@property (nonatomic) BOOL allowsCalendarPreview;
@property (retain, nonatomic) EKCalendarEventInvitationNotificationAttendee *proposedTimeAttendee;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) BOOL showsDetectedConferenceItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)items;
- (void).cxx_destruct;
- (id)proposedTime;
- (id)viewTitle;
- (void)invokeAction:(long long)a0 eventStatusButtonsView:(id)a1;
- (id)statusButtons;

@end
