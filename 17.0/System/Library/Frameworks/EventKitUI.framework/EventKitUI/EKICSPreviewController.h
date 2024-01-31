@class UIViewController, NSString, EKEvent, EKEventStore, EKEventViewController, EKICSPreviewModel;
@protocol EKICSPreviewControllerDelegate;

@interface EKICSPreviewController : NSObject <EKEventViewDelegatePrivateAllInProcess, EKICSPreviewListDelegate, EKCalendarChooserDelegate> {
    EKEvent *_eventFromUID;
    EKEventStore *_eventStore;
    EKEventViewController *_currentImport;
    UIViewController *_contentViewController;
    BOOL _importing;
    BOOL _hasCustomCancelButton;
    long long _cancelButtonType;
}

@property (weak, nonatomic) id<EKICSPreviewControllerDelegate> previewDelegate;
@property (readonly, nonatomic) EKICSPreviewModel *model;
@property (nonatomic) BOOL showListViewForOneEvent;
@property (nonatomic) BOOL allowsImport;
@property (nonatomic) BOOL allowsEditing;
@property (nonatomic) BOOL allowsSubitems;
@property (nonatomic) unsigned long long actionsState;
@property (readonly, nonatomic) int eventUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)viewController;
- (void)dealloc;
- (void)attemptDisplayReviewPrompt;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 eventStore:(id)a1 options:(unsigned long long)a2;
- (id)initWithData:(id)a0 eventStore:(id)a1;
- (void)_updateCancelButton;
- (id)initWithURL:(id)a0 eventStore:(id)a1 options:(unsigned long long)a2;
- (BOOL)_anyCalendarsSupportingImport;
- (BOOL)_calendarSupportsImport:(id)a0;
- (unsigned long long)_countOfCalendarsSupportingImport;
- (void)_createCancelButtonWithType:(long long)a0 target:(id)a1 action:(SEL)a2;
- (void)_databaseChanged:(id)a0;
- (id)_defaultCalendarForImport;
- (void)_enumerateSupportedCalendarsUsingBlock:(id /* block */)a0;
- (BOOL)_shouldShowCalendarChooser;
- (void)calendarChooserDidCancel:(id)a0;
- (void)calendarChooserDidFinish:(id)a0;
- (id)detailViewForEvent:(id)a0 eventInRealStore:(BOOL)a1 showUpdate:(BOOL)a2 showDelete:(BOOL)a3;
- (void)eventViewController:(id)a0 didCompleteWithAction:(long long)a1;
- (void)eventViewControllerDidRequestAddToCalendar:(id)a0;
- (BOOL)eventViewControllerShouldAlwaysShowNavBar:(id)a0;
- (BOOL)eventViewControllerShouldDismissSelf:(id)a0;
- (void)handleDidImportEvent:(id)a0 fromController:(id)a1 intoCalendar:(id)a2;
- (void)handleImportEventError;
- (void)icsPreviewListController:(id)a0 didSelectEvent:(id)a1;
- (void)icsPreviewListControllerDidRequestImportAll:(id)a0;
- (void)importAllIntoCalendar:(id)a0;
- (void)importAllRequested:(id)a0;
- (void)importEventFromController:(id)a0 intoCalendar:(id)a1;
- (id)initWithEventObjectID:(id)a0 eventStore:(id)a1;
- (id)initWithEventUID:(int)a0 eventStore:(id)a1;
- (id)initWithURL:(id)a0 eventStore:(id)a1;
- (void)presentCalendarChooserForController:(id)a0;
- (void)setCancelButtonWithTarget:(id)a0 action:(SEL)a1;
- (id)singleExistingEventUniqueID;

@end
