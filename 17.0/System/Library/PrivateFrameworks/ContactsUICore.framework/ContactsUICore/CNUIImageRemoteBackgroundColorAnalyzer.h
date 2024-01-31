@class NSXPCConnection;

@interface CNUIImageRemoteBackgroundColorAnalyzer : NSObject

@property (retain) NSXPCConnection *serviceConnection;

- (void)dealloc;
- (void)_closeConnection;
- (void)_openConnectionIfNeeded;
- (void).cxx_destruct;
- (void)getBackgroundColorOnImageData:(id)a0 reply:(id /* block */)a1;

@end
