@interface PreviewsOSSupport.ServiceHubPreviewService : NSObject <UVServiceHubService> {
    void /* unknown type, empty encoding */ invalidationHandle;
    void /* unknown type, empty encoding */ shellConnection;
}

- (id)init;
- (void)activateWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)observeCancelation:(id /* block */)a0;

@end
