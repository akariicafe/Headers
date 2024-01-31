@interface PreviewShellKit.ListenerDelegate : NSObject <BSServiceConnectionListenerDelegate> {
    void /* unknown type, empty encoding */ connectionHandler;
}

- (id)init;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void).cxx_destruct;

@end
