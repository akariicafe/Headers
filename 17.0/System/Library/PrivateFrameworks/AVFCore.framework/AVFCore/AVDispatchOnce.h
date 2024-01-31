@interface AVDispatchOnce : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _testFlag;
}

- (id)init;
- (void)runBlockOnce:(id /* block */)a0;

@end
