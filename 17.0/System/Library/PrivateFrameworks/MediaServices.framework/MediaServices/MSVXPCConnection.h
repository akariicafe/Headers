@interface MSVXPCConnection : NSXPCConnection

+ (void)registerLocalListener:(id)a0 withServiceName:(id)a1;
+ (void)unregisterLocalListerWithName:(id)a0;

- (id)initWithMachServiceName:(id)a0 options:(unsigned long long)a1;
- (id)initWithServiceName:(id)a0;

@end
