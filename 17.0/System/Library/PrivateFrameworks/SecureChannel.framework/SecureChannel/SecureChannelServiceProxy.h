@class NSObject, NSXPCConnection;
@protocol SecureChannelService;

@interface SecureChannelServiceProxy : NSObject <SecureChannelService> {
    NSXPCConnection *_connectionToService;
    NSObject<SecureChannelService> *_remoteObject;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)actionForURL:(id)a0 completion:(id /* block */)a1;
- (void)runApproverFlowForURL:(id)a0 completion:(id /* block */)a1;

@end
