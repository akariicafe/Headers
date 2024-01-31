@class UIColor, EKEvent, EKEventStore, NSString, _TtC10EventKitUI32EKEventEditViewControllerOOPImpl;
@protocol EKEventEditViewDelegate;

@interface EKEventEditViewControllerOOPWrapperImpl : UIViewController <EKEventEditViewControllerImpl> {
    NSString *_viewID;
}

@property (retain, nonatomic) _TtC10EventKitUI32EKEventEditViewControllerOOPImpl *vc;
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)setShouldOverrideAuthorizationStatus:(BOOL)a0 withRemoteUIStatus:(long long)a1;
- (BOOL)hasUnsavedChanges;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)initWithViewID:(id)a0;
- (void)completeAndSave;
- (id)_ekEventEditViewController;
- (id)_eventEditorForTestingOnly;
- (void)cancelEditing;
- (void)cancelEditingWithDelegateNotification:(BOOL)a0 forceCancel:(BOOL)a1;
- (void)completeAndSaveWithContinueBlock:(id /* block */)a0;
- (id)confirmDismissAlertController;
- (void)focusAndSelectStartDate;
- (void)focusAndSelectTitle;
- (void)focusTitle;
- (void)presentationControllerDidAttemptToDismiss;
- (void)refreshStartAndEndDates;
- (BOOL)willPresentDialogOnSave;

@end
