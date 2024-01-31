@interface AAAppSessionManager : NSObject {
    void /* unknown type, empty encoding */ appSessionManager;
}

- (id)init;
- (void).cxx_destruct;
- (void)appSessionDidTerminate;
- (void)startAppSession;
- (id)createSessionManager;
- (void)endAppSession:(id /* block */)a0;
- (id)initWithTrackingConsent:(id)a0;

@end
