@class NSMutableArray;

@interface ICDeviceHardwareHandler : NSObject {
    NSMutableArray *_deviceContexts;
    NSMutableArray *_disabledContexts;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _deviceContextsLock;
}

- (id)init;
- (void)addDeviceContext:(id)a0;
- (void)removeDeviceContext:(id)a0;

@end
