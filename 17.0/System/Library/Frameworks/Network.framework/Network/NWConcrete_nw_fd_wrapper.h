@class NSString;

@interface NWConcrete_nw_fd_wrapper : NSObject <OS_nw_fd_wrapper> {
    int fd;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    unsigned long long guard;
    unsigned char guarded : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;

@end
