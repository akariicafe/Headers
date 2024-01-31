@interface HAPCoreUtilsHTTPClient : NSObject <HAPCoreUtilsHTTPClient> {
    struct HTTPClientPrivate { } *_httpClient;
}

- (id)initWithQueue:(id)a0;
- (void)dealloc;
- (void)invalidate;
- (int)sendMessage:(struct HTTPMessagePrivate { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct HTTPMessagePrivate *x1; struct { char x0[8192]; unsigned long long x1; char *x2; unsigned long long x3; char *x4; unsigned long long x5; int x6; char *x7; unsigned long long x8; struct { char *x0; unsigned long long x1; char *x2; unsigned long long x3; char *x4; unsigned long long x5; char *x6; unsigned long long x7; char *x8; unsigned long long x9; char *x10; unsigned long long x11; char *x12; unsigned long long x13; char *x14; char *x15; char *x16; unsigned long long x17; char *x18; unsigned long long x19; } x9; char *x10; unsigned long long x11; int x12; char *x13; unsigned long long x14; unsigned char x15; unsigned long long x16; unsigned char x17; int x18; } x2; unsigned char x3; int x4; unsigned char x5; char *x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned char x10[1000]; char *x11; struct *x12; char *x13; unsigned long long x14; struct iovec { void *x0; unsigned long long x1; } x15[2]; struct iovec *x16; int x17; unsigned long long x18; int x19; int x20; int x21; void *x22; void *x23; void *x24; void *x25; void *x26; void *x27; void /* function */ *x28; void /* function */ *x29; id /* block */ x30; int x31; unsigned char x32; long long x33; char *x34; int x35; unsigned long long x36; unsigned int x37; } *)a0;
- (void)setDispatchQueue:(id)a0;
- (int)setProperty:(struct __CFString { } *)a0 value:(void *)a1;
- (void)setDelegate:(const struct { void *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } *)a0;
- (void)setTimeoutInSeconds:(int)a0;
- (void)setDebugDelegate:(const struct { void *x0; void /* function */ *x1; void /* function */ *x2; } *)a0;
- (int)getPeerAddress:(void *)a0 maxLength:(unsigned long long)a1 outLength:(unsigned long long *)a2;
- (int)setDestination:(const char *)a0 port:(int)a1;
- (void)setFlags:(unsigned int)a0 mask:(unsigned int)a1;
- (void)setTransportDelegate:(const struct { void *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } *)a0;

@end
