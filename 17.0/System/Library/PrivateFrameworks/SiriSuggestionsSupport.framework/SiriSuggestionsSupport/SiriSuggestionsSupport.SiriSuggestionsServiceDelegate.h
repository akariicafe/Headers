@interface SiriSuggestionsSupport.SiriSuggestionsServiceDelegate : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ client;
    void /* unknown type, empty encoding */ eventDrivenClient;
}

- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;

@end
