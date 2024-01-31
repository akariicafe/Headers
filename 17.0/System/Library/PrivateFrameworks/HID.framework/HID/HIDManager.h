@class NSArray;

@interface HIDManager : NSObject {
    struct __IOHIDManager { } *_manager;
    id /* block */ _elementHandler;
    id /* block */ _deviceNotificationHandler;
    id /* block */ _inputReportHandler;
    id /* block */ _cancelHandler;
    BOOL _activated;
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _handlerLock;
}

@property (readonly) NSArray *devices;

- (void)close;
- (id)init;
- (void)dealloc;
- (void)open;
- (void)setDeviceNotificationHandler:(id /* block */)a0;
- (void)setInputElementMatching:(id)a0;
- (void)setInputElementHandler:(id /* block */)a0;
- (void)activate;
- (id)description;
- (void)setDispatchQueue:(id)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)setDeviceMatching:(id)a0;
- (void).cxx_destruct;
- (void)setCancelHandler:(id /* block */)a0;
- (void)cancel;
- (void)setInputReportHandler:(id /* block */)a0;
- (id)initWithOptions:(long long)a0;
- (void)openWithOptions:(long long)a0;
- (id)propertyForKey:(id)a0;

@end
