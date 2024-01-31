@class UIColor, NSString, EKEventStore, EKEvent, UIViewController;
@protocol EKEventEditViewDelegate, EKEventEditViewControllerImpl;

@interface EKEventEditViewController : UINavigationController <UIAdaptivePresentationControllerDelegate, EKUIManagedViewController> {
    UIViewController<EKEventEditViewControllerImpl> *_impl;
}

@property (nonatomic) BOOL shouldRecordPrecommitEvent;
@property (readonly, nonatomic) id precommitSerializedEvent;
@property (retain, nonatomic) UIColor *editorBackgroundColor;
@property (nonatomic) BOOL timeImplicitlySet;
@property (retain, nonatomic) NSString *suggestionKey;
@property (readonly, nonatomic) BOOL displayingRootView;
@property (nonatomic) BOOL ignoreUnsavedChanges;
@property (retain, nonatomic) NSString *eventCreationMethod;
@property (nonatomic) BOOL shouldRecordPrecommitEvent;
@property (readonly, nonatomic) id precommitSerializedEvent;
@property (retain, nonatomic) UIColor *editorBackgroundColor;
@property (nonatomic) BOOL timeImplicitlySet;
@property (retain, nonatomic) NSString *suggestionKey;
@property (readonly, nonatomic) BOOL displayingRootView;
@property (nonatomic) BOOL ignoreUnsavedChanges;
@property (retain, nonatomic) NSString *eventCreationMethod;
@property (weak, nonatomic) id<EKEventEditViewDelegate> editViewDelegate;
@property (retain, nonatomic) EKEventStore *eventStore;
@property (retain, nonatomic) EKEvent *event;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventEditViewControllerWithEvent:(id)a0 eventStore:(id)a1 editViewDelegate:(id)a2;

- (BOOL)wantsManagement;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)canManagePresentationStyle;
- (void)setShouldOverrideAuthorizationStatus:(BOOL)a0 withRemoteUIStatus:(long long)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)hasUnsavedChanges;
- (void).cxx_destruct;
- (id)initWithRemoteUI:(BOOL)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)completeAndSave;
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
