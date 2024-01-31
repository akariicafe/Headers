@class NSString, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, CMContinuityCaptureXPCServerActionCCD;

@interface CMContinuityCaptureXPCClientCCD : NSObject <CMContinuityCaptureXPCServerActionCCD, CMContinuityCaptureXPCClientActionCCD> {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    id<CMContinuityCaptureXPCServerActionCCD> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (id)_service;
- (void).cxx_destruct;
- (void)connectToContinuityCaptureServerWithDelegate:(id)a0;
- (void)disconnectSession;
- (void)pauseSessionForEvent:(long long)a0;
- (void)prepareForPullConversation:(id /* block */)a0;
- (void)requestContinuityCaptureUIConfiguration:(id /* block */)a0;
- (void)resumeStreamingForEvent:(long long)a0;
- (void)serverXPCConnectionInterrupted;
- (void)sessionDidUpdateWithConfiguration:(id)a0;
- (void)skipPlacementStep;
- (void)tearDownShield;

@end
