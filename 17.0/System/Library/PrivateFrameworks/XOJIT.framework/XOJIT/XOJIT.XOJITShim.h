@interface XOJIT.XOJITShim : NSObject {
    void /* unknown type, empty encoding */ jit;
}

- (id)init;
- (void).cxx_destruct;
- (id)initFromXPCConnection:(id)a0;
- (BOOL)addWithPtr:(const char *)a0 size:(long long)a1;
- (id)initFromXPCConnection:(id)a0 fromOOPJITLinkageType:(int)a1;
- (unsigned long long)lookupWithSymbolName:(id)a0;

@end
