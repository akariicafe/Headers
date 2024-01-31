@class NSString, SYDocumentWorkflowsActivityChangeHandler, SYDocumentWorkflowsCloseConfirmationSettings, NSObject, SYApplicationStateObserver;
@protocol OS_dispatch_queue;

@interface SYDocumentWorkflowsActivityObserver : NSObject <NSUserActivityObserver> {
    NSObject<OS_dispatch_queue> *_observerQueue;
    SYApplicationStateObserver *_appStateObserver;
    SYDocumentWorkflowsCloseConfirmationSettings *_closeConfirmationSettings;
}

@property (retain, nonatomic) SYDocumentWorkflowsActivityChangeHandler *handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)_handleAppBecomeActive:(id)a0;
- (void)_handleAppResignActive:(id)a0;
- (void).cxx_destruct;
- (void)registerForAppStateNotifications;
- (void)userActivityDidBecomeCurrent:(id)a0 current:(BOOL)a1;
- (void)userActivityPersistentIdentifierWasChanged:(id)a0 persistentIdentifier:(id)a1 previousValue:(id)a2;
- (void)_handleActiveUserActivityChange:(id)a0;
- (void)_handleActiveUserActivityChangeAfterDelay:(id)a0;
- (void)_updateLinkedDocuments;

@end
