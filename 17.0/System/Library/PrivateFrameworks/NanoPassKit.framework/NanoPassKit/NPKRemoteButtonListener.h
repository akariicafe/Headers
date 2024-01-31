@class NSString, NPKDoublePressDelegationAssertion, NSObject;
@protocol OS_dispatch_queue, NPKRemoteButtonListenerDelegate;

@interface NPKRemoteButtonListener : NPKButtonListener <NPKDoublePressDelegationAssertionDelegate> {
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (retain, nonatomic) NPKDoublePressDelegationAssertion *delegationAssertion;
@property (nonatomic) BOOL enabled;
@property (weak, nonatomic) id<NPKRemoteButtonListenerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)doublePressDelegationAssertion:(id)a0 didReceiveTerminalAuthenticationRequestForPassWithUniqueID:(id)a1;
- (void)doublePressDelegationAssertionDidReceiveDelegatedDoublePressEvent:(id)a0;

@end
