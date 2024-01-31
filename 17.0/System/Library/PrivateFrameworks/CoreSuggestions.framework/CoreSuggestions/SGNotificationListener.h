@interface SGNotificationListener : NSObject {
    id /* block */ _callback;
    struct __CFString { } *_notification;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

- (void)_notify;
- (void)dealloc;
- (BOOL)unsubscribe;
- (void).cxx_destruct;
- (id)initWithNotification:(struct __CFString { } *)a0 callback:(id /* block */)a1;

@end
