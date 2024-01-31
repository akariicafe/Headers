@class NSString, NSMutableDictionary, NSObject;
@protocol CSRemoteContentSessionHostDelegate, SBFAuthenticationStatusProvider, OS_dispatch_queue;

@interface CSRemoteContentSessionManager : NSObject <CSRemoteContentSessionPreferencesProvider> {
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    NSMutableDictionary *_sessionIDToSession;
    NSMutableDictionary *_serviceNameToPreferences;
}

@property (weak, nonatomic) id<CSRemoteContentSessionHostDelegate> forwardingHostDelegate;
@property (readonly, nonatomic) id<SBFAuthenticationStatusProvider> authenticationStatusProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createSessionWithDefinition:(id)a0;
- (void).cxx_destruct;
- (id)existingSessionsWithDefinition:(id)a0;
- (id)_queue_createSessionWithDefinition:(id)a0;
- (id)_queue_existingSessions;
- (id)_queue_existingSessionsWithDefinition:(id)a0;
- (void)didInvalidateSessionWithSessionID:(id)a0;
- (id)existingSessions;
- (id)initWithAuthenticationStatusProvider:(id)a0;
- (id)preferencesForRemoteContentSession:(id)a0;
- (void)remoteContentSession:(id)a0 didUpdateWithPreferences:(id)a1;

@end
