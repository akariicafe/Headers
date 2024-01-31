@class CRKIfaddrs;

@interface CRKIfaddrsEnumerator : NSEnumerator {
    struct ifaddrs { struct ifaddrs *x0; char *x1; unsigned int x2; struct sockaddr *x3; struct sockaddr *x4; struct sockaddr *x5; void *x6; } *mInterfaces;
    CRKIfaddrs *mCurrentInterface;
}

+ (id)enumeratorWithError:(id *)a0;
+ (id)internetInterfaceEnumeratorWithError:(id *)a0;

- (id)initWithError:(id *)a0;
- (id)init;
- (void)dealloc;
- (id)nextObject;
- (void).cxx_destruct;
- (id)initWithInterfaces:(struct ifaddrs { struct ifaddrs *x0; char *x1; unsigned int x2; struct sockaddr *x3; struct sockaddr *x4; struct sockaddr *x5; void *x6; } *)a0;

@end
