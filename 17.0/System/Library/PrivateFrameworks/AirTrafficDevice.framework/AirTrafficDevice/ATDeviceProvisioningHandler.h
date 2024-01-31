@class NSString, ATDeviceSettings, ATGrappaSession;

@interface ATDeviceProvisioningHandler : NSObject <ATMessageLinkObserver, ATMessageLinkRequestHandler> {
    ATDeviceSettings *_settings;
    ATGrappaSession *_grappaSession;
    double _linkOpenTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)messageLinkWasOpened:(id)a0;
- (void).cxx_destruct;
- (void)messageLink:(id)a0 didReceiveRequest:(id)a1;
- (id)_getEndpointInfo;
- (void)_handleBeginSessionRequest:(id)a0 onMessageLink:(id)a1;
- (void)_handleCreateSessionRequest:(id)a0 onMessageLink:(id)a1;
- (void)_handleRegisterEndpointRequest:(id)a0 onMessageLink:(id)a1;
- (void)_processBeginSessionResponse:(id)a0 onMessageLink:(id)a1;
- (void)_processCreateSessionResponse:(id)a0 onMessageLink:(id)a1;
- (void)_processRegisterEndpointResponse:(id)a0 onMessageLink:(id)a1;
- (void)_sendBeginSessionRequestOnMessageLink:(id)a0;
- (void)_sendCreateSessionRequestWithData:(id)a0 onMessageLink:(id)a1;
- (void)_sendRegisterEndpointRequestOnMessageLink:(id)a0;
- (void)_setMessageLinkAsInitialized:(id)a0;

@end
