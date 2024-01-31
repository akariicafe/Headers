@interface ActionKitUI.InstapaperLoginSession : NSObject <IKEngineDelegate> {
    void /* unknown type, empty encoding */ engine;
    void /* unknown type, empty encoding */ username;
    void /* unknown type, empty encoding */ password;
    void /* unknown type, empty encoding */ continuation;
}

- (id)init;
- (void).cxx_destruct;
- (void)engine:(id)a0 didFailConnection:(id)a1 error:(id)a2;
- (void)engine:(id)a0 connection:(id)a1 didReceiveAuthToken:(id)a2 andTokenSecret:(id)a3;

@end
