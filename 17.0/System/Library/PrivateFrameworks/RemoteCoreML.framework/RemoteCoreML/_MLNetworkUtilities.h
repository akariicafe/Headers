@interface _MLNetworkUtilities : NSObject

+ (void)bindEndPoints:(id)a0 localAddr:(const char *)a1 localPort:(const char *)a2;
+ (id /* block */)configureTLS:(id)a0;
+ (id)createSecureConnectionParameter:(id /* block */)a0 useUDP:(BOOL)a1;
+ (id)doInitNetwork:(id)a0;
+ (void)setAWDL:(id)a0 useAWDL:(BOOL)a1;
+ (id)setProtocolStack:(id)a0 family:(unsigned long long)a1;
+ (void)setupBonjour:(id)a0 name:(const char *)a1 useBonjour:(BOOL)a2 useUDP:(BOOL)a3;
+ (void)setupListenerStateChangeHandler:(id)a0 useUDP:(BOOL)a1;

@end
