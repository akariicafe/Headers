@interface NWSSnapshotSource : NSObject {
    int _sockFd;
}

+ (id)routeSnapshotForIPv4Host:(struct sockaddr_in { unsigned char x0; unsigned char x1; unsigned short x2; struct in_addr { unsigned int x0; } x3; char x4[8]; } *)a0 viaInterfaceIndex:(int)a1;
+ (id)routeSnapshotForIPv6Host:(struct sockaddr_in6 { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; struct in6_addr { union { unsigned char x0[16]; unsigned short x1[8]; unsigned int x2[4]; } x0; } x4; unsigned int x5; } *)a0 viaInterfaceIndex:(int)a1;

- (id)init;
- (void)dealloc;
- (long long)recv:(void *)a0 length:(unsigned long long)a1 err:(int *)a2;
- (long long)send:(void *)a0 length:(unsigned long long)a1 err:(int *)a2;

@end
