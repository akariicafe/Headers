@interface WBSScopeTimeoutHandler : NSObject {
    id /* block */ _handler;
}

- (id)init;
- (void)dealloc;
- (id)initWithTimeout:(double)a0 autoBugCaptureDomain:(id)a1 detectedProcess:(id)a2 context:(id)a3;
- (void).cxx_destruct;
- (id)initWithTimeout:(double)a0 handler:(id /* block */)a1;

@end
