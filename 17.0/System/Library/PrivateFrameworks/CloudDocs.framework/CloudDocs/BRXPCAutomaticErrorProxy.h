@class NSFileProviderService, NSXPCConnection;

@interface BRXPCAutomaticErrorProxy : FPXPCAutomaticErrorProxy <BRXPCAutomaticErrorProxy> {
    NSXPCConnection *_connection;
    NSFileProviderService *_service;
}

@property unsigned long long timeoutState;

+ (BOOL)sanitizeErrors;
+ (void)decrementConnectionRefCount:(id)a0;
+ (void)incrementConnectionRefCount:(id)a0;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0 service:(id)a1 interface:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
