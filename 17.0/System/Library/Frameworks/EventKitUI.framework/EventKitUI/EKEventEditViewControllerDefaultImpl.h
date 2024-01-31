@class EKEventEditor, NSString, EKEventStore, EKEvent, UIColor;
@protocol EKEventEditViewDelegate;

@interface EKEventEditViewControllerDefaultImpl : UIViewController <EKCalendarItemEditorDelegate, EKEventEditViewControllerImpl> {
    EKEventStore *_store;
    EKEvent *_event;
    NSString *_eventId;
    BOOL _completedWithAction;
}

@property (retain, nonatomic) EKEventEditor *editor;
@property (retain, nonatomic) EKEventEditViewControllerDefaultImpl *strongSelf;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<EKEventEditViewDelegate> editViewDelegate;
@property (retain, nonatomic) EKEventStore *eventStore;
@property (retain, nonatomic) EKEvent *event;
@property (nonatomic) BOOL shouldRecordPrecommitEvent;
@property (readonly, nonatomic) id precommitSerializedEvent;
@property (retain, nonatomic) UIColor *editorBackgroundColor;
@property (nonatomic) BOOL timeImplicitlySet;
@property (retain, nonatomic) NSString *suggestionKey;
@property (nonatomic) BOOL ignoreUnsavedChanges;
@property (retain, nonatomic) NSString *eventCreationMethod;

+ (void)setDefaultDatesForEvent:(id)a0;

- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)attemptDisplayReviewPrompt;
- (void)setShouldOverrideAuthorizationStatus:(BOOL)a0 withRemoteUIStatus:(long long)a1;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)hasUnsavedChanges;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (BOOL)isModalInPresentation;
- (id)_rightBarButtonItem;
- (void)completeAndSave;
- (id)_confirmDismissAlertExplanationText;
- (id)_ekEventEditViewController;
- (id)_eventEditorForTestingOnly;
- (id)_leftBarButtonItem;
- (void)_storeChanged:(id)a0;
- (id)alertIconImage;
- (void)cancelEditing;
- (void)cancelEditingWithDelegateNotification:(BOOL)a0 forceCancel:(BOOL)a1;
- (void)completeAndSaveWithContinueBlock:(id /* block */)a0;
- (id)confirmDismissAlertController;
- (id)confirmPendingConferenceDismissAlertController;
- (void)editor:(id)a0 didCompleteWithAction:(long long)a1;
- (void)editor:(id)a0 prepareCalendarItemForEdit:(id)a1;
- (BOOL)editor:(id)a0 shouldCompleteWithAction:(long long)a1;
- (id)editorForCalendarItemEditor:(id)a0;
- (void)focusAndSelectStartDate;
- (void)focusAndSelectTitle;
- (void)focusTitle;
- (id)pasteboardManagerForCalendarItemEditor:(id)a0;
- (void)presentationControllerDidAttemptToDismiss;
- (void)presentationControllerDidAttemptToDismissWithPendingConference;
- (void)refreshStartAndEndDates;
- (BOOL)willPresentDialogOnSave;

@end
