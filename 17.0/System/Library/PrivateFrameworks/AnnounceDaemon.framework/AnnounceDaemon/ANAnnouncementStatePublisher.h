@class NSObject;
@protocol OS_dispatch_queue;

@interface ANAnnouncementStatePublisher : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    char *_name;
    int _registrationToken;
}

- (id)init;
- (void)dealloc;
- (BOOL)_setName:(id)a0;
- (BOOL)_setState:(unsigned long long)a0 withToken:(int)a1;
- (void)invalidate;
- (void)_register;
- (void).cxx_destruct;
- (void)_publishState:(unsigned long long)a0 name:(id)a1;
- (void)_unregister;
- (void)publishState:(unsigned long long)a0 name:(id)a1;

@end
