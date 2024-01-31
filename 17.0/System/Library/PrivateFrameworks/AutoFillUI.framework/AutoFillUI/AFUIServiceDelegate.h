@class NSNumber, NSString, RTIInputSystemServiceSession, NSMutableDictionary, RTIDocumentTraits, NSObject, NSUUID;
@protocol OS_dispatch_queue;

@interface AFUIServiceDelegate : NSObject <AFUIModalUIDelegate, RTIInputSystemDelegate> {
    NSMutableDictionary *_sessionPanels;
    RTIDocumentTraits *_currentTraits;
    NSUUID *_sessionIDBeforeContactsUI;
    NSUUID *_sessionIDBeforeAuthentication;
    NSMutableDictionary *_queuedOperations;
    NSNumber *_trackedInputIdentifier;
}

@property (retain) NSObject<OS_dispatch_queue> *currentSessionQueue;
@property (retain, nonatomic) RTIInputSystemServiceSession *currentSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)inputSystemService:(id)a0 didCreateInputSession:(id)a1;
- (void).cxx_destruct;
- (void)inputSystemService:(id)a0 inputSessionDidUnpause:(id)a1 withReason:(id)a2;
- (void)inputSystemService:(id)a0 inputSessionDidDie:(id)a1;
- (void)inputSystemService:(id)a0 inputSessionDidPause:(id)a1 withReason:(id)a2;
- (void)inputSystemService:(id)a0 inputSession:(id)a1 documentStateDidChange:(id)a2;
- (void)inputSystemService:(id)a0 inputSession:(id)a1 documentTraitsDidChange:(id)a2;
- (void)inputSystemService:(id)a0 inputSession:(id)a1 performInputOperation:(id)a2;
- (void)inputSystemService:(id)a0 inputSessionDidBegin:(id)a1 options:(id)a2;
- (void)inputSystemService:(id)a0 inputSessionDidEnd:(id)a1 options:(id)a2;
- (void)inputSystemService:(id)a0 prepareForInputSession:(id)a1 options:(id)a2;
- (void)_displayPanelForSession:(id)a0 traits:(id)a1;
- (void)contactsUIDidEndWithCompletion:(id /* block */)a0;
- (BOOL)_checkAndSendQueuedTextOperationsIfNecessary;
- (id)_inputIdentifierForSession:(id)a0;
- (void)_sendAuthenticationStateOperation:(BOOL)a0 completion:(id /* block */)a1;
- (void)_sendOrQueueTextOperations:(id)a0 withInputIdentifier:(id)a1;
- (void)_sendTextOperations:(id)a0 toSession:(id)a1;
- (id)_setupPanelForSessionUUID:(id)a0;
- (BOOL)_shouldAutomaticallyDisplayPanelForDocumentTraits:(id)a0;
- (BOOL)_shouldDisplayPanelForSession:(id)a0 documentTraits:(id)a1;
- (void)_tearDownPanelForSessionUUID:(id)a0;
- (void)authenticationDidEndWithCompletion:(id /* block */)a0;
- (void)authenticationWillBeginWithCompletion:(id /* block */)a0;
- (void)contactsUIWillBeginWithCompletion:(id /* block */)a0;

@end
