@interface StickyKeyHandler : NSObject {
    void *_filter;
    struct __IOHIDService { } *_service;
}

- (void)removeObserver;
- (void)StickyKeyNotification:(id)a0;
- (id)initWithFilter:(void *)a0 service:(struct __IOHIDService { } *)a1;

@end
