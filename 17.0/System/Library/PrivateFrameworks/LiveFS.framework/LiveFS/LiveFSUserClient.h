@interface LiveFSUserClient : NSObject {
    unsigned int ourPort;
}

+ (id)defaultClient;

- (id)init;
- (void)dealloc;
- (int)callStructMethod:(unsigned int)a0 inStruct:(const void *)a1 inSize:(unsigned long long)a2 outStruct:(void *)a3 outStructSize:(unsigned long long *)a4;
- (int)checkUserClientPort;
- (unsigned int)getConnPort;
- (int)getUserClientPort;
- (int)getUserClientPortForService:(const char *)a0;
- (int)setMainMachPort:(unsigned int)a0 forDomain:(id)a1;

@end
