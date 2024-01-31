@class NSString;

@interface CRKIfaddrs : NSObject {
    struct ifaddrs { struct ifaddrs *x0; char *x1; unsigned int x2; struct sockaddr *x3; struct sockaddr *x4; struct sockaddr *x5; void *x6; } *mIfaddrs;
}

@property (readonly, nonatomic, getter=isInternetInterface) BOOL internetInterface;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *IPAddress;
@property (readonly, nonatomic) CRKIfaddrs *next;

- (id)initWithIfaddrs:(struct ifaddrs { struct ifaddrs *x0; char *x1; unsigned int x2; struct sockaddr *x3; struct sockaddr *x4; struct sockaddr *x5; void *x6; } *)a0;

@end
