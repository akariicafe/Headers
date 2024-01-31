@class NSXPCConnection;

@interface BCSConfigurationManager : NSObject

@property (retain, nonatomic) NSXPCConnection *serviceConnection;

- (void).cxx_destruct;
- (void)processAppClipImageWithURL:(id)a0 scale:(double)a1 completion:(id /* block */)a2;
- (void)setUpQRCodeControlCenterModuleWithCompletionHandler:(id /* block */)a0;

@end
