@class NFApplet, NSString, NSDictionary;
@protocol NFContactlessPaymentSessionDelegate;

@interface NFContactlessPaymentSession : NFSession <NFContactlessPaymentSessionCallbacks> {
    NSDictionary *_appletsById;
    id<NFContactlessPaymentSessionDelegate> _delegate;
    unsigned long long _numActiveSEs;
    BOOL _fieldNotificationSent;
}

@property id<NFContactlessPaymentSessionDelegate> delegate;
@property (readonly, retain) NFApplet *activeApplet;
@property (readonly, retain) NFApplet *defaultApplet;
@property (readonly) unsigned long long numberOfActiveSecureElements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)appletWithIdentifier:(id)a0;
- (id)allApplets;
- (void)endSession;
- (id)felicaAppletState:(id)a0 error:(id *)a1;
- (void)didEndUnexpectedly;
- (id)felicaAppletState:(id)a0;
- (void).cxx_destruct;
- (id)transitAppletState:(id)a0 error:(id *)a1;
- (void)endSessionWithCompletion:(id /* block */)a0;
- (BOOL)stopCardEmulation;
- (BOOL)stopCardEmulation:(id *)a0;
- (void)didDetectField:(BOOL)a0;
- (void)didDetectFieldNotification:(id)a0;
- (void)didEndTransaction:(id)a0;
- (void)didExpireTransactionForApplet:(id)a0;
- (void)didExpressModeStateChange:(unsigned int)a0 withObject:(id)a1;
- (void)didFailDeferredAuthorization;
- (void)didFelicaStateChange:(id)a0;
- (void)didReceiveActivityTimeout:(id)a0;
- (void)didReceivePendingServerRequest;
- (void)didSelectApplet:(id)a0;
- (void)didStartSession:(id)a0;
- (void)didStartTransaction:(id)a0;
- (BOOL)setActivePaymentApplet:(id)a0 authorization:(id)a1;
- (BOOL)setActivePaymentApplet:(id)a0 authorization:(id)a1 error:(id *)a2;
- (BOOL)setActivePaymentApplet:(id)a0 makeDefault:(BOOL)a1 authorization:(id)a2;
- (BOOL)startCardEmulationWithAuthorization:(id)a0;
- (BOOL)startCardEmulationWithAuthorization:(id)a0 error:(id *)a1;
- (BOOL)startDeferredCardEmulationWithAuthorization:(id)a0;
- (BOOL)startDeferredCardEmulationWithAuthorization:(id)a0 error:(id *)a1;

@end
