@interface _BSNSXPCInvalidCallbackTracking : NSObject {
    id /* block */ _lock_handler;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (void).cxx_destruct;

@end
