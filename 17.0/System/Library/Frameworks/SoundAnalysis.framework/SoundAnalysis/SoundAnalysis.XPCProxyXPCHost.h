@interface SoundAnalysis.XPCProxyXPCHost : NSObject <SoundAnalysis.XPCProxyXPCProtocol> {
    void /* unknown type, empty encoding */ hosted;
}

- (id)init;
- (void).cxx_destruct;
- (void)xpcSendMessageWithData:(id)a0 proxy:(id)a1 completionHandler:(id /* block */)a2;

@end
