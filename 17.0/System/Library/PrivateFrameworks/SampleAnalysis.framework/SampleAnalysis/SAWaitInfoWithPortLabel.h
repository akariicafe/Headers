@class NSString;

@interface SAWaitInfoWithPortLabel : SAWaitInfo {
    NSString *_portName;
    unsigned short _portFlags;
    unsigned char _portDomain;
}

@property (retain) NSString *portName;
@property unsigned long long portFlags;
@property unsigned long long portDomain;

- (void).cxx_destruct;
- (id)initWithKCDataWaitInfo:(const struct stackshot_thread_waitinfo_v2 { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned char x3; short x4; unsigned int x5; } *)a0;

@end
