@class NSXPCConnection;

@interface AUMessageChannel_XPC : NSObject <AUMessageChannel> {
    NSXPCConnection *_xpcConnection;
}

@property (copy, nonatomic) id /* block */ callHostBlock;

- (id)initWithListenerEndpoint:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)callAudioUnit:(id)a0;

@end
