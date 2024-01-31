@class NSString, TCSCall, NSXPCConnection;
@protocol TCSCallCenterDelegate;

@interface TCSCallCenter : NSObject <TCSClientXPC> {
    NSXPCConnection *_connection;
    TCSCall *_call;
}

@property (weak, nonatomic) id<TCSCallCenterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)disconnectCall:(id)a0;
- (void)invalidate;
- (void)applicationWillEnterForeground;
- (id)activeCall;
- (void).cxx_destruct;
- (void)callStatusChanged:(id)a0;
- (BOOL)hasValidConnection;
- (id)_callPassingPredicate:(id /* block */)a0;
- (void)callConnected:(id)a0;
- (id)currentCall;
- (id)endingCall;
- (void)logEntryForCallWithUniqueProxyIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)queryIsTinCannable:(id)a0;
- (void)remoteUplinkMuteChanged:(id)a0;
- (id)ringingCall;
- (void)sessionViewControllerViewDidAppear;
- (void)setUplinkMuted:(BOOL)a0 for:(id)a1 completion:(id /* block */)a2;
- (void)synchronouslyFetchCall;

@end
